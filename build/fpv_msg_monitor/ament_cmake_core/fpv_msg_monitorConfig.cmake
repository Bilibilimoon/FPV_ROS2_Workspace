# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_fpv_msg_monitor_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED fpv_msg_monitor_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(fpv_msg_monitor_FOUND FALSE)
  elseif(NOT fpv_msg_monitor_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(fpv_msg_monitor_FOUND FALSE)
  endif()
  return()
endif()
set(_fpv_msg_monitor_CONFIG_INCLUDED TRUE)

# output package information
if(NOT fpv_msg_monitor_FIND_QUIETLY)
  message(STATUS "Found fpv_msg_monitor: 0.0.0 (${fpv_msg_monitor_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'fpv_msg_monitor' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${fpv_msg_monitor_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(fpv_msg_monitor_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${fpv_msg_monitor_DIR}/${_extra}")
endforeach()
