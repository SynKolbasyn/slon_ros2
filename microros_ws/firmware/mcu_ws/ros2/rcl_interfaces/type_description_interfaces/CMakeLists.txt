cmake_minimum_required(VERSION 3.5)

project(type_description_interfaces)

# Default to C++17
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 17)
endif()
if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake REQUIRED)
# Depend on "core" generators instead of "default" generators
# because other generators depend on this.
find_package(rosidl_core_generators REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/Field.msg"
  "msg/FieldType.msg"
  "msg/IndividualTypeDescription.msg"
  "msg/KeyValue.msg"
  "msg/TypeDescription.msg"
  "msg/TypeSource.msg"
  "srv/GetTypeDescription.srv"
  ADD_LINTER_TESTS
)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  ament_lint_auto_find_test_dependencies()
endif()

ament_export_dependencies(rosidl_core_runtime)

ament_package()
