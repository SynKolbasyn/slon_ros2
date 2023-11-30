// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from gps:msg/GPS.idl
// generated code does not contain a copyright notice
#include "gps/msg/detail/gps__rosidl_typesupport_microxrcedds_c.h"
#include "gps/msg/detail/gps__functions.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "gps/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "gps/msg/detail/gps__struct.h"
#include "gps/msg/detail/gps__functions.h"

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


typedef gps__msg__GPS _GPS__ros_msg_type;

static bool _GPS__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _GPS__ros_msg_type * ros_message = (_GPS__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: lat
  rv = ucdr_serialize_float(cdr, ros_message->lat);
  // Member: lon
  rv = ucdr_serialize_float(cdr, ros_message->lon);

  return rv;
}

static bool _GPS__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _GPS__ros_msg_type * ros_message = (_GPS__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: lat
  rv = ucdr_deserialize_float(cdr, &ros_message->lat);
  // Field name: lon
  rv = ucdr_deserialize_float(cdr, &ros_message->lon);
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_gps
size_t get_serialized_size_gps__msg__GPS(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _GPS__ros_msg_type * ros_message = (const _GPS__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: lat
  {
    const size_t item_size = sizeof(ros_message->lat);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: lon
  {
    const size_t item_size = sizeof(ros_message->lon);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GPS__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_gps__msg__GPS(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_gps
size_t max_serialized_size_gps__msg__GPS(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: lat
  current_alignment += ucdr_alignment(current_alignment, sizeof(float)) + sizeof(float);
  // Member: lon
  current_alignment += ucdr_alignment(current_alignment, sizeof(float)) + sizeof(float);

  return current_alignment - initial_alignment;
}

static size_t _GPS__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_gps__msg__GPS(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_GPS = {
  "gps::msg",
  "GPS",
  _GPS__cdr_serialize,
  _GPS__cdr_deserialize,
  _GPS__get_serialized_size,
  get_serialized_size_gps__msg__GPS,
  _GPS__max_serialized_size
};

static rosidl_message_type_support_t _GPS__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_GPS,
  get_message_typesupport_handle_function,

  &gps__msg__GPS__get_type_hash,
  &gps__msg__GPS__get_type_description,
  &gps__msg__GPS__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, gps, msg, GPS)() {
  return &_GPS__type_support;
}

#if defined(__cplusplus)
}
#endif
