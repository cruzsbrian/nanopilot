# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_attitude_ekf_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED attitude_ekf_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(attitude_ekf_FOUND FALSE)
  elseif(NOT attitude_ekf_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(attitude_ekf_FOUND FALSE)
  endif()
  return()
endif()
set(_attitude_ekf_CONFIG_INCLUDED TRUE)

# output package information
if(NOT attitude_ekf_FIND_QUIETLY)
  message(STATUS "Found attitude_ekf: 0.0.1 (${attitude_ekf_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'attitude_ekf' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  message(WARNING "${_msg}")
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(attitude_ekf_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${attitude_ekf_DIR}/${_extra}")
endforeach()
