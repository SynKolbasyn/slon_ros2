// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from std_srvs:srv/Trigger.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "std_srvs/srv/detail/trigger__struct.h"
#include "std_srvs/srv/detail/trigger__type_support.h"
#include "std_srvs/srv/detail/trigger__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace std_srvs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _Trigger_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Trigger_Request_type_support_ids_t;

static const _Trigger_Request_type_support_ids_t _Trigger_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_c",  // ::rosidl_typesupport_microxrcedds_c::typesupport_identifier,
  }
};

typedef struct _Trigger_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Trigger_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Trigger_Request_type_support_symbol_names_t _Trigger_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_srvs, srv, Trigger_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, std_srvs, srv, Trigger_Request)),
  }
};

typedef struct _Trigger_Request_type_support_data_t
{
  void * data[2];
} _Trigger_Request_type_support_data_t;

#ifdef ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT
#ifdef __cplusplus
extern "C"
{
#endif
rosidl_message_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_srvs, srv, Trigger_Request)();
rosidl_message_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, std_srvs, srv, Trigger_Request)();
#ifdef __cplusplus
}
#endif

static _Trigger_Request_type_support_data_t _Trigger_Request_message_typesupport_data = {
  {
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_srvs, srv, Trigger_Request),
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, std_srvs, srv, Trigger_Request),
  }
};
#else
static _Trigger_Request_type_support_data_t _Trigger_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};
#endif // ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT

static const type_support_map_t _Trigger_Request_message_typesupport_map = {
  2,
  "std_srvs",
  &_Trigger_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Trigger_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Trigger_Request_message_typesupport_data.data[0],
};

static rosidl_message_type_support_t Trigger_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Trigger_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &std_srvs__srv__Trigger_Request__get_type_hash,
  &std_srvs__srv__Trigger_Request__get_type_description,
  &std_srvs__srv__Trigger_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace std_srvs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, std_srvs, srv, Trigger_Request)() {
  if (!::std_srvs::srv::rosidl_typesupport_c::Trigger_Request_message_type_support_handle.typesupport_identifier) {
    ::std_srvs::srv::rosidl_typesupport_c::Trigger_Request_message_type_support_handle.typesupport_identifier =
    rosidl_typesupport_c__typesupport_identifier;
  }

  return &::std_srvs::srv::rosidl_typesupport_c::Trigger_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "std_srvs/srv/detail/trigger__struct.h"
// already included above
// #include "std_srvs/srv/detail/trigger__type_support.h"
// already included above
// #include "std_srvs/srv/detail/trigger__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace std_srvs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _Trigger_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Trigger_Response_type_support_ids_t;

static const _Trigger_Response_type_support_ids_t _Trigger_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_c",  // ::rosidl_typesupport_microxrcedds_c::typesupport_identifier,
  }
};

typedef struct _Trigger_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Trigger_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Trigger_Response_type_support_symbol_names_t _Trigger_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_srvs, srv, Trigger_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, std_srvs, srv, Trigger_Response)),
  }
};

typedef struct _Trigger_Response_type_support_data_t
{
  void * data[2];
} _Trigger_Response_type_support_data_t;

#ifdef ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT
#ifdef __cplusplus
extern "C"
{
#endif
rosidl_message_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_srvs, srv, Trigger_Response)();
rosidl_message_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, std_srvs, srv, Trigger_Response)();
#ifdef __cplusplus
}
#endif

static _Trigger_Response_type_support_data_t _Trigger_Response_message_typesupport_data = {
  {
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_srvs, srv, Trigger_Response),
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, std_srvs, srv, Trigger_Response),
  }
};
#else
static _Trigger_Response_type_support_data_t _Trigger_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};
#endif // ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT

static const type_support_map_t _Trigger_Response_message_typesupport_map = {
  2,
  "std_srvs",
  &_Trigger_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Trigger_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Trigger_Response_message_typesupport_data.data[0],
};

static rosidl_message_type_support_t Trigger_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Trigger_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &std_srvs__srv__Trigger_Response__get_type_hash,
  &std_srvs__srv__Trigger_Response__get_type_description,
  &std_srvs__srv__Trigger_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace std_srvs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, std_srvs, srv, Trigger_Response)() {
  if (!::std_srvs::srv::rosidl_typesupport_c::Trigger_Response_message_type_support_handle.typesupport_identifier) {
    ::std_srvs::srv::rosidl_typesupport_c::Trigger_Response_message_type_support_handle.typesupport_identifier =
    rosidl_typesupport_c__typesupport_identifier;
  }

  return &::std_srvs::srv::rosidl_typesupport_c::Trigger_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "std_srvs/srv/detail/trigger__struct.h"
// already included above
// #include "std_srvs/srv/detail/trigger__type_support.h"
// already included above
// #include "std_srvs/srv/detail/trigger__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace std_srvs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _Trigger_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Trigger_Event_type_support_ids_t;

static const _Trigger_Event_type_support_ids_t _Trigger_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_c",  // ::rosidl_typesupport_microxrcedds_c::typesupport_identifier,
  }
};

