cmake_minimum_required(VERSION 3.5)

project(builtin_interfaces)

# Default to C++17
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 17)
  set(CMAKE_CXX_STANDARD_REQUIRED ON)
endif()
if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake REQUIRED)
# Depend on "core" generators instead of "default" generators
# because ROS actions depend on this package
find_package(rosidl_core_generators REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/Duration.msg"
  "msg/Time.msg"
  ADD_LINTER_TESTS
)

ament_export_dependencies(rosidl_core_runtime)

ament_package()
