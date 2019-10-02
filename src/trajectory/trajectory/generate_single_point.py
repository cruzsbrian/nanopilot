import scipy
from scipy import optimize

import numpy as np
from numpy import matrix

from math import pi, sin, cos, sqrt, acos, atan

import matplotlib.pyplot as plt
from mpl_toolkits import mplot3d
from mpl_toolkits.mplot3d import Axes3D

import sys

import time

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

def main ():
    # Inverse kinematics lengths
    r = 10.349
    d = 7.833
    l1 = 6.697
    l2 = 9.512
    l3 = 17.007
    l4 = 6.697
    l5 = 23.5
    l6 = 5
    l7 = 9.4125 

    x = float(sys.argv[1]); 
    y = float(sys.argv[2]);
    z = float(sys.argv[3]); 

    print(inverse(r, d, l1, l2, l3, l4, l5, l6, l7, x, y, z))


if __name__ == '__main__':
    main()