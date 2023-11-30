// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from gps:msg/GPS.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "gps/msg/detail/gps__rosidl_typesupport_introspection_c.h"
#include "gps/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "gps/msg/detail/gps__functions.h"
#include "gps/msg/detail/gps__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void gps__msg__GPS__rosidl_typesupport_introspection_c__GPS_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  gps__msg__GPS__init(message_memory);
}

void gps__msg__GPS__rosidl_typesupport_introspection_c__GPS_fini_function(void * message_memory)
{
  gps__msg__GPS__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember gps__msg__GPS__rosidl_typesupport_introspection_c__GPS_message_member_array[2] = {
  {
    "lat",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gps__msg__GPS, lat),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lon",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gps__msg__GPS, lon),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers gps__msg__GPS__rosidl_typesupport_introspection_c__GPS_message_members = {
  "gps__msg",  // message namespace
  "GPS",  // message name
  2,  // number of fields
  sizeof(gps__msg__GPS),
  gps__msg__GPS__rosidl_typesupport_introspection_c__GPS_message_member_array,  // message members
  gps__msg__GPS__rosidl_typesupport_introspection_c__GPS_init_function,  // function to initialize message memory (memory has to be allocated)
  gps__msg__GPS__rosidl_typesupport_introspection_c__GPS_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t gps__msg__GPS__rosidl_typesupport_introspection_c__GPS_message_type_support_handle = {
  0,
  &gps__msg__GPS__rosidl_typesupport_introspection_c__GPS_message_members,
  get_message_typesupport_handle_function,
  &gps__msg__GPS__get_type_hash,
  &gps__msg__GPS__get_type_description,
  &gps__msg__GPS__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_gps
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gps, msg, GPS)() {
  if (!gps__msg__GPS__rosidl_typesupport_introspection_c__GPS_message_type_support_handle.typesupport_identifier) {
    gps__msg__GPS__rosidl_typesupport_introspection_c__GPS_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &gps__msg__GPS__rosidl_typesupport_introspection_c__GPS_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
