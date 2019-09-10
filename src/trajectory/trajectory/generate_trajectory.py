import sympy as sp
from sympy import sin, cos, sqrt, Matrix, symbols, acos, atan, asin, N
sp.init_printing()

import scipy
from scipy import optimize

from mpl_toolkits import mplot3d

import numpy as np
import matplotlib.pyplot as plt
from mpl_toolkits.mplot3d import Axes3D

from math import pi

import time

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

def inverse(x, y, z, init, expr): 
    def norm(params):
        theta1, theta2, theta3 = params
        sol = expr(theta1, theta2, theta3)
        return ((sol[0]-x)**2 + (sol[1]-y)**2 + (sol[2]-z)**2)
    
    inv = scipy.optimize.minimize(norm, init, bounds=((0, pi),(0, pi),(-pi/2, pi/2)), tol=0.0001)
    angles = inv.get('x')
    return [angles[0], angles[1], angles[2]]

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
        traj += generate_stop(0.0, 0.0, z_offset, ellipse_num + step_num*2)

        # Shift Back
        traj += (generate_straight_path(step_length, -step_length, 0.0, z_offset, straight_num))[::-1]


    # Generate right trajectory: Stop, Shift, Swing, Shift
    else:   
        # Stop 
        traj += generate_stop(0.0, 0.0, z_offset, ellipse_num + step_num*2)

        # Shift Back 
        traj += (generate_straight_path(step_length, -step_length, 0.0, z_offset, straight_num))[::-1]

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

def main (args=None):

    start = time.time()

    # XYZ Trajectory 
    foot_pos_L = np.array(generate_trajectory(12, 8, 2, 2, -47, 100, 40, 10, 1))
    foot_pos_L[:,2] = -foot_pos_L[:,2]

    foot_pos_R = np.array(generate_trajectory(12, 8, 2, 2, -47, 100, 40, 10, 0))
    foot_pos_R[:,2] = -foot_pos_R[:,2]

    file = open("foot_positions.txt", "w+")

    for i in range(len(foot_pos_L)):
        file.write("{} {} {} {} {} {}\n".format(foot_pos_L[i][0], foot_pos_L[i][1], foot_pos_L[i][2], 
                                                foot_pos_R[i][0], foot_pos_R[i][1], foot_pos_R[i][2]))

    file.close()

    # Inverse kinematics lengths
    r = 10.349
    d = 7.833
    l1 = 6.697
    l2 = 9.512
    l3 = 17.007
    l4 = 6.697
    l5 = 23.5
    l6 = 5
    l7 = 11 - 1.5875

    angle_positions = []

    (init, expr) = inverse_init(r, d, l1, l2, l3, l4, l5, l6, l7)

    # Initialize the inverse kinematics 
    # inverse_init(r, d, l1, l2, l3, l4, l5, l6, l7)

    # # Solve the inverse kinematics 
    # for i in range(len(foot_pos_L)):
    #     temp = inverse(foot_pos_L[i][0], foot_pos_L[i][1], foot_pos_L[i][2], init, expr) 
    #     temp += inverse(foot_pos_R[i][0], foot_pos_R[i][1], foot_pos_R[i][2], init, expr)
    #     angle_positions.append(temp)

    # # Write the angle positions to a file
    # file = open("angle_positions.txt", "w+")

    # for angle_waypoint in angle_positions:
    #     file.write("{} {} {} {} {} {}\n".format(angle_waypoint[0], angle_waypoint[1], angle_waypoint[2], angle_waypoint[3], angle_waypoint[4], angle_waypoint[5]))

    # file.close()

    # end = time.time()
    # print("Time: {} seconds".format(end - start))

    fig = plt.figure()
    ax = plt.axes(projection='3d')

    xdata = foot_pos_L[:,0]
    ydata = foot_pos_L[:,1]
    zdata = foot_pos_L[:,2]

    ax = plt.axes(projection='3d')
    ax.scatter3D(xdata, ydata, zdata, s=1, c='r')
    
    # for i in range(len(foot_positions)): 
    #     ax.text(foot_positions[i,0],foot_positions[i,1],foot_positions[i,2],  '%s' % (str(i)), size=5, zorder=1, color='k')     

    ax.set_xlabel('x')
    ax.set_ylabel('y')
    ax.set_zlabel('z')    

    plt.draw() 
    plt.show()


