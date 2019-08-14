# Install script for directory: /home/brian/dev/leo/src/autopilot_msgs

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/brian/dev/leo/src/install/autopilot_msgs")
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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/rosidl_interfaces" TYPE FILE FILES "/home/brian/dev/leo/src/build/autopilot_msgs/ament_cmake_index/share/ament_index/resource_index/rosidl_interfaces/autopilot_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libautopilot_msgs__rosidl_typesupport_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libautopilot_msgs__rosidl_typesupport_cpp.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libautopilot_msgs__rosidl_typesupport_cpp.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/brian/dev/leo/src/build/autopilot_msgs/libautopilot_msgs__rosidl_typesupport_cpp.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libautopilot_msgs__rosidl_typesupport_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libautopilot_msgs__rosidl_typesupport_cpp.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libautopilot_msgs__rosidl_typesupport_cpp.so"
         OLD_RPATH "/home/brian/ros2_ws/install/rosidl_generator_c/lib:/home/brian/ros2_ws/install/rosidl_typesupport_c/lib:/home/brian/ros2_ws/install/rosidl_typesupport_cpp/lib:/home/brian/ros2_ws/install/builtin_interfaces/lib:/home/brian/ros2_ws/install/rosidl_typesupport_introspection_cpp/lib:/home/brian/ros2_ws/install/rosidl_typesupport_introspection_c/lib:/home/brian/ros2_ws/install/std_msgs/lib:/home/brian/ros2_ws/install/geometry_msgs/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libautopilot_msgs__rosidl_typesupport_cpp.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/autopilot_msgs/environment" TYPE FILE FILES "/home/brian/ros2_ws/build/ament_package/ament_package/template/environment_hook/library_path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libautopilot_msgs__rosidl_typesupport_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libautopilot_msgs__rosidl_typesupport_c.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libautopilot_msgs__rosidl_typesupport_c.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/brian/dev/leo/src/build/autopilot_msgs/libautopilot_msgs__rosidl_typesupport_c.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libautopilot_msgs__rosidl_typesupport_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libautopilot_msgs__rosidl_typesupport_c.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libautopilot_msgs__rosidl_typesupport_c.so"
         OLD_RPATH "/home/brian/dev/leo/src/build/autopilot_msgs:/home/brian/ros2_ws/install/rosidl_generator_c/lib:/home/brian/ros2_ws/install/rosidl_typesupport_c/lib:/home/brian/ros2_ws/install/builtin_interfaces/lib:/home/brian/ros2_ws/install/rosidl_typesupport_cpp/lib:/home/brian/ros2_ws/install/rosidl_typesupport_introspection_cpp/lib:/home/brian/ros2_ws/install/rosidl_typesupport_introspection_c/lib:/home/brian/ros2_ws/install/std_msgs/lib:/home/brian/ros2_ws/install/geometry_msgs/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libautopilot_msgs__rosidl_typesupport_c.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/autopilot_msgs" TYPE DIRECTORY FILES "/home/brian/dev/leo/src/build/autopilot_msgs/rosidl_typesupport_introspection_cpp/autopilot_msgs/" REGEX "/[^/]*\\.hpp$")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libautopilot_msgs__rosidl_typesupport_introspection_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libautopilot_msgs__rosidl_typesupport_introspection_cpp.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libautopilot_msgs__rosidl_typesupport_introspection_cpp.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/brian/dev/leo/src/build/autopilot_msgs/libautopilot_msgs__rosidl_typesupport_introspection_cpp.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libautopilot_msgs__rosidl_typesupport_introspection_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libautopilot_msgs__rosidl_typesupport_introspection_cpp.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libautopilot_msgs__rosidl_typesupport_introspection_cpp.so"
         OLD_RPATH "/home/brian/ros2_ws/install/rosidl_generator_c/lib:/home/brian/ros2_ws/install/rosidl_typesupport_introspection_c/lib:/home/brian/ros2_ws/install/rosidl_typesupport_introspection_cpp/lib:/home/brian/ros2_ws/install/builtin_interfaces/lib:/home/brian/ros2_ws/install/rosidl_typesupport_cpp/lib:/home/brian/ros2_ws/install/rosidl_typesupport_c/lib:/home/brian/ros2_ws/install/std_msgs/lib:/home/brian/ros2_ws/install/geometry_msgs/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libautopilot_msgs__rosidl_typesupport_introspection_cpp.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/autopilot_msgs" TYPE DIRECTORY FILES "/home/brian/dev/leo/src/build/autopilot_msgs/rosidl_generator_c/autopilot_msgs/" REGEX "/[^/]*\\.h$")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libautopilot_msgs__rosidl_generator_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libautopilot_msgs__rosidl_generator_c.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libautopilot_msgs__rosidl_generator_c.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/brian/dev/leo/src/build/autopilot_msgs/libautopilot_msgs__rosidl_generator_c.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libautopilot_msgs__rosidl_generator_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libautopilot_msgs__rosidl_generator_c.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libautopilot_msgs__rosidl_generator_c.so"
         OLD_RPATH "/home/brian/ros2_ws/install/builtin_interfaces/lib:/home/brian/ros2_ws/install/rosidl_typesupport_cpp/lib:/home/brian/ros2_ws/install/rosidl_typesupport_c/lib:/home/brian/ros2_ws/install/rosidl_typesupport_introspection_cpp/lib:/home/brian/ros2_ws/install/rosidl_typesupport_introspection_c/lib:/home/brian/ros2_ws/install/rosidl_generator_c/lib:/home/brian/ros2_ws/install/std_msgs/lib:/home/brian/ros2_ws/install/geometry_msgs/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libautopilot_msgs__rosidl_generator_c.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/autopilot_msgs" TYPE DIRECTORY FILES "/home/brian/dev/leo/src/build/autopilot_msgs/rosidl_generator_cpp/autopilot_msgs/" REGEX "/[^/]*\\.hpp$")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/autopilot_msgs" TYPE DIRECTORY FILES "/home/brian/dev/leo/src/build/autopilot_msgs/rosidl_typesupport_introspection_c/autopilot_msgs/" REGEX "/[^/]*\\.h$")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libautopilot_msgs__rosidl_typesupport_introspection_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libautopilot_msgs__rosidl_typesupport_introspection_c.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libautopilot_msgs__rosidl_typesupport_introspection_c.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/brian/dev/leo/src/build/autopilot_msgs/libautopilot_msgs__rosidl_typesupport_introspection_c.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libautopilot_msgs__rosidl_typesupport_introspection_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libautopilot_msgs__rosidl_typesupport_introspection_c.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libautopilot_msgs__rosidl_typesupport_introspection_c.so"
         OLD_RPATH "/home/brian/dev/leo/src/build/autopilot_msgs:/home/brian/ros2_ws/install/rosidl_generator_c/lib:/home/brian/ros2_ws/install/rosidl_typesupport_introspection_c/lib:/home/brian/ros2_ws/install/builtin_interfaces/lib:/home/brian/ros2_ws/install/rosidl_typesupport_cpp/lib:/home/brian/ros2_ws/install/rosidl_typesupport_c/lib:/home/brian/ros2_ws/install/rosidl_typesupport_introspection_cpp/lib:/home/brian/ros2_ws/install/std_msgs/lib:/home/brian/ros2_ws/install/geometry_msgs/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libautopilot_msgs__rosidl_typesupport_introspection_c.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/autopilot_msgs" TYPE DIRECTORY FILES "/home/brian/dev/leo/src/build/autopilot_msgs/rosidl_typesupport_fastrtps_c/autopilot_msgs/" REGEX "/[^/]*\\.cpp$" EXCLUDE)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libautopilot_msgs__rosidl_typesupport_fastrtps_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libautopilot_msgs__rosidl_typesupport_fastrtps_c.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libautopilot_msgs__rosidl_typesupport_fastrtps_c.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/brian/dev/leo/src/build/autopilot_msgs/libautopilot_msgs__rosidl_typesupport_fastrtps_c.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libautopilot_msgs__rosidl_typesupport_fastrtps_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libautopilot_msgs__rosidl_typesupport_fastrtps_c.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libautopilot_msgs__rosidl_typesupport_fastrtps_c.so"
         OLD_RPATH "/home/brian/ros2_ws/install/rcutils/lib:/home/brian/ros2_ws/install/rmw/lib:/home/brian/ros2_ws/install/rosidl_typesupport_fastrtps_cpp/lib:/home/brian/ros2_ws/install/rosidl_typesupport_fastrtps_c/lib:/home/brian/ros2_ws/install/rosidl_generator_c/lib:/home/brian/ros2_ws/install/builtin_interfaces/lib:/home/brian/ros2_ws/install/rosidl_typesupport_cpp/lib:/home/brian/ros2_ws/install/rosidl_typesupport_c/lib:/home/brian/ros2_ws/install/rosidl_typesupport_introspection_cpp/lib:/home/brian/ros2_ws/install/rosidl_typesupport_introspection_c/lib:/home/brian/ros2_ws/install/std_msgs/lib:/home/brian/ros2_ws/install/geometry_msgs/lib:/home/brian/dev/leo/src/build/autopilot_msgs:/home/brian/ros2_ws/install/fastrtps/lib:/home/brian/ros2_ws/install/fastcdr/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libautopilot_msgs__rosidl_typesupport_fastrtps_c.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/autopilot_msgs" TYPE DIRECTORY FILES "/home/brian/dev/leo/src/build/autopilot_msgs/rosidl_typesupport_fastrtps_cpp/autopilot_msgs/" REGEX "/[^/]*\\.cpp$" EXCLUDE)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libautopilot_msgs__rosidl_typesupport_fastrtps_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libautopilot_msgs__rosidl_typesupport_fastrtps_cpp.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libautopilot_msgs__rosidl_typesupport_fastrtps_cpp.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/brian/dev/leo/src/build/autopilot_msgs/libautopilot_msgs__rosidl_typesupport_fastrtps_cpp.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libautopilot_msgs__rosidl_typesupport_fastrtps_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libautopilot_msgs__rosidl_typesupport_fastrtps_cpp.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libautopilot_msgs__rosidl_typesupport_fastrtps_cpp.so"
         OLD_RPATH "/home/brian/ros2_ws/install/rcutils/lib:/home/brian/ros2_ws/install/rmw/lib:/home/brian/ros2_ws/install/rosidl_generator_c/lib:/home/brian/ros2_ws/install/rosidl_typesupport_fastrtps_cpp/lib:/home/brian/ros2_ws/install/builtin_interfaces/lib:/home/brian/ros2_ws/install/rosidl_typesupport_cpp/lib:/home/brian/ros2_ws/install/rosidl_typesupport_c/lib:/home/brian/ros2_ws/install/rosidl_typesupport_introspection_cpp/lib:/home/brian/ros2_ws/install/rosidl_typesupport_introspection_c/lib:/home/brian/ros2_ws/install/std_msgs/lib:/home/brian/ros2_ws/install/geometry_msgs/lib:/home/brian/ros2_ws/install/fastrtps/lib:/home/brian/ros2_ws/install/fastcdr/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libautopilot_msgs__rosidl_typesupport_fastrtps_cpp.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/autopilot_msgs/environment" TYPE FILE FILES "/home/brian/dev/leo/src/build/autopilot_msgs/ament_cmake_environment_hooks/pythonpath.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.7/site-packages/autopilot_msgs" TYPE FILE FILES "/home/brian/dev/leo/src/build/autopilot_msgs/rosidl_generator_py/autopilot_msgs/__init__.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(
        COMMAND
        "/usr/bin/python3" "-m" "compileall"
        "/home/brian/dev/leo/src/install/autopilot_msgs/lib/python3.7/site-packages/autopilot_msgs/__init__.py"
      )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.7/site-packages/autopilot_msgs/msg" TYPE DIRECTORY FILES "/home/brian/dev/leo/src/build/autopilot_msgs/rosidl_generator_py/autopilot_msgs/msg/" REGEX "/[^/]*\\.py$")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.7/site-packages/autopilot_msgs/srv" TYPE DIRECTORY FILES "/home/brian/dev/leo/src/build/autopilot_msgs/rosidl_generator_py/autopilot_msgs/srv/" REGEX "/[^/]*\\.py$")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.7/site-packages/autopilot_msgs/autopilot_msgs_s__rosidl_typesupport_c.cpython-37m-x86_64-linux-gnu.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.7/site-packages/autopilot_msgs/autopilot_msgs_s__rosidl_typesupport_c.cpython-37m-x86_64-linux-gnu.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.7/site-packages/autopilot_msgs/autopilot_msgs_s__rosidl_typesupport_c.cpython-37m-x86_64-linux-gnu.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.7/site-packages/autopilot_msgs" TYPE SHARED_LIBRARY FILES "/home/brian/dev/leo/src/build/autopilot_msgs/rosidl_generator_py/autopilot_msgs/autopilot_msgs_s__rosidl_typesupport_c.cpython-37m-x86_64-linux-gnu.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.7/site-packages/autopilot_msgs/autopilot_msgs_s__rosidl_typesupport_c.cpython-37m-x86_64-linux-gnu.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.7/site-packages/autopilot_msgs/autopilot_msgs_s__rosidl_typesupport_c.cpython-37m-x86_64-linux-gnu.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.7/site-packages/autopilot_msgs/autopilot_msgs_s__rosidl_typesupport_c.cpython-37m-x86_64-linux-gnu.so"
         OLD_RPATH "/home/brian/dev/leo/src/build/autopilot_msgs/rosidl_generator_py/autopilot_msgs:/home/brian/dev/leo/src/build/autopilot_msgs:/home/brian/ros2_ws/install/rosidl_generator_c/lib:/home/brian/ros2_ws/install/rosidl_typesupport_c/lib:/home/brian/ros2_ws/install/builtin_interfaces/lib:/home/brian/ros2_ws/install/rosidl_typesupport_cpp/lib:/home/brian/ros2_ws/install/rosidl_typesupport_introspection_cpp/lib:/home/brian/ros2_ws/install/rosidl_typesupport_introspection_c/lib:/home/brian/ros2_ws/install/std_msgs/lib:/home/brian/ros2_ws/install/geometry_msgs/lib:/home/brian/ros2_ws/install/rcutils/lib:/home/brian/ros2_ws/install/rmw/lib:/home/brian/ros2_ws/install/builtin_interfaces/share/builtin_interfaces/cmake/../../../lib:/home/brian/ros2_ws/install/geometry_msgs/share/geometry_msgs/cmake/../../../lib:/home/brian/ros2_ws/install/std_msgs/share/std_msgs/cmake/../../../lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.7/site-packages/autopilot_msgs/autopilot_msgs_s__rosidl_typesupport_c.cpython-37m-x86_64-linux-gnu.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.7/site-packages/autopilot_msgs/autopilot_msgs_s__rosidl_typesupport_fastrtps_c.cpython-37m-x86_64-linux-gnu.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.7/site-packages/autopilot_msgs/autopilot_msgs_s__rosidl_typesupport_fastrtps_c.cpython-37m-x86_64-linux-gnu.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.7/site-packages/autopilot_msgs/autopilot_msgs_s__rosidl_typesupport_fastrtps_c.cpython-37m-x86_64-linux-gnu.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.7/site-packages/autopilot_msgs" TYPE SHARED_LIBRARY FILES "/home/brian/dev/leo/src/build/autopilot_msgs/rosidl_generator_py/autopilot_msgs/autopilot_msgs_s__rosidl_typesupport_fastrtps_c.cpython-37m-x86_64-linux-gnu.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.7/site-packages/autopilot_msgs/autopilot_msgs_s__rosidl_typesupport_fastrtps_c.cpython-37m-x86_64-linux-gnu.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.7/site-packages/autopilot_msgs/autopilot_msgs_s__rosidl_typesupport_fastrtps_c.cpython-37m-x86_64-linux-gnu.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.7/site-packages/autopilot_msgs/autopilot_msgs_s__rosidl_typesupport_fastrtps_c.cpython-37m-x86_64-linux-gnu.so"
         OLD_RPATH "/home/brian/dev/leo/src/build/autopilot_msgs/rosidl_generator_py/autopilot_msgs:/home/brian/dev/leo/src/build/autopilot_msgs:/home/brian/ros2_ws/install/rosidl_generator_c/lib:/home/brian/ros2_ws/install/rosidl_typesupport_c/lib:/home/brian/ros2_ws/install/builtin_interfaces/lib:/home/brian/ros2_ws/install/rosidl_typesupport_cpp/lib:/home/brian/ros2_ws/install/rosidl_typesupport_introspection_cpp/lib:/home/brian/ros2_ws/install/rosidl_typesupport_introspection_c/lib:/home/brian/ros2_ws/install/std_msgs/lib:/home/brian/ros2_ws/install/geometry_msgs/lib:/home/brian/ros2_ws/install/rcutils/lib:/home/brian/ros2_ws/install/rmw/lib:/home/brian/ros2_ws/install/builtin_interfaces/share/builtin_interfaces/cmake/../../../lib:/home/brian/ros2_ws/install/geometry_msgs/share/geometry_msgs/cmake/../../../lib:/home/brian/ros2_ws/install/std_msgs/share/std_msgs/cmake/../../../lib:/home/brian/ros2_ws/install/rosidl_typesupport_fastrtps_c/lib:/home/brian/ros2_ws/install/rosidl_typesupport_fastrtps_cpp/lib:/home/brian/ros2_ws/install/fastrtps/lib:/home/brian/ros2_ws/install/fastcdr/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.7/site-packages/autopilot_msgs/autopilot_msgs_s__rosidl_typesupport_fastrtps_c.cpython-37m-x86_64-linux-gnu.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.7/site-packages/autopilot_msgs/autopilot_msgs_s__rosidl_typesupport_introspection_c.cpython-37m-x86_64-linux-gnu.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.7/site-packages/autopilot_msgs/autopilot_msgs_s__rosidl_typesupport_introspection_c.cpython-37m-x86_64-linux-gnu.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.7/site-packages/autopilot_msgs/autopilot_msgs_s__rosidl_typesupport_introspection_c.cpython-37m-x86_64-linux-gnu.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.7/site-packages/autopilot_msgs" TYPE SHARED_LIBRARY FILES "/home/brian/dev/leo/src/build/autopilot_msgs/rosidl_generator_py/autopilot_msgs/autopilot_msgs_s__rosidl_typesupport_introspection_c.cpython-37m-x86_64-linux-gnu.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.7/site-packages/autopilot_msgs/autopilot_msgs_s__rosidl_typesupport_introspection_c.cpython-37m-x86_64-linux-gnu.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.7/site-packages/autopilot_msgs/autopilot_msgs_s__rosidl_typesupport_introspection_c.cpython-37m-x86_64-linux-gnu.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.7/site-packages/autopilot_msgs/autopilot_msgs_s__rosidl_typesupport_introspection_c.cpython-37m-x86_64-linux-gnu.so"
         OLD_RPATH "/home/brian/dev/leo/src/build/autopilot_msgs/rosidl_generator_py/autopilot_msgs:/home/brian/dev/leo/src/build/autopilot_msgs:/home/brian/ros2_ws/install/rosidl_generator_c/lib:/home/brian/ros2_ws/install/rosidl_typesupport_c/lib:/home/brian/ros2_ws/install/builtin_interfaces/lib:/home/brian/ros2_ws/install/rosidl_typesupport_cpp/lib:/home/brian/ros2_ws/install/rosidl_typesupport_introspection_cpp/lib:/home/brian/ros2_ws/install/rosidl_typesupport_introspection_c/lib:/home/brian/ros2_ws/install/std_msgs/lib:/home/brian/ros2_ws/install/geometry_msgs/lib:/home/brian/ros2_ws/install/rcutils/lib:/home/brian/ros2_ws/install/rmw/lib:/home/brian/ros2_ws/install/builtin_interfaces/share/builtin_interfaces/cmake/../../../lib:/home/brian/ros2_ws/install/geometry_msgs/share/geometry_msgs/cmake/../../../lib:/home/brian/ros2_ws/install/std_msgs/share/std_msgs/cmake/../../../lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.7/site-packages/autopilot_msgs/autopilot_msgs_s__rosidl_typesupport_introspection_c.cpython-37m-x86_64-linux-gnu.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libautopilot_msgs__python.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libautopilot_msgs__python.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libautopilot_msgs__python.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/brian/dev/leo/src/build/autopilot_msgs/rosidl_generator_py/autopilot_msgs/libautopilot_msgs__python.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libautopilot_msgs__python.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libautopilot_msgs__python.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libautopilot_msgs__python.so"
         OLD_RPATH "/home/brian/dev/leo/src/build/autopilot_msgs:/home/brian/ros2_ws/install/builtin_interfaces/share/builtin_interfaces/cmake/../../../lib:/home/brian/ros2_ws/install/geometry_msgs/share/geometry_msgs/cmake/../../../lib:/home/brian/ros2_ws/install/std_msgs/share/std_msgs/cmake/../../../lib:/home/brian/ros2_ws/install/rosidl_generator_c/lib:/home/brian/ros2_ws/install/rosidl_typesupport_c/lib:/home/brian/ros2_ws/install/builtin_interfaces/lib:/home/brian/ros2_ws/install/rosidl_typesupport_cpp/lib:/home/brian/ros2_ws/install/rosidl_typesupport_introspection_cpp/lib:/home/brian/ros2_ws/install/rosidl_typesupport_introspection_c/lib:/home/brian/ros2_ws/install/std_msgs/lib:/home/brian/ros2_ws/install/geometry_msgs/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libautopilot_msgs__python.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/autopilot_msgs/msg" TYPE FILE FILES "/home/brian/dev/leo/src/build/autopilot_msgs/rosidl_adapter/autopilot_msgs/msg/RCInput.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/autopilot_msgs/msg" TYPE FILE FILES "/home/brian/dev/leo/src/build/autopilot_msgs/rosidl_adapter/autopilot_msgs/msg/ActuatorPositions.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/autopilot_msgs/msg" TYPE FILE FILES "/home/brian/dev/leo/src/build/autopilot_msgs/rosidl_adapter/autopilot_msgs/msg/ActuatorPositionsStamped.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/autopilot_msgs/msg" TYPE FILE FILES "/home/brian/dev/leo/src/build/autopilot_msgs/rosidl_adapter/autopilot_msgs/msg/AttitudeTrajectorySetpoint.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/autopilot_msgs/msg" TYPE FILE FILES "/home/brian/dev/leo/src/build/autopilot_msgs/rosidl_adapter/autopilot_msgs/msg/RateControlSetpoint.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/autopilot_msgs/srv" TYPE FILE FILES "/home/brian/dev/leo/src/build/autopilot_msgs/rosidl_adapter/autopilot_msgs/srv/SendMsgpackConfig.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/autopilot_msgs/msg" TYPE FILE FILES "/home/brian/dev/leo/src/autopilot_msgs/msg/RCInput.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/autopilot_msgs/msg" TYPE FILE FILES "/home/brian/dev/leo/src/autopilot_msgs/msg/ActuatorPositions.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/autopilot_msgs/msg" TYPE FILE FILES "/home/brian/dev/leo/src/autopilot_msgs/msg/ActuatorPositionsStamped.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/autopilot_msgs/msg" TYPE FILE FILES "/home/brian/dev/leo/src/autopilot_msgs/msg/AttitudeTrajectorySetpoint.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/autopilot_msgs/msg" TYPE FILE FILES "/home/brian/dev/leo/src/autopilot_msgs/msg/RateControlSetpoint.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/autopilot_msgs/srv" TYPE FILE FILES "/home/brian/dev/leo/src/autopilot_msgs/srv/SendMsgpackConfig.srv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/autopilot_msgs/srv" TYPE FILE FILES "/home/brian/dev/leo/src/build/autopilot_msgs/rosidl_cmake/srv/SendMsgpackConfig_Request.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/autopilot_msgs/srv" TYPE FILE FILES "/home/brian/dev/leo/src/build/autopilot_msgs/rosidl_cmake/srv/SendMsgpackConfig_Response.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/package_run_dependencies" TYPE FILE FILES "/home/brian/dev/leo/src/build/autopilot_msgs/ament_cmake_index/share/ament_index/resource_index/package_run_dependencies/autopilot_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/parent_prefix_path" TYPE FILE FILES "/home/brian/dev/leo/src/build/autopilot_msgs/ament_cmake_index/share/ament_index/resource_index/parent_prefix_path/autopilot_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/autopilot_msgs/environment" TYPE FILE FILES "/home/brian/ros2_ws/install/ament_cmake_core/share/ament_cmake_core/cmake/environment_hooks/environment/ament_prefix_path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/autopilot_msgs/environment" TYPE FILE FILES "/home/brian/ros2_ws/install/ament_cmake_core/share/ament_cmake_core/cmake/environment_hooks/environment/path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/autopilot_msgs" TYPE FILE FILES "/home/brian/dev/leo/src/build/autopilot_msgs/ament_cmake_environment_hooks/local_setup.bash")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/autopilot_msgs" TYPE FILE FILES "/home/brian/dev/leo/src/build/autopilot_msgs/ament_cmake_environment_hooks/local_setup.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/autopilot_msgs" TYPE FILE FILES "/home/brian/dev/leo/src/build/autopilot_msgs/ament_cmake_environment_hooks/local_setup.zsh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/packages" TYPE FILE FILES "/home/brian/dev/leo/src/build/autopilot_msgs/ament_cmake_index/share/ament_index/resource_index/packages/autopilot_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/autopilot_msgs/cmake" TYPE FILE FILES "/home/brian/dev/leo/src/build/autopilot_msgs/rosidl_cmake/rosidl_cmake-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/autopilot_msgs/cmake" TYPE FILE FILES "/home/brian/dev/leo/src/build/autopilot_msgs/ament_cmake_export_dependencies/ament_cmake_export_dependencies-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/autopilot_msgs/cmake" TYPE FILE FILES "/home/brian/dev/leo/src/build/autopilot_msgs/ament_cmake_export_libraries/ament_cmake_export_libraries-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/autopilot_msgs/cmake" TYPE FILE FILES "/home/brian/dev/leo/src/build/autopilot_msgs/ament_cmake_export_include_directories/ament_cmake_export_include_directories-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/autopilot_msgs/cmake" TYPE FILE FILES
    "/home/brian/dev/leo/src/build/autopilot_msgs/ament_cmake_core/autopilot_msgsConfig.cmake"
    "/home/brian/dev/leo/src/build/autopilot_msgs/ament_cmake_core/autopilot_msgsConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/autopilot_msgs" TYPE FILE FILES "/home/brian/dev/leo/src/autopilot_msgs/package.xml")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/brian/dev/leo/src/build/autopilot_msgs/autopilot_msgs__py/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/brian/dev/leo/src/build/autopilot_msgs/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
