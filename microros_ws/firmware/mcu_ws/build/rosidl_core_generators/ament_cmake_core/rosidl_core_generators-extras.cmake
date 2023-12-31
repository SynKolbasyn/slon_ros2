# generated from
# rosidl_core_generators/rosidl_core_generators-extras.cmake.in

find_package(ament_cmake_core REQUIRED)
ament_index_get_resources(rosidl_typesupport_c_packages "rosidl_typesupport_c")
ament_index_get_resources(rosidl_typesupport_cpp_packages "rosidl_typesupport_cpp")
ament_index_get_resources(rosidl_generator_packages "rosidl_generator_packages")
set(_exported_dependencies
  "rosidl_typesupport_c"
  "rosidl_typesupport_cpp"
  ${rosidl_typesupport_c_packages}
  ${rosidl_typesupport_cpp_packages}
  ${rosidl_generator_packages}
)

# find_package() all dependencies (if available)
# and append their DEFINITIONS INCLUDE_DIRS and LIBRARIES variables
# to rosidl_core_generators_DEFINITIONS , rosidl_core_generators_INCLUDE_DIRS and
# rosidl_core_generators_LIBRARIES.
foreach(_dep ${_exported_dependencies})
  find_package("${_dep}" QUIET)
  if(${_dep}_FOUND)
    if(${_dep}_DEFINITIONS)
      list(APPEND rosidl_core_generators_DEFINITIONS "${${_dep}_DEFINITIONS}")
    endif()
    if(${_dep}_INCLUDE_DIRS)
      list(APPEND rosidl_core_generators_INCLUDE_DIRS "${${_dep}_INCLUDE_DIRS}")
    endif()
    if(${_dep}_LIBRARIES)
      list(APPEND rosidl_core_generators_LIBRARIES "${${_dep}_LIBRARIES}")
    endif()
  endif()
endforeach()
