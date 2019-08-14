import rclpy
from rclpy.node import Node
from std_msgs.msg import Float32MultiArray

import sympy as sp
from sympy import sin, cos, sqrt, Matrix, symbols, acos, atan, asin, N
sp.init_printing()

import scipy
from scipy import optimize

import numpy as np
import matplotlib.pyplot as plt

from math import pi


r = 10.349
d = 7.833
l1 = 6.697
l2 = 9.512
l3 = 17.007
l4 = 6.697
l5 = 23.5
l6 = 5
l7 = 7.505

file = open("foot_positions.txt", "r")

traj = []

for line in file:
	arr = line.split()
	traj.append([float(x) for x in arr])
	
file.close()


def forward(r, d, l1, l2, l3, l4, l5, l6, l7, theta1, theta2, theta3):
    J8 = Matrix([((d/2) + l1*sin(theta1) - l2*cos((atan(((r*sin(theta3) - l4*cos(theta2)*cos(theta3))-(r*sin(theta3) - l1*cos(theta1)*cos(theta3)))/(((-d/2) - l4*sin(theta2))-((d/2) + l1*sin(theta1)))))+(acos((l3**2 - (sqrt((((d/2) + l1*sin(theta1))-((-d/2) - l4*sin(theta2)))**2 + ((r*sin(theta3) - l1*cos(theta1)*cos(theta3))-(r*sin(theta3) - l4*cos(theta2)*cos(theta3)))**2))**2 - l2**2)/(-2*(sqrt((((d/2) + l1*sin(theta1))-((-d/2) - l4*sin(theta2)))**2 + ((r*sin(theta3) - l1*cos(theta1)*cos(theta3))-(r*sin(theta3) - l4*cos(theta2)*cos(theta3)))**2))*l2))))), \
                 (r*sin(theta3) + (-l1*cos(theta1) - l2*sin((atan(((r*sin(theta3) - l4*cos(theta2)*cos(theta3))-(r*sin(theta3) - l1*cos(theta1)*cos(theta3)))/(((-d/2) - l4*sin(theta2))-((d/2) + l1*sin(theta1)))))+(acos((l3**2 - (sqrt((((d/2) + l1*sin(theta1))-((-d/2) - l4*sin(theta2)))**2 + ((r*sin(theta3) - l1*cos(theta1)*cos(theta3))-(r*sin(theta3) - l4*cos(theta2)*cos(theta3)))**2))**2 - l2**2)/(-2*(sqrt((((d/2) + l1*sin(theta1))-((-d/2) - l4*sin(theta2)))**2 + ((r*sin(theta3) - l1*cos(theta1)*cos(theta3))-(r*sin(theta3) - l4*cos(theta2)*cos(theta3)))**2))*l2)))))*cos(theta3)), \
                 (r*cos(theta3) - (-l1*cos(theta1) - l2*sin((atan(((r*sin(theta3) - l4*cos(theta2)*cos(theta3))-(r*sin(theta3) - l1*cos(theta1)*cos(theta3)))/(((-d/2) - l4*sin(theta2))-((d/2) + l1*sin(theta1)))))+(acos((l3**2 - (sqrt((((d/2) + l1*sin(theta1))-((-d/2) - l4*sin(theta2)))**2 + ((r*sin(theta3) - l1*cos(theta1)*cos(theta3))-(r*sin(theta3) - l4*cos(theta2)*cos(theta3)))**2))**2 - l2**2)/(-2*(sqrt((((d/2) + l1*sin(theta1))-((-d/2) - l4*sin(theta2)))**2 + ((r*sin(theta3) - l1*cos(theta1)*cos(theta3))-(r*sin(theta3) - l4*cos(theta2)*cos(theta3)))**2))*l2)))))*sin(theta3))]) + \
         l5*((1/(sqrt(((((d/2) + l1*sin(theta1) - l2*cos((atan(((r*sin(theta3) - l4*cos(theta2)*cos(theta3))-(r*sin(theta3) - l1*cos(theta1)*cos(theta3)))/(((-d/2) - l4*sin(theta2))-((d/2) + l1*sin(theta1)))))+(acos((l3**2 - (sqrt((((d/2) + l1*sin(theta1))-((-d/2) - l4*sin(theta2)))**2 + ((r*sin(theta3) - l1*cos(theta1)*cos(theta3))-(r*sin(theta3) - l4*cos(theta2)*cos(theta3)))**2))**2 - l2**2)/(-2*(sqrt((((d/2) + l1*sin(theta1))-((-d/2) - l4*sin(theta2)))**2 + ((r*sin(theta3) - l1*cos(theta1)*cos(theta3))-(r*sin(theta3) - l4*cos(theta2)*cos(theta3)))**2))*l2))))))-((d/2) + l1*sin(theta1)))**2 + \
         (((r*sin(theta3) + (-l1*cos(theta1) - l2*sin((atan(((r*sin(theta3) - l4*cos(theta2)*cos(theta3))-(r*sin(theta3) - l1*cos(theta1)*cos(theta3)))/(((-d/2) - l4*sin(theta2))-((d/2) + l1*sin(theta1)))))+(acos((l3**2 - (sqrt((((d/2) + l1*sin(theta1))-((-d/2) - l4*sin(theta2)))**2 + ((r*sin(theta3) - l1*cos(theta1)*cos(theta3))-(r*sin(theta3) - l4*cos(theta2)*cos(theta3)))**2))**2 - l2**2)/(-2*(sqrt((((d/2) + l1*sin(theta1))-((-d/2) - l4*sin(theta2)))**2 + ((r*sin(theta3) - l1*cos(theta1)*cos(theta3))-(r*sin(theta3) - l4*cos(theta2)*cos(theta3)))**2))*l2)))))*cos(theta3)))-(r*sin(theta3) - l1*cos(theta1)*cos(theta3)))**2 + \
         (((r*cos(theta3) - (-l1*cos(theta1) - l2*sin((atan(((r*sin(theta3) - l4*cos(theta2)*cos(theta3))-(r*sin(theta3) - l1*cos(theta1)*cos(theta3)))/(((-d/2) - l4*sin(theta2))-((d/2) + l1*sin(theta1)))))+(acos((l3**2 - (sqrt((((d/2) + l1*sin(theta1))-((-d/2) - l4*sin(theta2)))**2 + ((r*sin(theta3) - l1*cos(theta1)*cos(theta3))-(r*sin(theta3) - l4*cos(theta2)*cos(theta3)))**2))**2 - l2**2)/(-2*(sqrt((((d/2) + l1*sin(theta1))-((-d/2) - l4*sin(theta2)))**2 + ((r*sin(theta3) - l1*cos(theta1)*cos(theta3))-(r*sin(theta3) - l4*cos(theta2)*cos(theta3)))**2))*l2)))))*sin(theta3)))-(r*cos(theta3) + l1*cos(theta1)*sin(theta3)))**2))) * \
         (Matrix([((d/2) + l1*sin(theta1) - l2*cos((atan(((r*sin(theta3) - l4*cos(theta2)*cos(theta3))-(r*sin(theta3) - l1*cos(theta1)*cos(theta3)))/(((-d/2) - l4*sin(theta2))-((d/2) + l1*sin(theta1)))))+(acos((l3**2 - (sqrt((((d/2) + l1*sin(theta1))-((-d/2) - l4*sin(theta2)))**2 + ((r*sin(theta3) - l1*cos(theta1)*cos(theta3))-(r*sin(theta3) - l4*cos(theta2)*cos(theta3)))**2))**2 - l2**2)/(-2*(sqrt((((d/2) + l1*sin(theta1))-((-d/2) - l4*sin(theta2)))**2 + ((r*sin(theta3) - l1*cos(theta1)*cos(theta3))-(r*sin(theta3) - l4*cos(theta2)*cos(theta3)))**2))*l2))))), \
                 (r*sin(theta3) + (-l1*cos(theta1) - l2*sin((atan(((r*sin(theta3) - l4*cos(theta2)*cos(theta3))-(r*sin(theta3) - l1*cos(theta1)*cos(theta3)))/(((-d/2) - l4*sin(theta2))-((d/2) + l1*sin(theta1)))))+(acos((l3**2 - (sqrt((((d/2) + l1*sin(theta1))-((-d/2) - l4*sin(theta2)))**2 + ((r*sin(theta3) - l1*cos(theta1)*cos(theta3))-(r*sin(theta3) - l4*cos(theta2)*cos(theta3)))**2))**2 - l2**2)/(-2*(sqrt((((d/2) + l1*sin(theta1))-((-d/2) - l4*sin(theta2)))**2 + ((r*sin(theta3) - l1*cos(theta1)*cos(theta3))-(r*sin(theta3) - l4*cos(theta2)*cos(theta3)))**2))*l2)))))*cos(theta3)), \
                 (r*cos(theta3) - (-l1*cos(theta1) - l2*sin((atan(((r*sin(theta3) - l4*cos(theta2)*cos(theta3))-(r*sin(theta3) - l1*cos(theta1)*cos(theta3)))/(((-d/2) - l4*sin(theta2))-((d/2) + l1*sin(theta1)))))+(acos((l3**2 - (sqrt((((d/2) + l1*sin(theta1))-((-d/2) - l4*sin(theta2)))**2 + ((r*sin(theta3) - l1*cos(theta1)*cos(theta3))-(r*sin(theta3) - l4*cos(theta2)*cos(theta3)))**2))**2 - l2**2)/(-2*(sqrt((((d/2) + l1*sin(theta1))-((-d/2) - l4*sin(theta2)))**2 + ((r*sin(theta3) - l1*cos(theta1)*cos(theta3))-(r*sin(theta3) - l4*cos(theta2)*cos(theta3)))**2))*l2)))))*sin(theta3))]) - \
         Matrix([(d/2) + l1*sin(theta1), r*sin(theta3) - l1*cos(theta1)*cos(theta3), r*cos(theta3) + l1*cos(theta1)*sin(theta3)]))) + \
         (l6+l7)*((1/(sqrt(((((d/2) + l1*sin(theta1) - l2*cos((atan(((r*sin(theta3) - l4*cos(theta2)*cos(theta3))-(r*sin(theta3) - l1*cos(theta1)*cos(theta3)))/(((-d/2) - l4*sin(theta2))-((d/2) + l1*sin(theta1)))))+(acos((l3**2 - (sqrt((((d/2) + l1*sin(theta1))-((-d/2) - l4*sin(theta2)))**2 + ((r*sin(theta3) - l1*cos(theta1)*cos(theta3))-(r*sin(theta3) - l4*cos(theta2)*cos(theta3)))**2))**2 - l2**2)/(-2*(sqrt((((d/2) + l1*sin(theta1))-((-d/2) - l4*sin(theta2)))**2 + ((r*sin(theta3) - l1*cos(theta1)*cos(theta3))-(r*sin(theta3) - l4*cos(theta2)*cos(theta3)))**2))*l2))))))-((-d/2) - l4*sin(theta2)))**2 + \
         (((r*sin(theta3) + (-l1*cos(theta1) - l2*sin((atan(((r*sin(theta3) - l4*cos(theta2)*cos(theta3))-(r*sin(theta3) - l1*cos(theta1)*cos(theta3)))/(((-d/2) - l4*sin(theta2))-((d/2) + l1*sin(theta1)))))+(acos((l3**2 - (sqrt((((d/2) + l1*sin(theta1))-((-d/2) - l4*sin(theta2)))**2 + ((r*sin(theta3) - l1*cos(theta1)*cos(theta3))-(r*sin(theta3) - l4*cos(theta2)*cos(theta3)))**2))**2 - l2**2)/(-2*(sqrt((((d/2) + l1*sin(theta1))-((-d/2) - l4*sin(theta2)))**2 + ((r*sin(theta3) - l1*cos(theta1)*cos(theta3))-(r*sin(theta3) - l4*cos(theta2)*cos(theta3)))**2))*l2)))))*cos(theta3)))-(r*sin(theta3) - l4*cos(theta2)*cos(theta3)))**2 + \
         (((r*cos(theta3) - (-l1*cos(theta1) - l2*sin((atan(((r*sin(theta3) - l4*cos(theta2)*cos(theta3))-(r*sin(theta3) - l1*cos(theta1)*cos(theta3)))/(((-d/2) - l4*sin(theta2))-((d/2) + l1*sin(theta1)))))+(acos((l3**2 - (sqrt((((d/2) + l1*sin(theta1))-((-d/2) - l4*sin(theta2)))**2 + ((r*sin(theta3) - l1*cos(theta1)*cos(theta3))-(r*sin(theta3) - l4*cos(theta2)*cos(theta3)))**2))**2 - l2**2)/(-2*(sqrt((((d/2) + l1*sin(theta1))-((-d/2) - l4*sin(theta2)))**2 + ((r*sin(theta3) - l1*cos(theta1)*cos(theta3))-(r*sin(theta3) - l4*cos(theta2)*cos(theta3)))**2))*l2)))))*sin(theta3)))-(r*cos(theta3) + l4*cos(theta2)*sin(theta3)))**2))) * \
         ((Matrix([((d/2) + l1*sin(theta1) - l2*cos((atan(((r*sin(theta3) - l4*cos(theta2)*cos(theta3))-(r*sin(theta3) - l1*cos(theta1)*cos(theta3)))/(((-d/2) - l4*sin(theta2))-((d/2) + l1*sin(theta1)))))+(acos((l3**2 - (sqrt((((d/2) + l1*sin(theta1))-((-d/2) - l4*sin(theta2)))**2 + ((r*sin(theta3) - l1*cos(theta1)*cos(theta3))-(r*sin(theta3) - l4*cos(theta2)*cos(theta3)))**2))**2 - l2**2)/(-2*(sqrt((((d/2) + l1*sin(theta1))-((-d/2) - l4*sin(theta2)))**2 + ((r*sin(theta3) - l1*cos(theta1)*cos(theta3))-(r*sin(theta3) - l4*cos(theta2)*cos(theta3)))**2))*l2))))), \
                 (r*sin(theta3) + (-l1*cos(theta1) - l2*sin((atan(((r*sin(theta3) - l4*cos(theta2)*cos(theta3))-(r*sin(theta3) - l1*cos(theta1)*cos(theta3)))/(((-d/2) - l4*sin(theta2))-((d/2) + l1*sin(theta1)))))+(acos((l3**2 - (sqrt((((d/2) + l1*sin(theta1))-((-d/2) - l4*sin(theta2)))**2 + ((r*sin(theta3) - l1*cos(theta1)*cos(theta3))-(r*sin(theta3) - l4*cos(theta2)*cos(theta3)))**2))**2 - l2**2)/(-2*(sqrt((((d/2) + l1*sin(theta1))-((-d/2) - l4*sin(theta2)))**2 + ((r*sin(theta3) - l1*cos(theta1)*cos(theta3))-(r*sin(theta3) - l4*cos(theta2)*cos(theta3)))**2))*l2)))))*cos(theta3)), \
                 (r*cos(theta3) - (-l1*cos(theta1) - l2*sin((atan(((r*sin(theta3) - l4*cos(theta2)*cos(theta3))-(r*sin(theta3) - l1*cos(theta1)*cos(theta3)))/(((-d/2) - l4*sin(theta2))-((d/2) + l1*sin(theta1)))))+(acos((l3**2 - (sqrt((((d/2) + l1*sin(theta1))-((-d/2) - l4*sin(theta2)))**2 + ((r*sin(theta3) - l1*cos(theta1)*cos(theta3))-(r*sin(theta3) - l4*cos(theta2)*cos(theta3)))**2))**2 - l2**2)/(-2*(sqrt((((d/2) + l1*sin(theta1))-((-d/2) - l4*sin(theta2)))**2 + ((r*sin(theta3) - l1*cos(theta1)*cos(theta3))-(r*sin(theta3) - l4*cos(theta2)*cos(theta3)))**2))*l2)))))*sin(theta3))])) - \
         (Matrix([(-d/2) - l4*sin(theta2), r*sin(theta3) - l4*cos(theta2)*cos(theta3), r*cos(theta3) + l4*cos(theta2)*sin(theta3)]))))
    
    #return [N(J8[0]), N(J8[1]), N(J8[2])]
    return [N(J8[0]), N(J8[2]), N(J8[1])]


