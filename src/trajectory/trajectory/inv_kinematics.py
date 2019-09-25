import rclpy
from rclpy.node import Node
from autopilot_msgs.msg import ActuatorPositions

#import sympy as sp
#from sympy import sin, cos, sqrt, Matrix, symbols, acos, atan, asin, N
#sp.init_printing()

#import scipy
#from scipy import optimize

#import numpy as np
#import matplotlib.pyplot as plt

#from math import pi
#from numpy import matrix

def generate_trajectory(step_length, step_radius, step_height, small_step_height, z_offset, ellipse_num, straight_num, step_num, left):
    traj = []

    # Generate left trajectory: Swing, Shift, Stop, Shift
    if (left):
        # Swing
        traj += generate_small_step(small_step_height, -step_length, 0.0, z_offset, step_num)
        traj += generate_ellipse(step_length, step_radius, step_height, 0.0, 0.0, z_offset + small_step_height, ellipse_num)[::-1]
        traj += generate_small_step(small_step_height, step_length, 0.0, z_offset, step_num)[::-1]

        # Shift Back
        traj += generate_straight_path(step_length, 0.0, 0.0, z_offset, straight_num)[::-1]

        # Stop
        traj += generate_stop(0.0, 0.0, z_offset, ellipse_num)

        # Shift Back
        traj += generate_straight_path(step_length, -step_length, 0.0, z_offset, straight_num)[::-1]


    # Generate right trajectory: Stop, Shift, Swing, Shift
    else:
        # Stop
        traj += (generate_stop(0.0, 0.0, z_offset, ellipse_num))

        # Shift Back
        traj += generate_straight_path(step_length, -step_length, 0.0, z_offset, straight_num)[::-1]

        # Swing
        traj += generate_small_step(small_step_height, -step_length, 0.0, z_offset, step_num)
        traj += generate_ellipse(step_length, step_radius, step_height, 0.0, 0.0, z_offset + small_step_height, ellipse_num)[::-1]
        traj += generate_small_step(small_step_height, step_length, 0.0, z_offset, step_num)[::-1]

        # Shift Back
        traj += generate_straight_path(step_length, 0.0, 0.0, z_offset, straight_num)[::-1]

    return traj


def generate_straight_path(step_length, x_offset, y_offset, z_offset, num_p):
    traj = []

    for i in range(num_p):
        traj.append([trapezoidal_function(i, num_p, step_length) + x_offset, y_offset, z_offset])

    return traj

def generate_small_step(small_step_height, x_offset, y_offset, z_offset, num_p):
    traj = []

    for i in range(num_p):
        traj.append([x_offset, y_offset, trapezoidal_function(i, num_p, small_step_height) + z_offset])

    return traj

def generate_ellipse(step_length, step_radius, step_height, x_offset, y_offset, z_offset, num_p):
    a = step_radius
    b = step_length
    c = step_height

    v = np.arctan(c/a)

    traj = []

    for i in range(num_p):

        x_0 = b*np.cos(trapezoidal_function(i, num_p, pi))
        y_0 = np.sqrt(a**2+c**2)*np.sin(trapezoidal_function(i, num_p, pi))

        x = x_0
        y = y_0*np.cos(v)
        z = y_0*np.sin(v)

        traj.append([x + x_offset, y + y_offset, z + z_offset])

    return traj

def generate_stop(x_offset, y_offset, z_offset, num_p):
    traj = []

    for i in range(num_p):
        traj.append([x_offset, y_offset, z_offset])

    return traj

def trapezoidal_function(curr_time, total_time, max_pos):

    half = total_time/2;

    if (curr_time <= half):
        curr_pos = (max_pos/2)/half**2 * curr_time**2;
    else:
        curr_pos = -(max_pos/2)/half**2 * (curr_time - total_time)**2 + max_pos;

    return curr_pos

def forward(r, d, l1, l2, l3, l4, l5, l6, l7, theta1, theta2, theta3):        
    sin1 = sin(theta1)
    cos1 = cos(theta1)
    sin2 = sin(theta2)
    cos2 = cos(theta2)
    sin3 = sin(theta3)
    cos3 = cos(theta3)
                
    J0 = matrix([[0, 0, 0]])
    J1R = matrix([[(d/2), r*sin3, r*cos3]])
    J1L = matrix([[(-d/2), r*sin3, r*cos3]])
    J2 = matrix([[J1R.item(0) + l1*sin1, J1R.item(1) - l1*cos1*cos3, J1R.item(2) + l1*cos1*sin3]])
    J4 = matrix([[J1L.item(0) - l4*sin2, J1L.item(1) - l4*cos2*cos3, J1L.item(2) + l4*cos2*sin3]])

    a = sqrt((J2.item(0)-J4.item(0))**2 + (J2.item(1)-J4.item(1))**2) 
    beta = acos((l3**2 - a**2 - l2**2)/(-2*a*l2)) 
    phi = atan((J4.item(1)-J2.item(1))/(J4.item(0)-J2.item(0)))       
                                                   
    sinpb = sin(phi+beta)
    cospb = cos(phi+beta)
    
    x3 = J2.item(0) - l2*cospb
    y3 = r*sin3 + (-l1*cos1 - l2*sinpb)*cos3
    z3 = r*cos3 - (-l1*cos1 - l2*sinpb)*sin3
    J3 = matrix([[x3, y3, z3]])
    
    slopeR = J3-J2
    magnitudeR = sqrt(slopeR.item(0)**2 + slopeR.item(1)**2 + slopeR.item(2)**2)
    unitR = (1/magnitudeR)*slopeR
    J5 = J3 + unitR*l5

    slopeL = J3-J4
    magnitudeL = sqrt(slopeL.item(0)**2 + slopeL.item(1)**2 + slopeL.item(2)**2)
    unitL = (1/magnitudeL)*slopeL
    J6 = J3 + unitL*l6

    J8 = J5 + unitL*(l6+l7) 
        
    return [J8.item(0), J8.item(2), -J8.item(1)]

