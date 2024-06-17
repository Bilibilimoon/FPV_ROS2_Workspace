# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_pwm_trans_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED pwm_trans_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(pwm_trans_FOUND FALSE)
  elseif(NOT pwm_trans_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(pwm_trans_FOUND FALSE)
  endif()
  return()
endif()
set(_pwm_trans_CONFIG_INCLUDED TRUE)

# output package information
if(NOT pwm_trans_FIND_QUIETLY)
  message(STATUS "Found pwm_trans: 0.0.0 (${pwm_trans_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'pwm_trans' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${pwm_trans_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(pwm_trans_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${pwm_trans_DIR}/${_extra}")
endforeach()