if __name__ == '__main__':
    main()

    # solved_foot_positions = []

    # for a in angle_positions: 
    #     solved_foot_positions.append(forward(r, d, l1, l2, l3, l4, l5, l6, l7, a[0], a[1], a[2]))
       
    # solved_foot_positions = np.array(solved_foot_positions)

    # sxdata = solved_foot_positions[:,0]
    # sydata = solved_foot_positions[:,1]
    # szdata = solved_foot_positions[:,2]

    # szdata = [44.8575543624952, 44.8480304475910, 44.8193913436149, 44.6400004982037, 44.3600012305515, 44.0000000804490, 43.6400008515075, 43.3599995313883, 43.1600000390139, 43.0400000251105, 42.9949734914138, 42.9798938709054, 42.9547613531377, 42.9195766313608, 42.8743415111451, 42.8190597429571, 42.7537364030147, 42.6783870411062, 42.5930257264995, 42.4976769343805, 42.3923736382272, 42.2771646277674, 42.1521088794222, 42.0172845991439, 41.8727900267977, 41.7187457855786, 41.5552987617825, 41.3826258847637, 41.2009371073649, 41.0104829888811, 40.8115508916665, 40.6044755648476, 40.3896456603660, 40.1674989736608, 39.9385319615883, 39.7033042786425, 39.4624415927784, 39.2166402956166, 38.9666726074835, 38.7133855676299, 38.4577095026616, 38.2006572137658, 37.9433328940093, 37.6869200069383, 37.4326980550204, 37.1820331007773, 36.9363825072684, 36.6972899541678, 36.4663845811978, 36.2453777214042, 36.0360568107744, 35.8402748532813, 35.6599600460182, 35.4970813591408, 35.3536554971696, 35.2317261712621, 35.1333510599329, 35.0605875226650, 35.0154720910300, 35.0000006491564, 35.0154723861842, 35.0605876967563, 35.1333507946282, 35.2317259330946, 35.3536560077302, 35.4970824136034, 35.6599608713734, 35.8402760034388, 36.0360559726836, 36.2453766314856, 36.4663842444931, 36.6972900174853, 36.9363827135183, 37.1820331269263, 37.4326977586997, 37.6869201962325, 37.9433331181045, 38.2006588514682, 38.4577098630881, 38.7133857571648, 38.9666727407301, 39.2166410297823, 39.4624419541596, 39.7033050656156, 39.9385322338842, 40.1674998648835, 40.3896467599631, 40.6044762736423, 40.8115493505284, 41.0104811663002, 41.2009358345868, 41.3826241395322, 41.5552975815559, 41.7187453419508, 41.8727901697799, 42.0172836085480, 42.1521087608519, 42.2771641684934, 42.3923734710242, 42.4976758966467, 42.5930253897972, 42.6783876609868, 42.7537381001745, 42.8190597484666, 42.8743415143116, 42.9195766302708, 42.9547613461282, 42.9798938580881, 42.9949734746166, 43.0000000197307, 43.0400000083810, 43.1599999513550, 43.3599997298911, 43.6400000476627, 44.0000000353026, 44.3600000323396, 44.6400000309984, 44.8400000282204, 44.9600000266682, 45.0000000262599, 45.0000000289111, 45.0000000354987, 45.0000000417357, 45.0000000430784, 45.0000001163308, 44.9999998995230, 45.0000000599780, 45.0000000489601, 45.0000002902847, 45.0000001447365, 44.9999997933293, 45.0000000476019, 45.0000005276073, 45.0000000474179, 45.0000000310141, 45.0000000448836, 45.0000000931165, 44.9999994996353, 44.9999999954785, 45.0000000373362, 45.0000000373362, 45.0000000373362, 45.0000000373362, 45.0000000373362, 45.0000000373362, 45.0000000373362, 45.0000000373362, 45.0000000373362, 45.0000000373362, 45.0000000373362, 45.0000000373362, 45.0000000373362, 45.0000000373362, 45.0000000373362, 45.0000000373362, 45.0000000373362, 45.0000000373362, 45.0000000373362, 45.0000000373362, 45.0000000373362, 45.0000000373362, 45.0000000373362, 45.0000000373362, 45.0000000373362, 45.0000000373362, 45.0000000373362, 45.0000000373362, 45.0000000373362, 45.0000000373362, 45.0000000373362, 45.0000000373362, 45.0000000373362, 45.0000000373362, 45.0000000373362, 45.0000000373362, 45.0000000373362, 45.0000000373362, 45.0000000373362, 45.0000000373362, 45.0000000373362, 45.0000000373362, 45.0000000373362, 45.0000000373362, 45.0000000373362, 45.0000000373362, 45.0000000373362, 45.0000000373362, 45.0000000373362, 45.0000000373362, 45.0000000373362, 45.0000000373362, 45.0000000373362, 45.0000000373362, 45.0000000373362, 45.0000000373362, 45.0000000373362, 45.0000000373362, 45.0000000373362, 45.0000000373362, 45.0000000373362, 45.0000000373362, 45.0000000373362, 45.0000000373362, 45.0000000373362, 45.0000000373362, 45.0000000373362, 45.0000000373362, 45.0000000373362, 45.0000000373362, 45.0000000373362, 45.0000000373362, 45.0000000373362, 45.0000000373362, 45.0000000373362, 45.0000000373362, 45.0000000373362, 45.0000000373362, 45.0000000373362, 45.0000000373362, 45.0000000373362, 45.0000000373362, 45.0000000373362, 45.0000000373362, 45.0000000373362, 45.0000000373362, 45.0000000373362, 45.0000000373362, 45.0000000373362, 45.0000000373362, 45.0000000373362, 45.0000000373362, 45.0000000373362, 45.0000000373362, 45.0000000373362, 45.0000000373362, 45.0000000373362, 45.0000000373362, 45.0000000373362, 45.0000000373362, 45.0000000373362, 44.9999999879907, 45.0000001278943, 44.9999998908988, 45.0000000747562, 45.0000003349952, 45.0000002293079, 44.9999998932789, 45.0000002004878, 45.0000000590394, 45.0000000496595, 45.0000000722253, 45.0000000542742, 45.0000000154149, 45.0000006319175, 45.0000000402311, 45.0000000389598, 45.0000000377782, 44.9762336964531, 44.8872433793323, 44.8575543624952]

    # ax.scatter3D(sxdata, sydata, szdata, s=1, c='b')