from setuptools import setup

package_name = 'trajectory'

setup(
    name=package_name,
    version='0.7.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    keywords=['ROS'],
    classifiers=[
        'Intended Audience :: Developers',
        'License :: OSI Approved :: Apache Software License',
        'Programming Language :: Python',
        'Topic :: Software Development',
    ],
    description='Translating Trajectory to Actuator Positions via Inverse Kinematics.',
    license='Apache License, Version 2.0',
    tests_require=['pytest'],
    # entry_points={
    #     'console_scripts': [
    #         'publisher_old_school = examples_rclpy_minimal_publisher.publisher_old_school:main',
    #         'publisher_local_function ='
    #         ' examples_rclpy_minimal_publisher.publisher_local_function:main',
    #         'publisher_member_function ='
    #         ' examples_rclpy_minimal_publisher.publisher_member_function:main',
    #     ],
    # },
)
