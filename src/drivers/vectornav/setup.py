from setuptools import setup

package_name = 'vectornav_driver'

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
    author='Patrick Spieler',
    author_email='stapelzeiger@gmail.com',
    maintainer='Patrick Spieler',
    maintainer_email='stapelzeiger@gmail.com',
    keywords=['ROS'],
    classifiers=[
        'Intended Audience :: Developers',
        'License :: OSI Approved :: Apache Software License',
        'Programming Language :: Python',
        'Topic :: Software Development',
    ],
    description='Vectornav IMU driver.',
    license='BSD',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'pose_publisher = vectornav_driver.pose_publisher:main',
        ],
    },
)