// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from rcl_interfaces:msg/ParameterType.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rcl_interfaces/msg/detail/parameter_type__struct.h"
#include "rcl_interfaces/msg/detail/parameter_type__type_support.h"
#include "rcl_interfaces/msg/detail/parameter_type__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace rcl_interfaces
{

namespace msg
{

namespace rosidl_typesupport_c
{

typedef struct _ParameterType_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ParameterType_type_support_ids_t;

static const _ParameterType_type_support_ids_t _ParameterType_message_typesupport_ids = {
  {
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_c",  // ::rosidl_typesupport_microxrcedds_c::typesupport_identifier,
  }
};

typedef struct _ParameterType_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ParameterType_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ParameterType_type_support_symbol_names_t _ParameterType_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rcl_interfaces, msg, ParameterType)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rcl_interfaces, msg, ParameterType)),
  }
};

typedef struct _ParameterType_type_support_data_t
{
  void * data[2];
} _ParameterType_type_support_data_t;

#ifdef ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT
#ifdef __cplusplus
extern "C"
{
#endif
rosidl_message_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rcl_interfaces, msg, ParameterType)();
rosidl_message_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rcl_interfaces, msg, ParameterType)();
#ifdef __cplusplus
}
#endif

static _ParameterType_type_support_data_t _ParameterType_message_typesupport_data = {
  {
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rcl_interfaces, msg, ParameterType),
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rcl_interfaces, msg, ParameterType),
  }
};
#else
static _ParameterType_type_support_data_t _ParameterType_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};
#endif // ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT

static const type_support_map_t _ParameterType_message_typesupport_map = {
  2,
  "rcl_interfaces",
  &_ParameterType_message_typesupport_ids.typesupport_identifier[0],
  &_ParameterType_message_typesupport_symbol_names.symbol_name[0],
  &_ParameterType_message_typesupport_data.data[0],
};

static rosidl_message_type_support_t ParameterType_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ParameterType_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &rcl_interfaces__msg__ParameterType__get_type_hash,
  &rcl_interfaces__msg__ParameterType__get_type_description,
  &rcl_interfaces__msg__ParameterType__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace msg

}  // namespace rcl_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, rcl_interfaces, msg, ParameterType)() {
  if (!::rcl_interfaces::msg::rosidl_typesupport_c::ParameterType_message_type_support_handle.typesupport_identifier) {
    ::rcl_interfaces::msg::rosidl_typesupport_c::ParameterType_message_type_support_handle.typesupport_identifier =
    rosidl_typesupport_c__typesupport_identifier;
  }

  return &::rcl_interfaces::msg::rosidl_typesupport_c::ParameterType_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
