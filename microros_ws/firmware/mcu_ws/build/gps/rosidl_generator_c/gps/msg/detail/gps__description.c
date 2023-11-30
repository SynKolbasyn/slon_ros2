// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from gps:msg/GPS.idl
// generated code does not contain a copyright notice

#include "gps/msg/detail/gps__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_gps
const rosidl_type_hash_t *
gps__msg__GPS__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x90, 0xf4, 0xa5, 0xe7, 0x03, 0x13, 0x7a, 0x0a,
      0x6c, 0x98, 0x94, 0x1d, 0xc1, 0x94, 0x92, 0x5a,
      0x65, 0x7b, 0x7e, 0x84, 0x8e, 0x11, 0xf4, 0x9a,
      0x98, 0x33, 0x98, 0xdb, 0x33, 0x5c, 0x2a, 0x3e,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char gps__msg__GPS__TYPE_NAME[] = "gps/msg/GPS";

// Define type names, field names, and default values
static char gps__msg__GPS__FIELD_NAME__lat[] = "lat";
static char gps__msg__GPS__FIELD_NAME__lon[] = "lon";

static rosidl_runtime_c__type_description__Field gps__msg__GPS__FIELDS[] = {
  {
    {gps__msg__GPS__FIELD_NAME__lat, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {gps__msg__GPS__FIELD_NAME__lon, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
gps__msg__GPS__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {gps__msg__GPS__TYPE_NAME, 11, 11},
      {gps__msg__GPS__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float32 lat\n"
  "float32 lon";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
gps__msg__GPS__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {gps__msg__GPS__TYPE_NAME, 11, 11},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 24, 24},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
gps__msg__GPS__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *gps__msg__GPS__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
