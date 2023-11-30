// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gps:msg/GPS.idl
// generated code does not contain a copyright notice

#ifndef GPS__MSG__DETAIL__GPS__STRUCT_H_
#define GPS__MSG__DETAIL__GPS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/GPS in the package gps.
typedef struct gps__msg__GPS
{
  float lat;
  float lon;
} gps__msg__GPS;

// Struct for a sequence of gps__msg__GPS.
typedef struct gps__msg__GPS__Sequence
{
  gps__msg__GPS * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gps__msg__GPS__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GPS__MSG__DETAIL__GPS__STRUCT_H_
