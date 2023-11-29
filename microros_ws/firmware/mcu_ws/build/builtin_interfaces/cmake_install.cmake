# Install script for directory: /home/mondegrin/programs/slon/microros_ws/firmware/mcu_ws/ros2/rcl_interfaces/builtin_interfaces

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/mondegrin/programs/slon/microros_ws/firmware/mcu_ws/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Debug")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "1")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/home/mondegrin/programs/slon/microros_ws/firmware/toolchain/espressif/tools/xtensa-esp32-elf/esp-2020r2-8.2.0/xtensa-esp32-elf/bin/xtensa-esp32-elf-objdump")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/rosidl_interfaces" TYPE FILE FILES "/home/mondegrin/programs/slon/microros_ws/firmware/mcu_ws/build/builtin_interfaces/ament_cmake_index/share/ament_index/resource_index/rosidl_interfaces/builtin_interfaces")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/builtin_interfaces/msg" TYPE FILE FILES "/home/mondegrin/programs/slon/microros_ws/firmware/mcu_ws/build/builtin_interfaces/rosidl_generator_type_description/builtin_interfaces/msg/Duration.json")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/builtin_interfaces/msg" TYPE FILE FILES "/home/mondegrin/programs/slon/microros_ws/firmware/mcu_ws/build/builtin_interfaces/rosidl_generator_type_description/builtin_interfaces/msg/Time.json")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/builtin_interfaces/builtin_interfaces" TYPE DIRECTORY FILES "/home/mondegrin/programs/slon/microros_ws/firmware/mcu_ws/build/builtin_interfaces/rosidl_generator_c/builtin_interfaces/" REGEX "/[^/]*\\.h$")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/builtin_interfaces/environment" TYPE FILE FILES "/home/mondegrin/programs/slon/microros_ws/firmware/dev_ws/install/ament_package/lib/python3.10/site-packages/ament_package/template/environment_hook/library_path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/builtin_interfaces/environment" TYPE FILE FILES "/home/mondegrin/programs/slon/microros_ws/firmware/mcu_ws/build/builtin_interfaces/ament_cmake_environment_hooks/library_path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "/home/mondegrin/programs/slon/microros_ws/firmware/mcu_ws/build/builtin_interfaces/libbuiltin_interfaces__rosidl_generator_c.a")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/builtin_interfaces/builtin_interfaces" TYPE DIRECTORY FILES "/home/mondegrin/programs/slon/microros_ws/firmware/mcu_ws/build/builtin_interfaces/rosidl_typesupport_introspection_c/builtin_interfaces/" REGEX "/[^/]*\\.h$")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "/home/mondegrin/programs/slon/microros_ws/firmware/mcu_ws/build/builtin_interfaces/libbuiltin_interfaces__rosidl_typesupport_introspection_c.a")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/builtin_interfaces" TYPE DIRECTORY FILES "/home/mondegrin/programs/slon/microros_ws/firmware/mcu_ws/build/builtin_interfaces/rosidl_typesupport_microxrcedds_c/builtin_interfaces/" REGEX "/[^/]*\\.c$" EXCLUDE)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "/home/mondegrin/programs/slon/microros_ws/firmware/mcu_ws/build/builtin_interfaces/libbuiltin_interfaces__rosidl_typesupport_microxrcedds_c.a")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "/home/mondegrin/programs/slon/microros_ws/firmware/mcu_ws/build/builtin_interfaces/libbuiltin_interfaces__rosidl_typesupport_c.a")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/builtin_interfaces/msg" TYPE FILE FILES "/home/mondegrin/programs/slon/microros_ws/firmware/mcu_ws/build/builtin_interfaces/rosidl_adapter/builtin_interfaces/msg/Duration.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/builtin_interfaces/msg" TYPE FILE FILES "/home/mondegrin/programs/slon/microros_ws/firmware/mcu_ws/build/builtin_interfaces/rosidl_adapter/builtin_interfaces/msg/Time.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/builtin_interfaces/msg" TYPE FILE FILES "/home/mondegrin/programs/slon/microros_ws/firmware/mcu_ws/ros2/rcl_interfaces/builtin_interfaces/msg/Duration.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/builtin_interfaces/msg" TYPE FILE FILES "/home/mondegrin/programs/slon/microros_ws/firmware/mcu_ws/ros2/rcl_interfaces/builtin_interfaces/msg/Time.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/package_run_dependencies" TYPE FILE FILES "/home/mondegrin/programs/slon/microros_ws/firmware/mcu_ws/build/builtin_interfaces/ament_cmake_index/share/ament_index/resource_index/package_run_dependencies/builtin_interfaces")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/parent_prefix_path" TYPE FILE FILES "/home/mondegrin/programs/slon/microros_ws/firmware/mcu_ws/build/builtin_interfaces/ament_cmake_index/share/ament_index/resource_index/parent_prefix_path/builtin_interfaces")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/builtin_interfaces/environment" TYPE FILE FILES "/home/mondegrin/programs/slon/microros_ws/firmware/dev_ws/install/ament_cmake_core/share/ament_cmake_core/cmake/environment_hooks/environment/ament_prefix_path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/builtin_interfaces/environment" TYPE FILE FILES "/home/mondegrin/programs/slon/microros_ws/firmware/mcu_ws/build/builtin_interfaces/ament_cmake_environment_hooks/ament_prefix_path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/builtin_interfaces/environment" TYPE FILE FILES "/home/mondegrin/programs/slon/microros_ws/firmware/dev_ws/install/ament_cmake_core/share/ament_cmake_core/cmake/environment_hooks/environment/path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/builtin_interfaces/environment" TYPE FILE FILES "/home/mondegrin/programs/slon/microros_ws/firmware/mcu_ws/build/builtin_interfaces/ament_cmake_environment_hooks/path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/builtin_interfaces" TYPE FILE FILES "/home/mondegrin/programs/slon/microros_ws/firmware/mcu_ws/build/builtin_interfaces/ament_cmake_environment_hooks/local_setup.bash")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/builtin_interfaces" TYPE FILE FILES "/home/mondegrin/programs/slon/microros_ws/firmware/mcu_ws/build/builtin_interfaces/ament_cmake_environment_hooks/local_setup.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/builtin_interfaces" TYPE FILE FILES "/home/mondegrin/programs/slon/microros_ws/firmware/mcu_ws/build/builtin_interfaces/ament_cmake_environment_hooks/local_setup.zsh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/builtin_interfaces" TYPE FILE FILES "/home/mondegrin/programs/slon/microros_ws/firmware/mcu_ws/build/builtin_interfaces/ament_cmake_environment_hooks/local_setup.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/builtin_interfaces" TYPE FILE FILES "/home/mondegrin/programs/slon/microros_ws/firmware/mcu_ws/build/builtin_interfaces/ament_cmake_environment_hooks/package.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/packages" TYPE FILE FILES "/home/mondegrin/programs/slon/microros_ws/firmware/mcu_ws/build/builtin_interfaces/ament_cmake_index/share/ament_index/resource_index/packages/builtin_interfaces")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/builtin_interfaces/cmake/export_builtin_interfaces__rosidl_generator_cExport.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/builtin_interfaces/cmake/export_builtin_interfaces__rosidl_generator_cExport.cmake"
         "/home/mondegrin/programs/slon/microros_ws/firmware/mcu_ws/build/builtin_interfaces/CMakeFiles/Export/share/builtin_interfaces/cmake/export_builtin_interfaces__rosidl_generator_cExport.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/builtin_interfaces/cmake/export_builtin_interfaces__rosidl_generator_cExport-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/builtin_interfaces/cmake/export_builtin_interfaces__rosidl_generator_cExport.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/builtin_interfaces/cmake" TYPE FILE FILES "/home/mondegrin/programs/slon/microros_ws/firmware/mcu_ws/build/builtin_interfaces/CMakeFiles/Export/share/builtin_interfaces/cmake/export_builtin_interfaces__rosidl_generator_cExport.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/builtin_interfaces/cmake" TYPE FILE FILES "/home/mondegrin/programs/slon/microros_ws/firmware/mcu_ws/build/builtin_interfaces/CMakeFiles/Export/share/builtin_interfaces/cmake/export_builtin_interfaces__rosidl_generator_cExport-debug.cmake")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/builtin_interfaces/cmake/builtin_interfaces__rosidl_typesupport_introspection_cExport.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/builtin_interfaces/cmake/builtin_interfaces__rosidl_typesupport_introspection_cExport.cmake"
         "/home/mondegrin/programs/slon/microros_ws/firmware/mcu_ws/build/builtin_interfaces/CMakeFiles/Export/share/builtin_interfaces/cmake/builtin_interfaces__rosidl_typesupport_introspection_cExport.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/builtin_interfaces/cmake/builtin_interfaces__rosidl_typesupport_introspection_cExport-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/builtin_interfaces/cmake/builtin_interfaces__rosidl_typesupport_introspection_cExport.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/builtin_interfaces/cmake" TYPE FILE FILES "/home/mondegrin/programs/slon/microros_ws/firmware/mcu_ws/build/builtin_interfaces/CMakeFiles/Export/share/builtin_interfaces/cmake/builtin_interfaces__rosidl_typesupport_introspection_cExport.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/builtin_interfaces/cmake" TYPE FILE FILES "/home/mondegrin/programs/slon/microros_ws/firmware/mcu_ws/build/builtin_interfaces/CMakeFiles/Export/share/builtin_interfaces/cmake/builtin_interfaces__rosidl_typesupport_introspection_cExport-debug.cmake")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/builtin_interfaces/cmake/builtin_interfaces__rosidl_typesupport_cExport.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/builtin_interfaces/cmake/builtin_interfaces__rosidl_typesupport_cExport.cmake"
         "/home/mondegrin/programs/slon/microros_ws/firmware/mcu_ws/build/builtin_interfaces/CMakeFiles/Export/share/builtin_interfaces/cmake/builtin_interfaces__rosidl_typesupport_cExport.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/builtin_interfaces/cmake/builtin_interfaces__rosidl_typesupport_cExport-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/builtin_interfaces/cmake/builtin_interfaces__rosidl_typesupport_cExport.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/builtin_interfaces/cmake" TYPE FILE FILES "/home/mondegrin/programs/slon/microros_ws/firmware/mcu_ws/build/builtin_interfaces/CMakeFiles/Export/share/builtin_interfaces/cmake/builtin_interfaces__rosidl_typesupport_cExport.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/builtin_interfaces/cmake" TYPE FILE FILES "/home/mondegrin/programs/slon/microros_ws/firmware/mcu_ws/build/builtin_interfaces/CMakeFiles/Export/share/builtin_interfaces/cmake/builtin_interfaces__rosidl_typesupport_cExport-debug.cmake")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/builtin_interfaces/cmake" TYPE FILE FILES "/home/mondegrin/programs/slon/microros_ws/firmware/mcu_ws/build/builtin_interfaces/rosidl_cmake/rosidl_cmake-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/builtin_interfaces/cmake" TYPE FILE FILES "/home/mondegrin/programs/slon/microros_ws/firmware/mcu_ws/build/builtin_interfaces/ament_cmake_export_include_directories/ament_cmake_export_include_directories-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/builtin_interfaces/cmake" TYPE FILE FILES "/home/mondegrin/programs/slon/microros_ws/firmware/mcu_ws/build/builtin_interfaces/ament_cmake_export_libraries/ament_cmake_export_libraries-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/builtin_interfaces/cmake" TYPE FILE FILES "/home/mondegrin/programs/slon/microros_ws/firmware/mcu_ws/build/builtin_interfaces/ament_cmake_export_targets/ament_cmake_export_targets-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/builtin_interfaces/cmake" TYPE FILE FILES "/home/mondegrin/programs/slon/microros_ws/firmware/mcu_ws/build/builtin_interfaces/rosidl_cmake/rosidl_cmake_export_typesupport_targets-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/builtin_interfaces/cmake" TYPE FILE FILES "/home/mondegrin/programs/slon/microros_ws/firmware/mcu_ws/build/builtin_interfaces/ament_cmake_export_dependencies/ament_cmake_export_dependencies-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/builtin_interfaces/cmake" TYPE FILE FILES "/home/mondegrin/programs/slon/microros_ws/firmware/mcu_ws/build/builtin_interfaces/rosidl_cmake/rosidl_cmake_export_typesupport_libraries-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/builtin_interfaces/cmake" TYPE FILE FILES
    "/home/mondegrin/programs/slon/microros_ws/firmware/mcu_ws/build/builtin_interfaces/ament_cmake_core/builtin_interfacesConfig.cmake"
    "/home/mondegrin/programs/slon/microros_ws/firmware/mcu_ws/build/builtin_interfaces/ament_cmake_core/builtin_interfacesConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/builtin_interfaces" TYPE FILE FILES "/home/mondegrin/programs/slon/microros_ws/firmware/mcu_ws/ros2/rcl_interfaces/builtin_interfaces/package.xml")
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/mondegrin/programs/slon/microros_ws/firmware/mcu_ws/build/builtin_interfaces/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
