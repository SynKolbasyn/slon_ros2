cmake_minimum_required(VERSION 3.5)

project(rcl_interfaces)

# Default to C++17
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 17)
  set(CMAKE_CXX_STANDARD_REQUIRED ON)
endif()
if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(builtin_interfaces REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/FloatingPointRange.msg"
  "msg/IntegerRange.msg"
  "msg/ListParametersResult.msg"
  "msg/Log.msg"
  "msg/ParameterDescriptor.msg"
  "msg/ParameterEventDescriptors.msg"
  "msg/ParameterEvent.msg"
  "msg/Parameter.msg"
  "msg/ParameterType.msg"
  "msg/ParameterValue.msg"
  "msg/SetParametersResult.msg"
  "msg/LoggerLevel.msg"
  "msg/SetLoggerLevelsResult.msg"
  "srv/DescribeParameters.srv"
  "srv/GetParameters.srv"
  "srv/GetParameterTypes.srv"
  "srv/ListParameters.srv"
  "srv/SetParametersAtomically.srv"
  "srv/SetParameters.srv"
  "srv/GetLoggerLevels.srv"
  "srv/SetLoggerLevels.srv"
  DEPENDENCIES builtin_interfaces
)

install(FILES mapping_rules.yaml DESTINATION share/${PROJECT_NAME})

# this must happen before the invocation of ament_package()
if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
