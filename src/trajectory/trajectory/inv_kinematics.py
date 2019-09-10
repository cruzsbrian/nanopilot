import rclpy
from rclpy.node import Node
from autopilot_msgs.msg import ActuatorPositions

import sympy as sp
from sympy import sin, cos, sqrt, Matrix, symbols, acos, atan, asin, N
sp.init_printing()

import scipy
from scipy import optimize

import numpy as np
import matplotlib.pyplot as plt

from math import pi

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
    return [N(J8[0]), N(J8[2]), -N(J8[1])]

def inverse_init(r, d, l1, l2, l3, l4, l5, l6, l7):
	init = (0.3, 1.2, 0)
	(theta1, theta2, theta3) = symbols('theta1, theta2, theta3', real=True)
	expr = sp.utilities.lambdify([theta1, theta2, theta3], forward(r, d, l1, l2, l3, l4, l5, l6, l7, theta1, theta2, theta3))

	return (init, expr)

def inverse(r, d, l1, l2, l3, l4, l5, l6, l7, x, y, z, init, expr):
    def norm(params):
        theta1, theta2, theta3 = params
        sol = expr(theta1, theta2, theta3)
        return ((sol[0]-x)**2 + (sol[1]-y)**2 + (sol[2]-z)**2)

    inv = scipy.optimize.minimize(norm, init, bounds=((0, pi),(0, pi),(-pi/2, pi/2)))
    angles = inv.get('x')
    return [angles[0], angles[1], angles[2]]

class Inverse_Kinematics(Node):
	def __init__(self):
		super().__init__('ik')

		# the name of the channel/topic is 'hip_actuators' and contains theta1, theta2, theta3; message type is ActuatorPositions
		self.publisher = self.create_publisher(ActuatorPositions, 'hip_actuator_positions')

		self.timer = self.create_timer(0.001, self.timer_callback)
		self.i = 0


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
		# foot_pos_L = np.array(generate_trajectory(14, 12, 8, 2, -45, 100, 20, 10, 1))
		# foot_pos_L[:,2] = -foot_pos_L[:,2]

		# (xL, yL, zL) = (foot_pos_L[i][0], foot_pos_L[i][1], foot_pos_L[i][2])

		# foot_pos_R = np.array(generate_trajectory(14, 12, 8, 2, -45, 100, 20, 10, 0))
		# foot_pos_R[:,2] = -foot_pos_R[:,2]

		# (xR, yR, zR) = (foot_pos_R[i][0], foot_pos_R[i][1], foot_pos_R[i][2])

		# # Inverse Kinematics
		# (init, expr) = inverse_init(r, d, l1, l2, l3, l4, l5, l6, l7)

		# (theta1L, theta2L, theta3L) = inverse(r, d, l1, l2, l3, l4, l5, l6, l7, xL, yL, zL, init, expr)
		# (theta1R, theta2R, theta3R) = inverse(r, d, l1, l2, l3, l4, l5, l6, l7, xR, yR, zR, init, expr)

		# ----------------------------------------------------- Reading from File -------------------------------------------------------

		# file = open("angle_positions.txt", "r")

		# traj = []

		# for line in file:
		# 	arr = line.split()
		# 	traj.append([float(x) for x in arr])

		# file.close()

		# (theta1L, theta2L, theta3L) = (traj[i][0], traj[i][1], traj[i][2])
		# (theta1R, theta2R, theta3R) = (traj[i][3], traj[i][4], traj[i][5])

		# ---------------------------------------------------- Setting to Constant ------------------------------------------------------

		(theta1L, theta2L, theta3L) = (0.308, 1.458, 0.0)
		(theta1R, theta2R, theta3R) = (0.308, 1.458, 0.0)

		# Port 1: Left Front
		# Port 2: Left Rear
		# Port 3: Right Front
		# Port 4: Right Rear
		# Port 5: Left Hip
		# Port 7: Right Hip

		msg.actuators = [theta1L, theta2L, theta1R, theta2R, theta3L, 0.0, theta3R, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0]

		self.get_logger().info('Publishing: "%s"' % msg.actuators)
		self.publisher.publish(msg)

		# foot_pos_L = traj
		# self.i = (self.i + 1) % len(foot_pos_L);

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
