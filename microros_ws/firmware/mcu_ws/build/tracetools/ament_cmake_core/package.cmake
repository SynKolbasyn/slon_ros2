set(_AMENT_PACKAGE_NAME "tracetools")
set(tracetools_VERSION "6.3.1")
set(tracetools_MAINTAINER "Christophe Bedard <bedard.christophe@gmail.com>, Ingo Luetkebohle <ingo.luetkebohle@de.bosch.com>")
set(tracetools_BUILD_DEPENDS "liblttng-ust-dev")
set(tracetools_BUILDTOOL_DEPENDS "ament_cmake_ros" "pkg-config")
set(tracetools_BUILD_EXPORT_DEPENDS "liblttng-ust-dev")
set(tracetools_BUILDTOOL_EXPORT_DEPENDS )
set(tracetools_EXEC_DEPENDS "lttng-tools" "liblttng-ust-dev")
set(tracetools_TEST_DEPENDS "ament_cmake_gtest" "ament_lint_auto" "ament_lint_common")
set(tracetools_GROUP_DEPENDS )
set(tracetools_MEMBER_OF_GROUPS )
set(tracetools_DEPRECATED "")
set(tracetools_EXPORT_TAGS)
list(APPEND tracetools_EXPORT_TAGS "<build_type>ament_cmake</build_type>")
