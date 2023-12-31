// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from geometry_msgs:msg/Wrench.idl
// generated code does not contain a copyright notice
#include "geometry_msgs/msg/detail/wrench__rosidl_typesupport_microxrcedds_c.h"
#include "geometry_msgs/msg/detail/wrench__functions.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "geometry_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "geometry_msgs/msg/detail/wrench__struct.h"
#include "geometry_msgs/msg/detail/wrench__functions.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#define MICROXRCEDDS_PADDING sizeof(uint32_t)

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "geometry_msgs/msg/detail/vector3__functions.h"  // force, torque

// forward declare type support functions
size_t get_serialized_size_geometry_msgs__msg__Vector3(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_geometry_msgs__msg__Vector3(
  bool * full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, geometry_msgs, msg, Vector3)();


typedef geometry_msgs__msg__Wrench _Wrench__ros_msg_type;

static bool _Wrench__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _Wrench__ros_msg_type * ros_message = (_Wrench__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: force
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, geometry_msgs, msg, Vector3
      )()->data))->cdr_serialize(&ros_message->force, cdr);
  // Member: torque
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, geometry_msgs, msg, Vector3
      )()->data))->cdr_serialize(&ros_message->torque, cdr);

  return rv;
}

static bool _Wrench__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _Wrench__ros_msg_type * ros_message = (_Wrench__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: force
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, geometry_msgs, msg, Vector3
      )()->data))->cdr_deserialize(cdr, &ros_message->force);
  // Field name: torque
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, geometry_msgs, msg, Vector3
      )()->data))->cdr_deserialize(cdr, &ros_message->torque);
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_geometry_msgs
size_t get_serialized_size_geometry_msgs__msg__Wrench(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _Wrench__ros_msg_type * ros_message = (const _Wrench__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: force
  current_alignment +=
    get_serialized_size_geometry_msgs__msg__Vector3(&ros_message->force, current_alignment);
  // Member: torque
  current_alignment +=
    get_serialized_size_geometry_msgs__msg__Vector3(&ros_message->torque, current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _Wrench__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_geometry_msgs__msg__Wrench(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_geometry_msgs
size_t max_serialized_size_geometry_msgs__msg__Wrench(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: force
  current_alignment +=
    max_serialized_size_geometry_msgs__msg__Vector3(full_bounded, current_alignment);
  // Member: torque
  current_alignment +=
    max_serialized_size_geometry_msgs__msg__Vector3(full_bounded, current_alignment);

  return current_alignment - initial_alignment;
}

static size_t _Wrench__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_geometry_msgs__msg__Wrench(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_Wrench = {
  "geometry_msgs::msg",
  "Wrench",
  _Wrench__cdr_serialize,
  _Wrench__cdr_deserialize,
  _Wrench__get_serialized_size,
  get_serialized_size_geometry_msgs__msg__Wrench,
  _Wrench__max_serialized_size
};

static rosidl_message_type_support_t _Wrench__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_Wrench,
  get_message_typesupport_handle_function,

  &geometry_msgs__msg__Wrench__get_type_hash,
  &geometry_msgs__msg__Wrench__get_type_description,
  &geometry_msgs__msg__Wrench__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, geometry_msgs, msg, Wrench)() {
  return &_Wrench__type_support;
}

#if defined(__cplusplus)
}
#endif
