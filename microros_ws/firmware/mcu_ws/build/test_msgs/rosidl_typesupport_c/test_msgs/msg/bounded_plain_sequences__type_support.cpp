// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from test_msgs:msg/BoundedPlainSequences.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "test_msgs/msg/detail/bounded_plain_sequences__struct.h"
#include "test_msgs/msg/detail/bounded_plain_sequences__type_support.h"
#include "test_msgs/msg/detail/bounded_plain_sequences__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace test_msgs
{

namespace msg
{

namespace rosidl_typesupport_c
{

typedef struct _BoundedPlainSequences_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _BoundedPlainSequences_type_support_ids_t;

static const _BoundedPlainSequences_type_support_ids_t _BoundedPlainSequences_message_typesupport_ids = {
  {
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_c",  // ::rosidl_typesupport_microxrcedds_c::typesupport_identifier,
  }
};

typedef struct _BoundedPlainSequences_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _BoundedPlainSequences_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _BoundedPlainSequences_type_support_symbol_names_t _BoundedPlainSequences_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, msg, BoundedPlainSequences)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, msg, BoundedPlainSequences)),
  }
};

typedef struct _BoundedPlainSequences_type_support_data_t
{
  void * data[2];
} _BoundedPlainSequences_type_support_data_t;

#ifdef ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT
#ifdef __cplusplus
extern "C"
{
#endif
rosidl_message_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, msg, BoundedPlainSequences)();
rosidl_message_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, msg, BoundedPlainSequences)();
#ifdef __cplusplus
}
#endif

static _BoundedPlainSequences_type_support_data_t _BoundedPlainSequences_message_typesupport_data = {
  {
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, msg, BoundedPlainSequences),
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, msg, BoundedPlainSequences),
  }
};
#else
static _BoundedPlainSequences_type_support_data_t _BoundedPlainSequences_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};
#endif // ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT

static const type_support_map_t _BoundedPlainSequences_message_typesupport_map = {
  2,
  "test_msgs",
  &_BoundedPlainSequences_message_typesupport_ids.typesupport_identifier[0],
  &_BoundedPlainSequences_message_typesupport_symbol_names.symbol_name[0],
  &_BoundedPlainSequences_message_typesupport_data.data[0],
};

static rosidl_message_type_support_t BoundedPlainSequences_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_BoundedPlainSequences_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &test_msgs__msg__BoundedPlainSequences__get_type_hash,
  &test_msgs__msg__BoundedPlainSequences__get_type_description,
  &test_msgs__msg__BoundedPlainSequences__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace msg

}  // namespace test_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, test_msgs, msg, BoundedPlainSequences)() {
  if (!::test_msgs::msg::rosidl_typesupport_c::BoundedPlainSequences_message_type_support_handle.typesupport_identifier) {
    ::test_msgs::msg::rosidl_typesupport_c::BoundedPlainSequences_message_type_support_handle.typesupport_identifier =
    rosidl_typesupport_c__typesupport_identifier;
  }

  return &::test_msgs::msg::rosidl_typesupport_c::BoundedPlainSequences_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