typedef struct _Trigger_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Trigger_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Trigger_Event_type_support_symbol_names_t _Trigger_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_srvs, srv, Trigger_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, std_srvs, srv, Trigger_Event)),
  }
};

typedef struct _Trigger_Event_type_support_data_t
{
  void * data[2];
} _Trigger_Event_type_support_data_t;

#ifdef ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT
#ifdef __cplusplus
extern "C"
{
#endif
rosidl_message_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_srvs, srv, Trigger_Event)();
rosidl_message_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, std_srvs, srv, Trigger_Event)();
#ifdef __cplusplus
}
#endif

static _Trigger_Event_type_support_data_t _Trigger_Event_message_typesupport_data = {
  {
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_srvs, srv, Trigger_Event),
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, std_srvs, srv, Trigger_Event),
  }
};
#else
static _Trigger_Event_type_support_data_t _Trigger_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};
#endif // ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT

static const type_support_map_t _Trigger_Event_message_typesupport_map = {
  2,
  "std_srvs",
  &_Trigger_Event_message_typesupport_ids.typesupport_identifier[0],
  &_Trigger_Event_message_typesupport_symbol_names.symbol_name[0],
  &_Trigger_Event_message_typesupport_data.data[0],
};

static rosidl_message_type_support_t Trigger_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Trigger_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &std_srvs__srv__Trigger_Event__get_type_hash,
  &std_srvs__srv__Trigger_Event__get_type_description,
  &std_srvs__srv__Trigger_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace std_srvs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, std_srvs, srv, Trigger_Event)() {
  if (!::std_srvs::srv::rosidl_typesupport_c::Trigger_Event_message_type_support_handle.typesupport_identifier) {
    ::std_srvs::srv::rosidl_typesupport_c::Trigger_Event_message_type_support_handle.typesupport_identifier =
    rosidl_typesupport_c__typesupport_identifier;
  }

  return &::std_srvs::srv::rosidl_typesupport_c::Trigger_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "std_srvs/srv/detail/trigger__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace std_srvs
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _Trigger_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Trigger_type_support_ids_t;

static const _Trigger_type_support_ids_t _Trigger_service_typesupport_ids = {
  {
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_c",  // ::rosidl_typesupport_microxrcedds_c::typesupport_identifier,
  }
};

typedef struct _Trigger_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Trigger_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Trigger_type_support_symbol_names_t _Trigger_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_srvs, srv, Trigger)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, std_srvs, srv, Trigger)),
  }
};

typedef struct _Trigger_type_support_data_t
{
  void * data[2];
} _Trigger_type_support_data_t;

#ifdef ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT
#ifdef __cplusplus
extern "C"
{
#endif
rosidl_service_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_srvs, srv, Trigger)();
rosidl_service_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, std_srvs, srv, Trigger)();
#ifdef __cplusplus
}
#endif

static _Trigger_type_support_data_t _Trigger_service_typesupport_data = {
  {
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_srvs, srv, Trigger),
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, std_srvs, srv, Trigger),
  }
};
#else
static _Trigger_type_support_data_t _Trigger_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};
#endif // ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT

static const type_support_map_t _Trigger_service_typesupport_map = {
  2,
  "std_srvs",
  &_Trigger_service_typesupport_ids.typesupport_identifier[0],
  &_Trigger_service_typesupport_symbol_names.symbol_name[0],
  &_Trigger_service_typesupport_data.data[0],
};

static rosidl_service_type_support_t Trigger_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Trigger_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &Trigger_Request_message_type_support_handle,
  &Trigger_Response_message_type_support_handle,
  &Trigger_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    std_srvs,
    srv,
    Trigger
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    std_srvs,
    srv,
    Trigger
  ),
  &std_srvs__srv__Trigger__get_type_hash,
  &std_srvs__srv__Trigger__get_type_description,
  &std_srvs__srv__Trigger__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace std_srvs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, std_srvs, srv, Trigger)() {
  if (!::std_srvs::srv::rosidl_typesupport_c::Trigger_service_type_support_handle.typesupport_identifier) {
    ::std_srvs::srv::rosidl_typesupport_c::Trigger_service_type_support_handle.typesupport_identifier =
    rosidl_typesupport_c__typesupport_identifier;
  }
          
  return &::std_srvs::srv::rosidl_typesupport_c::Trigger_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
