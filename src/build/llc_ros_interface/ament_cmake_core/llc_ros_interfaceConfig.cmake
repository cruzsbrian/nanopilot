# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_llc_ros_interface_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED llc_ros_interface_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(llc_ros_interface_FOUND FALSE)
  elseif(NOT llc_ros_interface_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(llc_ros_interface_FOUND FALSE)
  endif()
  return()
endif()
set(_llc_ros_interface_CONFIG_INCLUDED TRUE)

# output package information
if(NOT llc_ros_interface_FIND_QUIETLY)
  message(STATUS "Found llc_ros_interface: 0.0.1 (${llc_ros_interface_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'llc_ros_interface' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  message(WARNING "${_msg}")
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(llc_ros_interface_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${llc_ros_interface_DIR}/${_extra}")
endforeach()
