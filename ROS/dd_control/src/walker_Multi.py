#!/usr/bin/env python3

# import matplotlib.pyplot as plt
from dataclasses import dataclass
import numpy as np
import numpy.linalg as nalg
from numpy import pi
from math import cos, sin, atan2, sqrt, degrees, radians
import rclpy
from rclpy.node import Node
from dd_motion_msgs.msg import PoseCtrl
from geometry_msgs.msg import Twist, Transform

# plt.figure()
# plt.xlabel('x')
# plt.ylabel('y')
# plt.title('Generated path')
# plt.ion()
# plt.show(block=False)

@dataclass
class Stride:
    PEAK_OFFSET: float # Peak offset from center in mm, where is the heighest point of the stride
    STR_OFFSET: float # Stride offset from center in mm, where is the center of the stride 
    LENGTH: float # Stride length in mm
    HEIGHT: float # Stride height in mm

    PH_STRT: float # Phase at which stride starts in degrees
    PH_END: float   # Phase at which stride ends in degrees

PHASE_START = 0
PHASE_END = 200

PEAK_OFFSET = 20 
STRIDE_OFFSET = 10 # Offset
STRIDE_LENGTH = 150 #mm
STRIDE_HEIGHT = 85
STRIDE_HEIGHT_B = 90

BASE_HEIGHT = 260.0 #mm

flStride = Stride(PEAK_OFFSET, STRIDE_OFFSET, STRIDE_LENGTH, STRIDE_HEIGHT, PHASE_START, PHASE_END)
frStride = Stride(PEAK_OFFSET, STRIDE_OFFSET, STRIDE_LENGTH, STRIDE_HEIGHT, PHASE_START, PHASE_END)
blStride = Stride(PEAK_OFFSET+0, STRIDE_OFFSET-10, STRIDE_LENGTH, STRIDE_HEIGHT + 25, PHASE_START+20, PHASE_END)
brStride = Stride(PEAK_OFFSET+0, STRIDE_OFFSET-10, STRIDE_LENGTH, STRIDE_HEIGHT + 25, PHASE_START+20, PHASE_END)


P = [0, 0, 0] # Parabola coeffs. ax**2 + bx + c
L = [0, 0]

def calcWalk():
        # d = 10, l = 120, h = 150
        global P, L
        # Calculate the parameters of a parabola
        # Boundary conditions
        Z = [0, 0, STRIDE_HEIGHT]
        X = [ STRIDE_LENGTH/2 - STRIDE_OFFSET, 
             -2*PEAK_OFFSET - STRIDE_LENGTH/2 + STRIDE_OFFSET, 
             - PEAK_OFFSET]

        A = [[X[0]**2, X[0], 1],
             [X[1]**2, X[1], 1],
             [X[2]**2, X[2], 1]]
        
        P = np.dot(nalg.inv(A), np.transpose(Z))
        xl = -STRIDE_OFFSET - STRIDE_LENGTH/2
        zl = np.dot(P.T, np.transpose([xl**2, xl, 1]))

        Zl = [zl, 0]
        B = [[-STRIDE_OFFSET - STRIDE_LENGTH/2, 1], 
             [-STRIDE_OFFSET + STRIDE_LENGTH/2, 1]]
        
        L = np.dot(nalg.inv(B), np.transpose(Zl))


# def getWalk(phase):
#         phase = phase % 360.0

#         x = STRIDE_OFFSET + 0.5 * STRIDE_LENGTH * cos(radians(phase))
#         z = 0.0

#         if phase >= PHASE_END:
#                 z = np.dot(P.T, np.transpose([x**2, x, 1]))

#         return x, z 

def getWalk(phase, stride: Stride):
        phase = phase % 360.0

        risePhase = stride.PH_END
        flatPhase = 360 - risePhase

        z = 0.0
        x = 0.0

        if phase <= stride.PH_END:
                phi = 180 * phase / risePhase
                x = -stride.STR_OFFSET + 0.5 * stride.LENGTH * cos(radians(phi))
                z = np.dot(P.T, np.transpose([x**2, x, 1]))

        else:
                phi = 180 + 180 * (phase-stride.PH_END) / flatPhase
                x = -stride.STR_OFFSET + 0.5 * stride.LENGTH * cos(radians(phi))
                z = np.dot(L.T, np.transpose([x, 1]))
        
        return x, z       

