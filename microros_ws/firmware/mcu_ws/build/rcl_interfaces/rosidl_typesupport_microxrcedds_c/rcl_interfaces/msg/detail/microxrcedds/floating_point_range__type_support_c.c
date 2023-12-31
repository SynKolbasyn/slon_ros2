// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from rcl_interfaces:msg/FloatingPointRange.idl
// generated code does not contain a copyright notice
#include "rcl_interfaces/msg/detail/floating_point_range__rosidl_typesupport_microxrcedds_c.h"
#include "rcl_interfaces/msg/detail/floating_point_range__functions.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "rcl_interfaces/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "rcl_interfaces/msg/detail/floating_point_range__struct.h"
#include "rcl_interfaces/msg/detail/floating_point_range__functions.h"

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


typedef rcl_interfaces__msg__FloatingPointRange _FloatingPointRange__ros_msg_type;

static bool _FloatingPointRange__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _FloatingPointRange__ros_msg_type * ros_message = (_FloatingPointRange__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: from_value
  rv = ucdr_serialize_double(cdr, ros_message->from_value);
  // Member: to_value
  rv = ucdr_serialize_double(cdr, ros_message->to_value);
  // Member: step
  rv = ucdr_serialize_double(cdr, ros_message->step);

  return rv;
}

static bool _FloatingPointRange__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _FloatingPointRange__ros_msg_type * ros_message = (_FloatingPointRange__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: from_value
  rv = ucdr_deserialize_double(cdr, &ros_message->from_value);
  // Field name: to_value
  rv = ucdr_deserialize_double(cdr, &ros_message->to_value);
  // Field name: step
  rv = ucdr_deserialize_double(cdr, &ros_message->step);
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_rcl_interfaces
size_t get_serialized_size_rcl_interfaces__msg__FloatingPointRange(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _FloatingPointRange__ros_msg_type * ros_message = (const _FloatingPointRange__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: from_value
  {
    const size_t item_size = sizeof(ros_message->from_value);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: to_value
  {
    const size_t item_size = sizeof(ros_message->to_value);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: step
  {
    const size_t item_size = sizeof(ros_message->step);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

static uint32_t _FloatingPointRange__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_rcl_interfaces__msg__FloatingPointRange(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_rcl_interfaces
size_t max_serialized_size_rcl_interfaces__msg__FloatingPointRange(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: from_value
  current_alignment += ucdr_alignment(current_alignment, sizeof(double)) + sizeof(double);
  // Member: to_value
  current_alignment += ucdr_alignment(current_alignment, sizeof(double)) + sizeof(double);
  // Member: step
  current_alignment += ucdr_alignment(current_alignment, sizeof(double)) + sizeof(double);

  return current_alignment - initial_alignment;
}

static size_t _FloatingPointRange__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_rcl_interfaces__msg__FloatingPointRange(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_FloatingPointRange = {
  "rcl_interfaces::msg",
  "FloatingPointRange",
  _FloatingPointRange__cdr_serialize,
  _FloatingPointRange__cdr_deserialize,
  _FloatingPointRange__get_serialized_size,
  get_serialized_size_rcl_interfaces__msg__FloatingPointRange,
  _FloatingPointRange__max_serialized_size
};

static rosidl_message_type_support_t _FloatingPointRange__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_FloatingPointRange,
  get_message_typesupport_handle_function,

  &rcl_interfaces__msg__FloatingPointRange__get_type_hash,
  &rcl_interfaces__msg__FloatingPointRange__get_type_description,
  &rcl_interfaces__msg__FloatingPointRange__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rcl_interfaces, msg, FloatingPointRange)() {
  return &_FloatingPointRange__type_support;
}

#if defined(__cplusplus)
}
#endif