def inverse(r, d, l1, l2, l3, l4, l5, l6, l7, x, y, z): 
    init = (0.3, 1.2, 0)
    def norm(params):
        theta1, theta2, theta3 = params
        sol = forward(r, d, l1, l2, l3, l4, l5, l6, l7, theta1, theta2, theta3)
        return ((sol[0]-x)**2 + (sol[1]-y)**2 + (sol[2]-z)**2)
    
    inv = scipy.optimize.minimize(norm, init, bounds=((0, pi),(0, pi),(-pi/2, pi/2)), tol=0.008)
    angles = inv.get('x')
    return [angles[0], angles[1], angles[2]]

class Inverse_Kinematics(Node):
	def __init__(self):
		super().__init__('ik')

		# the name of the channel/topic is 'hip_actuators' and contains theta1, theta2, theta3; message type is ActuatorPositions
		self.publisher = self.create_publisher(ActuatorPositions, 'hip_actuator_positions')

		self.timer = self.create_timer(0.01, self.timer_callback)
		self.i = 0

		file = open("angle_pos.txt", "r")

		self.traj = []

		for line in file:
			arr = line.split()
			self.traj.append([float(x) for x in arr])

		file.close()


	def timer_callback(self):
		# msg2 is hip actuator angles, type ActuatorPositions of dim 1x3
		# multiarray(i,j,k) refers to the ith row, jth column, and kth channel
		msg = ActuatorPositions()
		i = self.i

		r = 10.349
		d = 7.833
		l1 = 6.697
		l2 = 9.512
		l3 = 17.007
		l4 = 6.697
		l5 = 23.5
		l6 = 5
		l7 = 11 - 1.5875

		# ------------------------------------------------- Inverse Kinematics Onboard --------------------------------------------------
		# Generate Trajectories
		# foot_pos_L = np.array(generate_trajectory(12, 15, 5, 2, -44, 100, 70, 10, 1))
		# foot_pos_L[:,2] = -foot_pos_L[:,2]

		# (xL, yL, zL) = (foot_pos_L[i][0], foot_pos_L[i][1], foot_pos_L[i][2])

		# foot_pos_R = np.array(generate_trajectory(12, 15, 5, 2, -44, 100, 70, 10, 0))
		# foot_pos_R[:,2] = -foot_pos_R[:,2]

		# (xR, yR, zR) = (foot_pos_R[i][0], foot_pos_R[i][1], foot_pos_R[i][2])

		# # Inverse Kinematics
		# (theta1L, theta2L, theta3L) = inverse(r, d, l1, l2, l3, l4, l5, l6, l7, xL, yL, zL)
		# (theta1R, theta2R, theta3R) = inverse(r, d, l1, l2, l3, l4, l5, l6, l7, xR, yR, zR)

		# ----------------------------------------------------- Reading from File -------------------------------------------------------

		traj = self.traj

		(theta1L, theta2L, theta3L) = (traj[i][0], traj[i][1], traj[i][2])
		(theta1R, theta2R, theta3R) = (traj[i][3], traj[i][4], traj[i][5])

		# ---------------------------------------------------- Setting to Constant ------------------------------------------------------

		# One foot in the middle 
		#(theta1L, theta2L, theta3L) = (0.5487384746324476, 1.3159049730822783, -0.23205786380396604)
		#(theta1R, theta2R, theta3R) = (1.0643083797708883, 1.5505819330260027, -0.2758266869048763)

		# One foot to the side 
		#(theta1L, theta2L, theta3L) = (0.4521483364833066, 1.284017321875407, 0.0)
		#(theta1R, theta2R, theta3R) = (1.1006098485854716, 1.5627723047360211, 0.0)

		# Zero Position
		#(theta1L, theta2L, theta3L) = (0.0, 1.57, 0.0)
		#(theta1R, theta2R, theta3R) = (0.0, 1.57, 0.0)

		# Both feet to the side, under the CG 
		#(theta1L, theta2L, theta3L) = (0.6755320136158106, 1.3420895144359315, 0.0)
		#(theta1R, theta2R, theta3R) = (theta1L, theta2L, theta3L)

		# Port 1: Left Front
		# Port 2: Left Rear
		# Port 3: Right Front
		# Port 4: Right Rear
		# Port 5: Left Hip
		# Port 7: Right Hip

		msg.actuators = [theta1L, theta2L, theta1R, theta2R, theta3L, 0.0, theta3R, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0]

		self.get_logger().info('Publishing: "%s"' % msg.actuators)
		self.publisher.publish(msg)

		foot_pos_L = traj
		self.i = (self.i + 1) % len(foot_pos_L);

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
