// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from geometry_msgs:msg/Quaternion.idl
// generated code does not contain a copyright notice
#include "geometry_msgs/msg/detail/quaternion__rosidl_typesupport_microxrcedds_c.h"
#include "geometry_msgs/msg/detail/quaternion__functions.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "geometry_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "geometry_msgs/msg/detail/quaternion__struct.h"
#include "geometry_msgs/msg/detail/quaternion__functions.h"

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


// forward declare type support functions


typedef geometry_msgs__msg__Quaternion _Quaternion__ros_msg_type;

static bool _Quaternion__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _Quaternion__ros_msg_type * ros_message = (_Quaternion__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: x
  rv = ucdr_serialize_double(cdr, ros_message->x);
  // Member: y
  rv = ucdr_serialize_double(cdr, ros_message->y);
  // Member: z
  rv = ucdr_serialize_double(cdr, ros_message->z);
  // Member: w
  rv = ucdr_serialize_double(cdr, ros_message->w);

  return rv;
}

static bool _Quaternion__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _Quaternion__ros_msg_type * ros_message = (_Quaternion__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: x
  rv = ucdr_deserialize_double(cdr, &ros_message->x);
  // Field name: y
  rv = ucdr_deserialize_double(cdr, &ros_message->y);
  // Field name: z
  rv = ucdr_deserialize_double(cdr, &ros_message->z);
  // Field name: w
  rv = ucdr_deserialize_double(cdr, &ros_message->w);
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_geometry_msgs
size_t get_serialized_size_geometry_msgs__msg__Quaternion(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _Quaternion__ros_msg_type * ros_message = (const _Quaternion__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: x
  {
    const size_t item_size = sizeof(ros_message->x);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: y
  {
    const size_t item_size = sizeof(ros_message->y);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: z
  {
    const size_t item_size = sizeof(ros_message->z);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: w
  {
    const size_t item_size = sizeof(ros_message->w);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Quaternion__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_geometry_msgs__msg__Quaternion(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_geometry_msgs
size_t max_serialized_size_geometry_msgs__msg__Quaternion(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: x
  current_alignment += ucdr_alignment(current_alignment, sizeof(double)) + sizeof(double);
  // Member: y
  current_alignment += ucdr_alignment(current_alignment, sizeof(double)) + sizeof(double);
  // Member: z
  current_alignment += ucdr_alignment(current_alignment, sizeof(double)) + sizeof(double);
  // Member: w
  current_alignment += ucdr_alignment(current_alignment, sizeof(double)) + sizeof(double);

  return current_alignment - initial_alignment;
}

static size_t _Quaternion__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_geometry_msgs__msg__Quaternion(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_Quaternion = {
  "geometry_msgs::msg",
  "Quaternion",
  _Quaternion__cdr_serialize,
  _Quaternion__cdr_deserialize,
  _Quaternion__get_serialized_size,
  get_serialized_size_geometry_msgs__msg__Quaternion,
  _Quaternion__max_serialized_size
};

static rosidl_message_type_support_t _Quaternion__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_Quaternion,
  get_message_typesupport_handle_function,

  &geometry_msgs__msg__Quaternion__get_type_hash,
  &geometry_msgs__msg__Quaternion__get_type_description,
  &geometry_msgs__msg__Quaternion__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, geometry_msgs, msg, Quaternion)() {
  return &_Quaternion__type_support;
}

#if defined(__cplusplus)
}
#endif
