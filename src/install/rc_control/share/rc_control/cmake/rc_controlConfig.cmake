# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_rc_control_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED rc_control_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(rc_control_FOUND FALSE)
  elseif(NOT rc_control_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(rc_control_FOUND FALSE)
  endif()
  return()
endif()
set(_rc_control_CONFIG_INCLUDED TRUE)

# output package information
if(NOT rc_control_FIND_QUIETLY)
  message(STATUS "Found rc_control: 0.0.1 (${rc_control_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'rc_control' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  message(WARNING "${_msg}")
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(rc_control_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${rc_control_DIR}/${_extra}")
endforeach()
