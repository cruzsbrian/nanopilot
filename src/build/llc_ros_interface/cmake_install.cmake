# Install script for directory: /home/brian/dev/leo/src/low_level_controller/ros_interface

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/brian/dev/leo/src/install/llc_ros_interface")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "0")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/llc_ros_interface/llc_ros_interface" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/llc_ros_interface/llc_ros_interface")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/llc_ros_interface/llc_ros_interface"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/llc_ros_interface" TYPE EXECUTABLE FILES "/home/brian/dev/leo/src/build/llc_ros_interface/llc_ros_interface")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/llc_ros_interface/llc_ros_interface" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/llc_ros_interface/llc_ros_interface")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/llc_ros_interface/llc_ros_interface"
         OLD_RPATH "/home/brian/ros2_ws/install/rclcpp/lib:/home/brian/ros2_ws/install/rcl/lib:/home/brian/ros2_ws/install/rcl_interfaces/lib:/home/brian/ros2_ws/install/rmw_implementation/lib:/home/brian/ros2_ws/install/rmw/lib:/home/brian/ros2_ws/install/rcutils/lib:/home/brian/ros2_ws/install/rcl_logging_noop/lib:/home/brian/ros2_ws/install/rosgraph_msgs/lib:/home/brian/ros2_ws/install/rcl_yaml_param_parser/lib:/home/brian/ros2_ws/install/sensor_msgs/lib:/home/brian/ros2_ws/install/geometry_msgs/lib:/home/brian/ros2_ws/install/builtin_interfaces/lib:/home/brian/ros2_ws/install/rosidl_typesupport_cpp/lib:/home/brian/ros2_ws/install/rosidl_typesupport_c/lib:/home/brian/ros2_ws/install/rosidl_typesupport_introspection_cpp/lib:/home/brian/ros2_ws/install/rosidl_typesupport_introspection_c/lib:/home/brian/ros2_ws/install/rosidl_generator_c/lib:/home/brian/ros2_ws/install/std_msgs/lib:/home/brian/dev/leo/src/install/autopilot_msgs/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/llc_ros_interface/llc_ros_interface")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/package_run_dependencies" TYPE FILE FILES "/home/brian/dev/leo/src/build/llc_ros_interface/ament_cmake_index/share/ament_index/resource_index/package_run_dependencies/llc_ros_interface")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/parent_prefix_path" TYPE FILE FILES "/home/brian/dev/leo/src/build/llc_ros_interface/ament_cmake_index/share/ament_index/resource_index/parent_prefix_path/llc_ros_interface")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/llc_ros_interface/environment" TYPE FILE FILES "/home/brian/ros2_ws/install/ament_cmake_core/share/ament_cmake_core/cmake/environment_hooks/environment/ament_prefix_path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/llc_ros_interface/environment" TYPE FILE FILES "/home/brian/ros2_ws/install/ament_cmake_core/share/ament_cmake_core/cmake/environment_hooks/environment/path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/llc_ros_interface" TYPE FILE FILES "/home/brian/dev/leo/src/build/llc_ros_interface/ament_cmake_environment_hooks/local_setup.bash")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/llc_ros_interface" TYPE FILE FILES "/home/brian/dev/leo/src/build/llc_ros_interface/ament_cmake_environment_hooks/local_setup.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/llc_ros_interface" TYPE FILE FILES "/home/brian/dev/leo/src/build/llc_ros_interface/ament_cmake_environment_hooks/local_setup.zsh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/packages" TYPE FILE FILES "/home/brian/dev/leo/src/build/llc_ros_interface/ament_cmake_index/share/ament_index/resource_index/packages/llc_ros_interface")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/llc_ros_interface/cmake" TYPE FILE FILES
    "/home/brian/dev/leo/src/build/llc_ros_interface/ament_cmake_core/llc_ros_interfaceConfig.cmake"
    "/home/brian/dev/leo/src/build/llc_ros_interface/ament_cmake_core/llc_ros_interfaceConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/llc_ros_interface" TYPE FILE FILES "/home/brian/dev/leo/src/low_level_controller/ros_interface/package.xml")
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/brian/dev/leo/src/build/llc_ros_interface/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
