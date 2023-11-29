// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from visualization_msgs:msg/Marker.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "visualization_msgs/msg/detail/marker__struct.h"
#include "visualization_msgs/msg/detail/marker__type_support.h"
#include "visualization_msgs/msg/detail/marker__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace visualization_msgs
{

namespace msg
{

namespace rosidl_typesupport_c
{

typedef struct _Marker_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Marker_type_support_ids_t;

static const _Marker_type_support_ids_t _Marker_message_typesupport_ids = {
  {
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_c",  // ::rosidl_typesupport_microxrcedds_c::typesupport_identifier,
  }
};

typedef struct _Marker_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Marker_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Marker_type_support_symbol_names_t _Marker_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, visualization_msgs, msg, Marker)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, visualization_msgs, msg, Marker)),
  }
};

typedef struct _Marker_type_support_data_t
{
  void * data[2];
} _Marker_type_support_data_t;

#ifdef ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT
#ifdef __cplusplus
extern "C"
{
#endif
rosidl_message_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, visualization_msgs, msg, Marker)();
rosidl_message_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, visualization_msgs, msg, Marker)();
#ifdef __cplusplus
}
#endif

static _Marker_type_support_data_t _Marker_message_typesupport_data = {
  {
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, visualization_msgs, msg, Marker),
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, visualization_msgs, msg, Marker),
  }
};
#else
static _Marker_type_support_data_t _Marker_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};
#endif // ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT

static const type_support_map_t _Marker_message_typesupport_map = {
  2,
  "visualization_msgs",
  &_Marker_message_typesupport_ids.typesupport_identifier[0],
  &_Marker_message_typesupport_symbol_names.symbol_name[0],
  &_Marker_message_typesupport_data.data[0],
};

static rosidl_message_type_support_t Marker_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Marker_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &visualization_msgs__msg__Marker__get_type_hash,
  &visualization_msgs__msg__Marker__get_type_description,
  &visualization_msgs__msg__Marker__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace msg

}  // namespace visualization_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, visualization_msgs, msg, Marker)() {
  if (!::visualization_msgs::msg::rosidl_typesupport_c::Marker_message_type_support_handle.typesupport_identifier) {
    ::visualization_msgs::msg::rosidl_typesupport_c::Marker_message_type_support_handle.typesupport_identifier =
    rosidl_typesupport_c__typesupport_identifier;
  }

  return &::visualization_msgs::msg::rosidl_typesupport_c::Marker_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