def inverse(r, d, l1, l2, l3, l4, l5, l6, l7, x, y, z): 
    init = (0.3, 1.2, 0)
    theta1, theta2, theta3 = symbols('theta1, theta2, theta3', real=True)
    expr = sp.utilities.lambdify([theta1, theta2, theta3], forward(r, d, l1, l2, l3, l4, l5, l6, l7, theta1, theta2, theta3))
    
    def norm(params):
        theta1, theta2, theta3 = params
        sol = expr(theta1, theta2, theta3)
        #return ((sol[0]-x)**2 + (sol[1]-y)**2 + (sol[2]-z)**2)
        return ((sol[0]-x)**2 + (sol[1]-y)**2 + (sol[2]-z)**2)
    
    inv = scipy.optimize.minimize(norm, init, bounds=((0, pi),(0, pi),(-pi/2, pi/2)))
    angles = inv.get('x')
    return [angles[0], angles[1], angles[2]]



class Inverse_Kinematics(Node):
	def __init__(self):
		super().__init__('ik')

		# the name of the channel/topic is 'hip_actuators' and contains theta1, theta2, theta3; message type is Float32MultiArray
		self.publisher = self.create_publisher(Float32MultiArray, 'hip_actuator_positions')

		self.timer = self.create_timer(0.025, self.timer_callback)
		self.i = 0
	

	def timer_callback(self):
		# msg2 is hip actuator angles, type Float32MultiArray of dim 1x3
		# multiarray(i,j,k) refers to the ith row, jth column, and kth channel
		msg = Float32MultiArray()
		i = self.i
		(xL, yL, zL, xR, yR, zR) = (traj[i][0], traj[i][1], traj[i][2], traj[i][3], traj[i][4], traj[i][5])

		#(theta1L, theta2L, theta3L) = inverse(r, d, l1, l2, l3, l4, l5, l6, l7, xL, yL, zL)
		#(theta1R, theta2R, theta3R) = inverse(r, d, l1, l2, l3, l4, l5, l6, l7, xR, yR, zR)

		#msg.data = [theta1L, theta2L, theta3L, theta1R, theta2R, theta3R, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0]
		msg.data = [xL, yL, zL, xR, yR, zR, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0]

		self.get_logger().info('Publishing: "%s"' % msg.data)
		self.publisher.publish(msg)

		self.i = (self.i + 1);# % len(traj); 

def main (args=None):
	rclpy.init(args=args)
	try:
		ik = Inverse_Kinematics()
		rclpy.spin(ik)
	finally:
		ik.destroy_node()
		rclpy.shutdown()

if __name__ == '__main__':
	main()