# calcWalk()
# for phase in range(0, 360):
#         (x, z) = getWalk(phase)
#         plt.plot(x, z, 'ro')            
#         plt.draw()
#         plt.pause(0.0001)


class CtrlNode(Node):
        def __init__(self):
                super().__init__('ctrl_node')            
                
                self.t = Twist()
                self.p = PoseCtrl()

                self.phase = 0.0

                self.p.fl_z = -BASE_HEIGHT
                self.p.fr_z = -BASE_HEIGHT
                self.p.bl_z = -BASE_HEIGHT
                self.p.br_z = -BASE_HEIGHT

                pub_rate = 10.0
                self.ptId:int = 0
                self.delta = 0.0
                self.vel = 0.20 #0.3 #0.10 #0.6
                self.psiDesired = 0

                # Publisher and subscriber
                self.pubPose = self.create_publisher(PoseCtrl, '/poser', 3)
                self.pubVel = self.create_publisher(Twist, '/cmd_vel', 3)
                # self.subPose = self.create_subscription(Transform, '/transform', self._input_callback, 2)

                # Timer to publish at regular intervals
                period = 1.0 / max(pub_rate, 1e-6)
                self.timer = self.create_timer(period, self._timer_callback)

                self.pubVel.publish(self.t)
                self.pubPose.publish(self.p)

                # Store last received message (None until first message arrives)
                # self._last_msg = None
        
        def _timer_callback(self):
                self.phase = (self.phase + 5) % 360.0

                (x1f, z1f) = getWalk(self.phase, flStride)
                (x1b, z1b) = getWalk(self.phase, brStride)
                (x2f, z2f) = getWalk(self.phase + 180, frStride)
                (x2b, z2b) = getWalk(self.phase + 180, blStride)
                
                self.p.fl_x = x1f        
                self.p.fl_z = -BASE_HEIGHT + z1f

                self.p.br_x = x1b
                self.p.br_z = -BASE_HEIGHT + z1b

                self.p.fr_x = x2f        
                self.p.fr_z = -BASE_HEIGHT + z2f

                self.p.bl_x = x2b
                self.p.bl_z = -BASE_HEIGHT + z2b

                self.t.linear.x = self.vel
                self.p.f_delta = self.delta
                self.pubVel.publish(self.t)
                self.pubPose.publish(self.p)


        # def _input_callback(self, msg: Transform):
        #         rot = msg.rotation
        #         th = atan2(2*(rot.w * rot.z + rot.x * rot.y), 1 - 2*(rot.x**2 + rot.y**2))            
        #         xf = msg.translation.x + 0.5 * cos(th)
        #         yf = msg.translation.y + 0.5 * sin(th)

        #         T = [[ cos(th), -sin(th), msg.translation.x],
        #                 [ sin(th),  cos(th), msg.translation.y], 
        #                 [       0,        0,                 1]] #R inverse
        #         Pb = np.dot(np.linalg.inv(T), np.array([points[self.ptId, 0], points[self.ptId, 1], 1]).T)            

        #         l = (points[self.ptId, 1] - yf)**2 + (points[self.ptId, 0] - xf)**2
        #         e = sqrt(l)
        #         if e < 0.5:
        #         print(e)
        #         self.ptId = min(self.ptId + 1, len(points))                
                
        #         if self.ptId == len(points):
        #                 self.vel = 0.0

        #         if self.ptId > 0:
        #         self.psiDesired = atan2(points[self.ptId, 1] - points[self.ptId-1, 1], points[self.ptId, 0] - points[self.ptId-1, 0])

        #         # d = l * cos((pi/2) - self.psiDesired + th)
        #         #self.delta = th - self.psiDesired  #-max(min(atan2(points[self.ptId, 1] - yf, points[self.ptId, 0] - xf), 0.52) ,-0.52)
        #         # self.delta = th - self.psiDesired -atan2(0.5*d, self.vel if self.vel > 0 else 1)
        #         #self.delta = th - atan2(points[self.ptId, 1] - yf, points[self.ptId, 0] - xf) #-atan2(0.5*d, self.vel if self.vel > 0 else 1)
        #         self.delta = -atan2(Pb[1], Pb[0])
        #         print(self.delta)            
        #         self.delta = max(min(self.delta, 0.6) ,-0.6)

        #         plt.plot(xf, yf, 'ro')
        #         # plt.gca().set_aspect('equal', 'box')    
        #         plt.draw()
        #         plt.pause(0.001)   

def main(args=None):
        rclpy.init(args=args)
        calcWalk()        
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