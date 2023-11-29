# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_tracetools_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED tracetools_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(tracetools_FOUND FALSE)
  elseif(NOT tracetools_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(tracetools_FOUND FALSE)
  endif()
  return()
endif()
set(_tracetools_CONFIG_INCLUDED TRUE)

# output package information
if(NOT tracetools_FIND_QUIETLY)
  message(STATUS "Found tracetools: 6.3.1 (${tracetools_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'tracetools' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT tracetools_DEPRECATED_QUIET)
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(tracetools_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_targets-extras.cmake;ament_cmake_export_include_directories-extras.cmake")
foreach(_extra ${_extras})
  include("${tracetools_DIR}/${_extra}")
endforeach()