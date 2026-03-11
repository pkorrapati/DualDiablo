#!/usr/bin/env python3

from dataclasses import dataclass
import matplotlib.pyplot as plt
import numpy as np
from numpy import pi
from math import cos, radians, sin, tan,  atan2, sqrt, degrees
import rclpy
from rclpy.node import Node
from dd_motion_msgs.msg import PoseCtrl
from geometry_msgs.msg import Twist, Transform
from tf_transformations import euler_from_quaternion

# Costants for Vehicle Definition
# 

# iitial position 0,0 

@dataclass      
class VEHICLE:
    L: float = 1.0 # Distance between front and rear axles in meters
    T: float = 0.3 # Distance between left and right wheels in meters
    D_MAX: float = 0.6  # Maximum steering angle in radians
    VEL_MAX: float = 2.0  # Maximum velocity in meters per second
    ACC_MAX: float = 1.0  # Maximum acceleration in meters per second squared
    DEC_MAX: float = -1.0  # Maximum deceleration in meters per second squared

path1 = np.array([])
path2 = np.array([])
path3 = np.array([])
path4 = np.array([])
path5 = np.array([])

points = np.array([])

# points2 = np.array([0, 4, 0.3, "walking"], 
#                    [2, 3, 0.3, "rolling"])

plt.figure()
plt.xlabel('x')
plt.ylabel('y')
plt.title('Generated path')
plt.ion()
plt.show(block=False)

def generatePath():                
    global points, path1, path2, path3, path4, path5
    r1 = 1.3 * VEHICLE.L / tan(VEHICLE.D_MAX)
    r2 = 1.3 * VEHICLE.L / tan(VEHICLE.D_MAX)
    r3 = 9       
    
    # Path 1
    th = np.linspace(-pi/2, -(pi/2) + radians(60), 4)                    
    x =  0.25 + r1 * np.cos(th)
    y =    r1 + r1 * np.sin(th)

    th = np.linspace((pi/2) + radians(60), pi/2, 4)        
    x = np.append(x,  4     + r2 * np.cos(th))
    y = np.append(y,  4 - r2 + r2 * np.sin(th))

    x = np.append(x,  16)
    y = np.append(y,  4)
    
    path1 = np.array([x, y]).T
    
    
    # PATH 2
    th = np.linspace(-pi/2, -(pi/2) + radians(60), 4)                    
    x =  0.25 + r1 * np.cos(th)
    y =    r1 + r1 * np.sin(th)

    th = np.linspace((pi/2) + radians(60), pi/2, 4)        
    x = np.append(x,  4     + r2 * np.cos(th))
    y = np.append(y,  2 - r2 + r2 * np.sin(th))

    x = np.append(x,  16)
    y = np.append(y,  2)
    
    path2 = np.array([x, y]).T
#     points = np.array([x, y]).T

    # PATH 3
    x = np.append([0.25],  16)
    y = np.append([0],  0)

    path3 = np.array([x, y]).T

    # PATH 4
    th = np.linspace(pi/2, (pi/2) - radians(45), 4)                    
    x =  0.25 + r1 * np.cos(th)
    y =  -r1 + r1 * np.sin(th)

    th = np.linspace(-(pi/2) - radians(45), -pi/2, 4)        
    x = np.append(x,  4         + r2 * np.cos(th))
    y = np.append(y,  -2 + r2 + r2 * np.sin(th))

    x = np.append(x,  16)
    y = np.append(y,  -2)

    path4 = np.array([x, y]).T

    # PATH 5
    th = np.linspace(pi/2, (pi/2) - radians(90), 4)                    
    x =  0.25 + r1 * np.cos(th)
    y =  -r1 + r1 * np.sin(th)

    th = np.linspace(-(pi/2) - radians(90), -pi/2, 4)        
    x = np.append(x,  4         + r2 * np.cos(th))
    y = np.append(y,  -4 + r2 + r2 * np.sin(th))

    x = np.append(x,  16)
    y = np.append(y,  -4)

    path5 = np.array([x, y]).T

    points = path5

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
            self.p.bl_z = -200.0 #-200.0
            self.p.br_z = -200.0 #-200.0

            pub_rate = 10.0
            self.ptId:int = 0
            self.delta = 0.0
            self.vel = 0.25
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
        #     th = atan2(2*(rot.w * rot.z + rot.x * rot.y), 1 - 2*(rot.x**2 + rot.y**2))
            th = euler_from_quaternion([rot.x, rot.y, rot.z, rot.w])[2]            
            xf = msg.translation.x + 0.5 * cos(th)
            yf = msg.translation.y + 0.5 * sin(th)

            T = [[ cos(th), -sin(th), msg.translation.x],
                 [ sin(th),  cos(th), msg.translation.y], 
                 [       0,        0,                 1]] #R inverse
            
            i = min(self.ptId, len(points)-1)
            
            Pb = np.dot(np.linalg.inv(T), np.array([points[i, 0], points[i, 1], 1]).T)            
            l = (points[i, 1] - yf)**2 + (points[i, 0] - xf)**2
            e = sqrt(l)
            
            if e < 0.5:
                
                self.ptId = min(self.ptId + 1, len(points))                
                
                if self.ptId == len(points):
                    self.vel = 0.0

            if self.ptId > 0 and self.ptId < len(points):
                self.psiDesired = atan2(points[self.ptId, 1] - points[self.ptId-1, 1], points[self.ptId, 0] - points[self.ptId-1, 0])

            # d = l * cos((pi/2) - self.psiDesired + th)
            #self.delta = th - self.psiDesired  #-max(min(atan2(points[self.ptId, 1] - yf, points[self.ptId, 0] - xf), 0.52) ,-0.52)
            # self.delta = th - self.psiDesired -atan2(0.5*d, self.vel if self.vel > 0 else 1)
            #self.delta = th - atan2(points[self.ptId, 1] - yf, points[self.ptId, 0] - xf) #-atan2(0.5*d, self.vel if self.vel > 0 else 1)
            self.delta = -atan2(Pb[1], Pb[0])                        
            self.delta = max(min(self.delta, VEHICLE.D_MAX) ,-VEHICLE.D_MAX)

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