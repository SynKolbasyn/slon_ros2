set(_AMENT_PACKAGE_NAME "rmw")
set(rmw_VERSION "7.1.0")
set(rmw_MAINTAINER "Brandon Ong <brandon@openrobotics.org>, Ivan Paunovic <ivanpauno@ekumenlabs.com>, William Woodall <william@openrobotics.org>")
set(rmw_BUILD_DEPENDS "rcutils" "rosidl_runtime_c" "rosidl_dynamic_typesupport")
set(rmw_BUILDTOOL_DEPENDS "ament_cmake_ros" "ament_cmake_version")
set(rmw_BUILD_EXPORT_DEPENDS "rcutils" "rosidl_runtime_c" "rosidl_dynamic_typesupport")
set(rmw_BUILDTOOL_EXPORT_DEPENDS )
set(rmw_EXEC_DEPENDS )
set(rmw_TEST_DEPENDS "ament_cmake_gmock" "ament_lint_auto" "ament_lint_common" "osrf_testing_tools_cpp")
set(rmw_GROUP_DEPENDS )
set(rmw_MEMBER_OF_GROUPS )
set(rmw_DEPRECATED "")
set(rmw_EXPORT_TAGS)
list(APPEND rmw_EXPORT_TAGS "<build_type>ament_cmake</build_type>")
