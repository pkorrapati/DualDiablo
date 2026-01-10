#!/usr/bin/env python3

import matplotlib.pyplot as plt
import numpy as np
from numpy import pi
from math import cos, sin, atan2, sqrt, degrees
import rclpy
from rclpy.node import Node
from dd_motion_msgs.msg import PoseCtrl
from geometry_msgs.msg import Twist, Transform

points = np.array([])

plt.figure()
plt.xlabel('x')
plt.ylabel('y')
plt.title('Generated path')
plt.ion()
plt.show(block=False)

def generatePath():                
    global points
    r1 = 12
    r2 = 20
    r3 = 9       
    
    th = np.linspace(pi/2, 0, 5)                    
    x =   0 + r1 * np.cos(th)
    y = -r1 + r1 * np.sin(th)

    th = np.linspace(0, -pi/2, 6)        
    x = np.append(x,  r1 - r2 + r2 * np.cos(th))
    y = np.append(y, -r1      + r2 * np.sin(th))
          
    th = np.linspace(-pi/2, -pi, 5)
    x = np.append(x,  r1 - r2     + r3 * np.cos(th))
    y = np.append(y, -r1 - r2 +r3 + r3 * np.sin(th))

    x = np.add(x, 4)
    y = np.add(y, 7)

    points = np.array([x, y]).T
    # print(points)
    
    # plt.pause(0.001)

class CtrlNode(Node):
    def __init__(self):
            super().__init__('ctrl_node')

            plt.plot(points[:, 0], points[:, 1], marker='o')
            plt.gca().set_aspect('equal', 'box')    
            plt.draw()    
            plt.pause(0.001)

            self.t = Twist()
            self.p = PoseCtrl()
            self.p.fl_z = -200.0
            self.p.fr_z = -200.0
            self.p.bl_z = -200.0
            self.p.br_z = -200.0

            pub_rate = 10.0
            self.ptId:int = 0
            self.delta = 0.0
            self.vel = 0.6
            self.psiDesired = 0

            # Publisher and subscriber
            self.pubPose = self.create_publisher(PoseCtrl, '/poser', 3)
            self.pubVel = self.create_publisher(Twist, '/cmd_vel', 3)
            self.subPose = self.create_subscription(Transform, '/transform', self._input_callback, 2)

            # Timer to publish at regular intervals
            period = 1.0 / max(pub_rate, 1e-6)
            self.timer = self.create_timer(period, self._timer_callback)

            self.pubVel.publish(self.t)
            self.pubPose.publish(self.p)

            # Store last received message (None until first message arrives)
            # self._last_msg = None

    def _input_callback(self, msg: Transform):
            rot = msg.rotation
            th = atan2(2*(rot.w * rot.z + rot.x * rot.y), 1 - 2*(rot.x**2 + rot.y**2))            
            xf = msg.translation.x + 0.5 * cos(th)
            yf = msg.translation.y + 0.5 * sin(th)

            T = [[ cos(th), -sin(th), msg.translation.x],
                 [ sin(th),  cos(th), msg.translation.y], 
                 [       0,        0,                 1]] #R inverse
            Pb = np.dot(np.linalg.inv(T), np.array([points[self.ptId, 0], points[self.ptId, 1], 1]).T)            

            l = (points[self.ptId, 1] - yf)**2 + (points[self.ptId, 0] - xf)**2
            e = sqrt(l)
            if e < 0.5:
                print(e)
                self.ptId = min(self.ptId + 1, len(points))                
                
                if self.ptId == len(points):
                    self.vel = 0.0

            if self.ptId > 0:
                self.psiDesired = atan2(points[self.ptId, 1] - points[self.ptId-1, 1], points[self.ptId, 0] - points[self.ptId-1, 0])

            # d = l * cos((pi/2) - self.psiDesired + th)
            #self.delta = th - self.psiDesired  #-max(min(atan2(points[self.ptId, 1] - yf, points[self.ptId, 0] - xf), 0.52) ,-0.52)
            # self.delta = th - self.psiDesired -atan2(0.5*d, self.vel if self.vel > 0 else 1)
            #self.delta = th - atan2(points[self.ptId, 1] - yf, points[self.ptId, 0] - xf) #-atan2(0.5*d, self.vel if self.vel > 0 else 1)
            self.delta = -atan2(Pb[1], Pb[0])
            print(self.delta)            
            self.delta = max(min(self.delta, 0.6) ,-0.6)

            plt.plot(xf, yf, 'ro')
            # plt.gca().set_aspect('equal', 'box')    
            plt.draw()
            plt.pause(0.001)                                        

    def _timer_callback(self):
            self.t.linear.x = self.vel
            self.p.f_delta = self.delta
            self.pubVel.publish(self.t)
            self.pubPose.publish(self.p)

def main(args=None):
        rclpy.init(args=args)
        generatePath()
        node = CtrlNode()
        try:
                rclpy.spin(node)
        except KeyboardInterrupt:
                pass
        finally:
                node.destroy_node()
                rclpy.shutdown()

if __name__ == '__main__':
        main()