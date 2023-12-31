// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from test_msgs:action/Fibonacci.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "test_msgs/action/detail/fibonacci__struct.h"
#include "test_msgs/action/detail/fibonacci__type_support.h"
#include "test_msgs/action/detail/fibonacci__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace test_msgs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Fibonacci_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Fibonacci_Goal_type_support_ids_t;

static const _Fibonacci_Goal_type_support_ids_t _Fibonacci_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_c",  // ::rosidl_typesupport_microxrcedds_c::typesupport_identifier,
  }
};

typedef struct _Fibonacci_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Fibonacci_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Fibonacci_Goal_type_support_symbol_names_t _Fibonacci_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, action, Fibonacci_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, action, Fibonacci_Goal)),
  }
};

typedef struct _Fibonacci_Goal_type_support_data_t
{
  void * data[2];
} _Fibonacci_Goal_type_support_data_t;

#ifdef ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT
#ifdef __cplusplus
extern "C"
{
#endif
rosidl_message_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, action, Fibonacci_Goal)();
rosidl_message_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, action, Fibonacci_Goal)();
#ifdef __cplusplus
}
#endif

static _Fibonacci_Goal_type_support_data_t _Fibonacci_Goal_message_typesupport_data = {
  {
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, action, Fibonacci_Goal),
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, action, Fibonacci_Goal),
  }
};
#else
static _Fibonacci_Goal_type_support_data_t _Fibonacci_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};
#endif // ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT

static const type_support_map_t _Fibonacci_Goal_message_typesupport_map = {
  2,
  "test_msgs",
  &_Fibonacci_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_Fibonacci_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_Fibonacci_Goal_message_typesupport_data.data[0],
};

static rosidl_message_type_support_t Fibonacci_Goal_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Fibonacci_Goal_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &test_msgs__action__Fibonacci_Goal__get_type_hash,
  &test_msgs__action__Fibonacci_Goal__get_type_description,
  &test_msgs__action__Fibonacci_Goal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace test_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, test_msgs, action, Fibonacci_Goal)() {
  if (!::test_msgs::action::rosidl_typesupport_c::Fibonacci_Goal_message_type_support_handle.typesupport_identifier) {
    ::test_msgs::action::rosidl_typesupport_c::Fibonacci_Goal_message_type_support_handle.typesupport_identifier =
    rosidl_typesupport_c__typesupport_identifier;
  }

  return &::test_msgs::action::rosidl_typesupport_c::Fibonacci_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "test_msgs/action/detail/fibonacci__struct.h"
// already included above
// #include "test_msgs/action/detail/fibonacci__type_support.h"
// already included above
// #include "test_msgs/action/detail/fibonacci__functions.h"
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

namespace test_msgs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Fibonacci_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Fibonacci_Result_type_support_ids_t;

static const _Fibonacci_Result_type_support_ids_t _Fibonacci_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_c",  // ::rosidl_typesupport_microxrcedds_c::typesupport_identifier,
  }
};

typedef struct _Fibonacci_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Fibonacci_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Fibonacci_Result_type_support_symbol_names_t _Fibonacci_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, action, Fibonacci_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, action, Fibonacci_Result)),
  }
};

typedef struct _Fibonacci_Result_type_support_data_t
{
  void * data[2];
} _Fibonacci_Result_type_support_data_t;

#ifdef ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT
#ifdef __cplusplus
extern "C"
{
#endif
rosidl_message_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, action, Fibonacci_Result)();
rosidl_message_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, action, Fibonacci_Result)();
#ifdef __cplusplus
}
#endif

static _Fibonacci_Result_type_support_data_t _Fibonacci_Result_message_typesupport_data = {
  {
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, action, Fibonacci_Result),
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, action, Fibonacci_Result),
  }
};
#else
static _Fibonacci_Result_type_support_data_t _Fibonacci_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};
#endif // ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT

static const type_support_map_t _Fibonacci_Result_message_typesupport_map = {
  2,
  "test_msgs",
  &_Fibonacci_Result_message_typesupport_ids.typesupport_identifier[0],
  &_Fibonacci_Result_message_typesupport_symbol_names.symbol_name[0],
  &_Fibonacci_Result_message_typesupport_data.data[0],
};

static rosidl_message_type_support_t Fibonacci_Result_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Fibonacci_Result_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &test_msgs__action__Fibonacci_Result__get_type_hash,
  &test_msgs__action__Fibonacci_Result__get_type_description,
  &test_msgs__action__Fibonacci_Result__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace test_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, test_msgs, action, Fibonacci_Result)() {
  if (!::test_msgs::action::rosidl_typesupport_c::Fibonacci_Result_message_type_support_handle.typesupport_identifier) {
    ::test_msgs::action::rosidl_typesupport_c::Fibonacci_Result_message_type_support_handle.typesupport_identifier =
    rosidl_typesupport_c__typesupport_identifier;
  }

  return &::test_msgs::action::rosidl_typesupport_c::Fibonacci_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "test_msgs/action/detail/fibonacci__struct.h"
// already included above
// #include "test_msgs/action/detail/fibonacci__type_support.h"
// already included above
// #include "test_msgs/action/detail/fibonacci__functions.h"
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

namespace test_msgs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Fibonacci_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Fibonacci_Feedback_type_support_ids_t;

static const _Fibonacci_Feedback_type_support_ids_t _Fibonacci_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_c",  // ::rosidl_typesupport_microxrcedds_c::typesupport_identifier,
  }
};

typedef struct _Fibonacci_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Fibonacci_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Fibonacci_Feedback_type_support_symbol_names_t _Fibonacci_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, action, Fibonacci_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, action, Fibonacci_Feedback)),
  }
};

typedef struct _Fibonacci_Feedback_type_support_data_t
{
  void * data[2];
} _Fibonacci_Feedback_type_support_data_t;

#ifdef ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT
#ifdef __cplusplus
extern "C"
{
#endif
rosidl_message_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, action, Fibonacci_Feedback)();
rosidl_message_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, action, Fibonacci_Feedback)();
#ifdef __cplusplus
}
#endif

static _Fibonacci_Feedback_type_support_data_t _Fibonacci_Feedback_message_typesupport_data = {
  {
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, action, Fibonacci_Feedback),
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, action, Fibonacci_Feedback),
  }
};
#else
static _Fibonacci_Feedback_type_support_data_t _Fibonacci_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};
#endif // ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT

static const type_support_map_t _Fibonacci_Feedback_message_typesupport_map = {
  2,
  "test_msgs",
  &_Fibonacci_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_Fibonacci_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_Fibonacci_Feedback_message_typesupport_data.data[0],
};

static rosidl_message_type_support_t Fibonacci_Feedback_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Fibonacci_Feedback_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &test_msgs__action__Fibonacci_Feedback__get_type_hash,
  &test_msgs__action__Fibonacci_Feedback__get_type_description,
  &test_msgs__action__Fibonacci_Feedback__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace test_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, test_msgs, action, Fibonacci_Feedback)() {
  if (!::test_msgs::action::rosidl_typesupport_c::Fibonacci_Feedback_message_type_support_handle.typesupport_identifier) {
    ::test_msgs::action::rosidl_typesupport_c::Fibonacci_Feedback_message_type_support_handle.typesupport_identifier =
    rosidl_typesupport_c__typesupport_identifier;
  }

  return &::test_msgs::action::rosidl_typesupport_c::Fibonacci_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "test_msgs/action/detail/fibonacci__struct.h"
// already included above
// #include "test_msgs/action/detail/fibonacci__type_support.h"
// already included above
// #include "test_msgs/action/detail/fibonacci__functions.h"
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

namespace test_msgs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Fibonacci_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Fibonacci_SendGoal_Request_type_support_ids_t;

static const _Fibonacci_SendGoal_Request_type_support_ids_t _Fibonacci_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_c",  // ::rosidl_typesupport_microxrcedds_c::typesupport_identifier,
  }
};

typedef struct _Fibonacci_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Fibonacci_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Fibonacci_SendGoal_Request_type_support_symbol_names_t _Fibonacci_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, action, Fibonacci_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, action, Fibonacci_SendGoal_Request)),
  }
};

typedef struct _Fibonacci_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _Fibonacci_SendGoal_Request_type_support_data_t;

#ifdef ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT
#ifdef __cplusplus
extern "C"
{
#endif
rosidl_message_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, action, Fibonacci_SendGoal_Request)();
rosidl_message_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, action, Fibonacci_SendGoal_Request)();
#ifdef __cplusplus
}
#endif

static _Fibonacci_SendGoal_Request_type_support_data_t _Fibonacci_SendGoal_Request_message_typesupport_data = {
  {
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, action, Fibonacci_SendGoal_Request),
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, action, Fibonacci_SendGoal_Request),
  }
};
#else
static _Fibonacci_SendGoal_Request_type_support_data_t _Fibonacci_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};
#endif // ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT

static const type_support_map_t _Fibonacci_SendGoal_Request_message_typesupport_map = {
  2,
  "test_msgs",
  &_Fibonacci_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Fibonacci_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Fibonacci_SendGoal_Request_message_typesupport_data.data[0],
};

static rosidl_message_type_support_t Fibonacci_SendGoal_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Fibonacci_SendGoal_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &test_msgs__action__Fibonacci_SendGoal_Request__get_type_hash,
  &test_msgs__action__Fibonacci_SendGoal_Request__get_type_description,
  &test_msgs__action__Fibonacci_SendGoal_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace test_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, test_msgs, action, Fibonacci_SendGoal_Request)() {
  if (!::test_msgs::action::rosidl_typesupport_c::Fibonacci_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    ::test_msgs::action::rosidl_typesupport_c::Fibonacci_SendGoal_Request_message_type_support_handle.typesupport_identifier =
    rosidl_typesupport_c__typesupport_identifier;
  }

  return &::test_msgs::action::rosidl_typesupport_c::Fibonacci_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "test_msgs/action/detail/fibonacci__struct.h"
// already included above
// #include "test_msgs/action/detail/fibonacci__type_support.h"
// already included above
// #include "test_msgs/action/detail/fibonacci__functions.h"
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

namespace test_msgs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Fibonacci_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Fibonacci_SendGoal_Response_type_support_ids_t;

static const _Fibonacci_SendGoal_Response_type_support_ids_t _Fibonacci_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_c",  // ::rosidl_typesupport_microxrcedds_c::typesupport_identifier,
  }
};

typedef struct _Fibonacci_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Fibonacci_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Fibonacci_SendGoal_Response_type_support_symbol_names_t _Fibonacci_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, action, Fibonacci_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, action, Fibonacci_SendGoal_Response)),
  }
};

typedef struct _Fibonacci_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _Fibonacci_SendGoal_Response_type_support_data_t;

#ifdef ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT
#ifdef __cplusplus
extern "C"
{
#endif
rosidl_message_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, action, Fibonacci_SendGoal_Response)();
rosidl_message_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, action, Fibonacci_SendGoal_Response)();
#ifdef __cplusplus
}
#endif

static _Fibonacci_SendGoal_Response_type_support_data_t _Fibonacci_SendGoal_Response_message_typesupport_data = {
  {
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, action, Fibonacci_SendGoal_Response),
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, action, Fibonacci_SendGoal_Response),
  }
};
#else
static _Fibonacci_SendGoal_Response_type_support_data_t _Fibonacci_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};
#endif // ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT

static const type_support_map_t _Fibonacci_SendGoal_Response_message_typesupport_map = {
  2,
  "test_msgs",
  &_Fibonacci_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Fibonacci_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Fibonacci_SendGoal_Response_message_typesupport_data.data[0],
};

static rosidl_message_type_support_t Fibonacci_SendGoal_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Fibonacci_SendGoal_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &test_msgs__action__Fibonacci_SendGoal_Response__get_type_hash,
  &test_msgs__action__Fibonacci_SendGoal_Response__get_type_description,
  &test_msgs__action__Fibonacci_SendGoal_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace test_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, test_msgs, action, Fibonacci_SendGoal_Response)() {
  if (!::test_msgs::action::rosidl_typesupport_c::Fibonacci_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    ::test_msgs::action::rosidl_typesupport_c::Fibonacci_SendGoal_Response_message_type_support_handle.typesupport_identifier =
    rosidl_typesupport_c__typesupport_identifier;
  }

  return &::test_msgs::action::rosidl_typesupport_c::Fibonacci_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "test_msgs/action/detail/fibonacci__struct.h"
// already included above
// #include "test_msgs/action/detail/fibonacci__type_support.h"
// already included above
// #include "test_msgs/action/detail/fibonacci__functions.h"
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

namespace test_msgs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Fibonacci_SendGoal_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Fibonacci_SendGoal_Event_type_support_ids_t;

static const _Fibonacci_SendGoal_Event_type_support_ids_t _Fibonacci_SendGoal_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_c",  // ::rosidl_typesupport_microxrcedds_c::typesupport_identifier,
  }
};

typedef struct _Fibonacci_SendGoal_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Fibonacci_SendGoal_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Fibonacci_SendGoal_Event_type_support_symbol_names_t _Fibonacci_SendGoal_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, action, Fibonacci_SendGoal_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, action, Fibonacci_SendGoal_Event)),
  }
};

typedef struct _Fibonacci_SendGoal_Event_type_support_data_t
{
  void * data[2];
} _Fibonacci_SendGoal_Event_type_support_data_t;

#ifdef ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT
#ifdef __cplusplus
extern "C"
{
#endif
rosidl_message_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, action, Fibonacci_SendGoal_Event)();
rosidl_message_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, action, Fibonacci_SendGoal_Event)();
#ifdef __cplusplus
}
#endif

static _Fibonacci_SendGoal_Event_type_support_data_t _Fibonacci_SendGoal_Event_message_typesupport_data = {
  {
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, action, Fibonacci_SendGoal_Event),
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, action, Fibonacci_SendGoal_Event),
  }
};
#else
static _Fibonacci_SendGoal_Event_type_support_data_t _Fibonacci_SendGoal_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};
#endif // ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT

static const type_support_map_t _Fibonacci_SendGoal_Event_message_typesupport_map = {
  2,
  "test_msgs",
  &_Fibonacci_SendGoal_Event_message_typesupport_ids.typesupport_identifier[0],
  &_Fibonacci_SendGoal_Event_message_typesupport_symbol_names.symbol_name[0],
  &_Fibonacci_SendGoal_Event_message_typesupport_data.data[0],
};

static rosidl_message_type_support_t Fibonacci_SendGoal_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Fibonacci_SendGoal_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &test_msgs__action__Fibonacci_SendGoal_Event__get_type_hash,
  &test_msgs__action__Fibonacci_SendGoal_Event__get_type_description,
  &test_msgs__action__Fibonacci_SendGoal_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace test_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, test_msgs, action, Fibonacci_SendGoal_Event)() {
  if (!::test_msgs::action::rosidl_typesupport_c::Fibonacci_SendGoal_Event_message_type_support_handle.typesupport_identifier) {
    ::test_msgs::action::rosidl_typesupport_c::Fibonacci_SendGoal_Event_message_type_support_handle.typesupport_identifier =
    rosidl_typesupport_c__typesupport_identifier;
  }

  return &::test_msgs::action::rosidl_typesupport_c::Fibonacci_SendGoal_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "test_msgs/action/detail/fibonacci__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace test_msgs
{

namespace action
{

namespace rosidl_typesupport_c
{
typedef struct _Fibonacci_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Fibonacci_SendGoal_type_support_ids_t;

static const _Fibonacci_SendGoal_type_support_ids_t _Fibonacci_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_c",  // ::rosidl_typesupport_microxrcedds_c::typesupport_identifier,
  }
};

typedef struct _Fibonacci_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Fibonacci_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Fibonacci_SendGoal_type_support_symbol_names_t _Fibonacci_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, action, Fibonacci_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, action, Fibonacci_SendGoal)),
  }
};

typedef struct _Fibonacci_SendGoal_type_support_data_t
{
  void * data[2];
} _Fibonacci_SendGoal_type_support_data_t;

#ifdef ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT
#ifdef __cplusplus
extern "C"
{
#endif
rosidl_service_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, action, Fibonacci_SendGoal)();
rosidl_service_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, action, Fibonacci_SendGoal)();
#ifdef __cplusplus
}
#endif

static _Fibonacci_SendGoal_type_support_data_t _Fibonacci_SendGoal_service_typesupport_data = {
  {
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, action, Fibonacci_SendGoal),
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, action, Fibonacci_SendGoal),
  }
};
#else
static _Fibonacci_SendGoal_type_support_data_t _Fibonacci_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};
#endif // ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT

static const type_support_map_t _Fibonacci_SendGoal_service_typesupport_map = {
  2,
  "test_msgs",
  &_Fibonacci_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_Fibonacci_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_Fibonacci_SendGoal_service_typesupport_data.data[0],
};

static rosidl_service_type_support_t Fibonacci_SendGoal_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Fibonacci_SendGoal_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &Fibonacci_SendGoal_Request_message_type_support_handle,
  &Fibonacci_SendGoal_Response_message_type_support_handle,
  &Fibonacci_SendGoal_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    test_msgs,
    action,
    Fibonacci_SendGoal
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    test_msgs,
    action,
    Fibonacci_SendGoal
  ),
  &test_msgs__action__Fibonacci_SendGoal__get_type_hash,
  &test_msgs__action__Fibonacci_SendGoal__get_type_description,
  &test_msgs__action__Fibonacci_SendGoal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace test_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, test_msgs, action, Fibonacci_SendGoal)() {
  if (!::test_msgs::action::rosidl_typesupport_c::Fibonacci_SendGoal_service_type_support_handle.typesupport_identifier) {
    ::test_msgs::action::rosidl_typesupport_c::Fibonacci_SendGoal_service_type_support_handle.typesupport_identifier =
    rosidl_typesupport_c__typesupport_identifier;
  }
          
  return &::test_msgs::action::rosidl_typesupport_c::Fibonacci_SendGoal_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "test_msgs/action/detail/fibonacci__struct.h"
// already included above
// #include "test_msgs/action/detail/fibonacci__type_support.h"
// already included above
// #include "test_msgs/action/detail/fibonacci__functions.h"
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

namespace test_msgs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Fibonacci_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Fibonacci_GetResult_Request_type_support_ids_t;

static const _Fibonacci_GetResult_Request_type_support_ids_t _Fibonacci_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_c",  // ::rosidl_typesupport_microxrcedds_c::typesupport_identifier,
  }
};

typedef struct _Fibonacci_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Fibonacci_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Fibonacci_GetResult_Request_type_support_symbol_names_t _Fibonacci_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, action, Fibonacci_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, action, Fibonacci_GetResult_Request)),
  }
};

typedef struct _Fibonacci_GetResult_Request_type_support_data_t
{
  void * data[2];
} _Fibonacci_GetResult_Request_type_support_data_t;

#ifdef ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT
#ifdef __cplusplus
extern "C"
{
#endif
rosidl_message_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, action, Fibonacci_GetResult_Request)();
rosidl_message_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, action, Fibonacci_GetResult_Request)();
#ifdef __cplusplus
}
#endif

static _Fibonacci_GetResult_Request_type_support_data_t _Fibonacci_GetResult_Request_message_typesupport_data = {
  {
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, action, Fibonacci_GetResult_Request),
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, action, Fibonacci_GetResult_Request),
  }
};
#else
static _Fibonacci_GetResult_Request_type_support_data_t _Fibonacci_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};
#endif // ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT

static const type_support_map_t _Fibonacci_GetResult_Request_message_typesupport_map = {
  2,
  "test_msgs",
  &_Fibonacci_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Fibonacci_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Fibonacci_GetResult_Request_message_typesupport_data.data[0],
};

static rosidl_message_type_support_t Fibonacci_GetResult_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Fibonacci_GetResult_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &test_msgs__action__Fibonacci_GetResult_Request__get_type_hash,
  &test_msgs__action__Fibonacci_GetResult_Request__get_type_description,
  &test_msgs__action__Fibonacci_GetResult_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace test_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, test_msgs, action, Fibonacci_GetResult_Request)() {
  if (!::test_msgs::action::rosidl_typesupport_c::Fibonacci_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    ::test_msgs::action::rosidl_typesupport_c::Fibonacci_GetResult_Request_message_type_support_handle.typesupport_identifier =
    rosidl_typesupport_c__typesupport_identifier;
  }

  return &::test_msgs::action::rosidl_typesupport_c::Fibonacci_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "test_msgs/action/detail/fibonacci__struct.h"
// already included above
// #include "test_msgs/action/detail/fibonacci__type_support.h"
// already included above
// #include "test_msgs/action/detail/fibonacci__functions.h"
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

namespace test_msgs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Fibonacci_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Fibonacci_GetResult_Response_type_support_ids_t;

static const _Fibonacci_GetResult_Response_type_support_ids_t _Fibonacci_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_c",  // ::rosidl_typesupport_microxrcedds_c::typesupport_identifier,
  }
};

typedef struct _Fibonacci_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Fibonacci_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Fibonacci_GetResult_Response_type_support_symbol_names_t _Fibonacci_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, action, Fibonacci_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, action, Fibonacci_GetResult_Response)),
  }
};

typedef struct _Fibonacci_GetResult_Response_type_support_data_t
{
  void * data[2];
} _Fibonacci_GetResult_Response_type_support_data_t;

#ifdef ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT
#ifdef __cplusplus
extern "C"
{
#endif
rosidl_message_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, action, Fibonacci_GetResult_Response)();
rosidl_message_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, action, Fibonacci_GetResult_Response)();
#ifdef __cplusplus
}
#endif

static _Fibonacci_GetResult_Response_type_support_data_t _Fibonacci_GetResult_Response_message_typesupport_data = {
  {
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, action, Fibonacci_GetResult_Response),
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, action, Fibonacci_GetResult_Response),
  }
};
#else
static _Fibonacci_GetResult_Response_type_support_data_t _Fibonacci_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};
#endif // ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT

static const type_support_map_t _Fibonacci_GetResult_Response_message_typesupport_map = {
  2,
  "test_msgs",
  &_Fibonacci_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Fibonacci_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Fibonacci_GetResult_Response_message_typesupport_data.data[0],
};

static rosidl_message_type_support_t Fibonacci_GetResult_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Fibonacci_GetResult_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &test_msgs__action__Fibonacci_GetResult_Response__get_type_hash,
  &test_msgs__action__Fibonacci_GetResult_Response__get_type_description,
  &test_msgs__action__Fibonacci_GetResult_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace test_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, test_msgs, action, Fibonacci_GetResult_Response)() {
  if (!::test_msgs::action::rosidl_typesupport_c::Fibonacci_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    ::test_msgs::action::rosidl_typesupport_c::Fibonacci_GetResult_Response_message_type_support_handle.typesupport_identifier =
    rosidl_typesupport_c__typesupport_identifier;
  }

  return &::test_msgs::action::rosidl_typesupport_c::Fibonacci_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "test_msgs/action/detail/fibonacci__struct.h"
// already included above
// #include "test_msgs/action/detail/fibonacci__type_support.h"
// already included above
// #include "test_msgs/action/detail/fibonacci__functions.h"
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

namespace test_msgs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Fibonacci_GetResult_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Fibonacci_GetResult_Event_type_support_ids_t;

static const _Fibonacci_GetResult_Event_type_support_ids_t _Fibonacci_GetResult_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_c",  // ::rosidl_typesupport_microxrcedds_c::typesupport_identifier,
  }
};

typedef struct _Fibonacci_GetResult_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Fibonacci_GetResult_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Fibonacci_GetResult_Event_type_support_symbol_names_t _Fibonacci_GetResult_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, action, Fibonacci_GetResult_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, action, Fibonacci_GetResult_Event)),
  }
};

typedef struct _Fibonacci_GetResult_Event_type_support_data_t
{
  void * data[2];
} _Fibonacci_GetResult_Event_type_support_data_t;

#ifdef ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT
#ifdef __cplusplus
extern "C"
{
#endif
rosidl_message_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, action, Fibonacci_GetResult_Event)();
rosidl_message_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, action, Fibonacci_GetResult_Event)();
#ifdef __cplusplus
}
#endif

static _Fibonacci_GetResult_Event_type_support_data_t _Fibonacci_GetResult_Event_message_typesupport_data = {
  {
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, action, Fibonacci_GetResult_Event),
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, action, Fibonacci_GetResult_Event),
  }
};
#else
static _Fibonacci_GetResult_Event_type_support_data_t _Fibonacci_GetResult_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};
#endif // ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT

static const type_support_map_t _Fibonacci_GetResult_Event_message_typesupport_map = {
  2,
  "test_msgs",
  &_Fibonacci_GetResult_Event_message_typesupport_ids.typesupport_identifier[0],
  &_Fibonacci_GetResult_Event_message_typesupport_symbol_names.symbol_name[0],
  &_Fibonacci_GetResult_Event_message_typesupport_data.data[0],
};

static rosidl_message_type_support_t Fibonacci_GetResult_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Fibonacci_GetResult_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &test_msgs__action__Fibonacci_GetResult_Event__get_type_hash,
  &test_msgs__action__Fibonacci_GetResult_Event__get_type_description,
  &test_msgs__action__Fibonacci_GetResult_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace test_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, test_msgs, action, Fibonacci_GetResult_Event)() {
  if (!::test_msgs::action::rosidl_typesupport_c::Fibonacci_GetResult_Event_message_type_support_handle.typesupport_identifier) {
    ::test_msgs::action::rosidl_typesupport_c::Fibonacci_GetResult_Event_message_type_support_handle.typesupport_identifier =
    rosidl_typesupport_c__typesupport_identifier;
  }

  return &::test_msgs::action::rosidl_typesupport_c::Fibonacci_GetResult_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "test_msgs/action/detail/fibonacci__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "service_msgs/msg/service_event_info.h"
// already included above
// #include "builtin_interfaces/msg/time.h"

namespace test_msgs
{

namespace action
{

namespace rosidl_typesupport_c
{
typedef struct _Fibonacci_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Fibonacci_GetResult_type_support_ids_t;

static const _Fibonacci_GetResult_type_support_ids_t _Fibonacci_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_c",  // ::rosidl_typesupport_microxrcedds_c::typesupport_identifier,
  }
};

typedef struct _Fibonacci_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Fibonacci_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Fibonacci_GetResult_type_support_symbol_names_t _Fibonacci_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, action, Fibonacci_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, action, Fibonacci_GetResult)),
  }
};

typedef struct _Fibonacci_GetResult_type_support_data_t
{
  void * data[2];
} _Fibonacci_GetResult_type_support_data_t;

#ifdef ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT
#ifdef __cplusplus
extern "C"
{
#endif
rosidl_service_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, action, Fibonacci_GetResult)();
rosidl_service_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, action, Fibonacci_GetResult)();
#ifdef __cplusplus
}
#endif

static _Fibonacci_GetResult_type_support_data_t _Fibonacci_GetResult_service_typesupport_data = {
  {
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, action, Fibonacci_GetResult),
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, action, Fibonacci_GetResult),
  }
};
#else
static _Fibonacci_GetResult_type_support_data_t _Fibonacci_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};
#endif // ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT

static const type_support_map_t _Fibonacci_GetResult_service_typesupport_map = {
  2,
  "test_msgs",
  &_Fibonacci_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_Fibonacci_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_Fibonacci_GetResult_service_typesupport_data.data[0],
};

static rosidl_service_type_support_t Fibonacci_GetResult_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Fibonacci_GetResult_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &Fibonacci_GetResult_Request_message_type_support_handle,
  &Fibonacci_GetResult_Response_message_type_support_handle,
  &Fibonacci_GetResult_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    test_msgs,
    action,
    Fibonacci_GetResult
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    test_msgs,
    action,
    Fibonacci_GetResult
  ),
  &test_msgs__action__Fibonacci_GetResult__get_type_hash,
  &test_msgs__action__Fibonacci_GetResult__get_type_description,
  &test_msgs__action__Fibonacci_GetResult__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace test_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, test_msgs, action, Fibonacci_GetResult)() {
  if (!::test_msgs::action::rosidl_typesupport_c::Fibonacci_GetResult_service_type_support_handle.typesupport_identifier) {
    ::test_msgs::action::rosidl_typesupport_c::Fibonacci_GetResult_service_type_support_handle.typesupport_identifier =
    rosidl_typesupport_c__typesupport_identifier;
  }
          
  return &::test_msgs::action::rosidl_typesupport_c::Fibonacci_GetResult_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "test_msgs/action/detail/fibonacci__struct.h"
// already included above
// #include "test_msgs/action/detail/fibonacci__type_support.h"
// already included above
// #include "test_msgs/action/detail/fibonacci__functions.h"
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

namespace test_msgs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Fibonacci_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Fibonacci_FeedbackMessage_type_support_ids_t;

static const _Fibonacci_FeedbackMessage_type_support_ids_t _Fibonacci_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_c",  // ::rosidl_typesupport_microxrcedds_c::typesupport_identifier,
  }
};

typedef struct _Fibonacci_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Fibonacci_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Fibonacci_FeedbackMessage_type_support_symbol_names_t _Fibonacci_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, action, Fibonacci_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, action, Fibonacci_FeedbackMessage)),
  }
};

typedef struct _Fibonacci_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _Fibonacci_FeedbackMessage_type_support_data_t;

#ifdef ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT
#ifdef __cplusplus
extern "C"
{
#endif
rosidl_message_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, action, Fibonacci_FeedbackMessage)();
rosidl_message_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, action, Fibonacci_FeedbackMessage)();
#ifdef __cplusplus
}
#endif

static _Fibonacci_FeedbackMessage_type_support_data_t _Fibonacci_FeedbackMessage_message_typesupport_data = {
  {
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, action, Fibonacci_FeedbackMessage),
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, action, Fibonacci_FeedbackMessage),
  }
};
#else
static _Fibonacci_FeedbackMessage_type_support_data_t _Fibonacci_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};
#endif // ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT

static const type_support_map_t _Fibonacci_FeedbackMessage_message_typesupport_map = {
  2,
  "test_msgs",
  &_Fibonacci_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_Fibonacci_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_Fibonacci_FeedbackMessage_message_typesupport_data.data[0],
};

static rosidl_message_type_support_t Fibonacci_FeedbackMessage_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Fibonacci_FeedbackMessage_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &test_msgs__action__Fibonacci_FeedbackMessage__get_type_hash,
  &test_msgs__action__Fibonacci_FeedbackMessage__get_type_description,
  &test_msgs__action__Fibonacci_FeedbackMessage__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace test_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, test_msgs, action, Fibonacci_FeedbackMessage)() {
  if (!::test_msgs::action::rosidl_typesupport_c::Fibonacci_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    ::test_msgs::action::rosidl_typesupport_c::Fibonacci_FeedbackMessage_message_type_support_handle.typesupport_identifier =
    rosidl_typesupport_c__typesupport_identifier;
  }

  return &::test_msgs::action::rosidl_typesupport_c::Fibonacci_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "action_msgs/msg/goal_status_array.h"
#include "action_msgs/srv/cancel_goal.h"
#include "test_msgs/action/fibonacci.h"
// already included above
// #include "test_msgs/action/detail/fibonacci__type_support.h"

static rosidl_action_type_support_t _test_msgs__action__Fibonacci__typesupport_c = {
  NULL, NULL, NULL, NULL, NULL,
  &test_msgs__action__Fibonacci__get_type_hash,
  &test_msgs__action__Fibonacci__get_type_description,
  &test_msgs__action__Fibonacci__get_type_description_sources,
};

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(
  rosidl_typesupport_c, test_msgs, action, Fibonacci)()
{
  // Thread-safe by always writing the same values to the static struct
  _test_msgs__action__Fibonacci__typesupport_c.goal_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, test_msgs, action, Fibonacci_SendGoal)();
  _test_msgs__action__Fibonacci__typesupport_c.result_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, test_msgs, action, Fibonacci_GetResult)();
  _test_msgs__action__Fibonacci__typesupport_c.cancel_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, srv, CancelGoal)();
  _test_msgs__action__Fibonacci__typesupport_c.feedback_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, test_msgs, action, Fibonacci_FeedbackMessage)();
  _test_msgs__action__Fibonacci__typesupport_c.status_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, msg, GoalStatusArray)();

  return &_test_msgs__action__Fibonacci__typesupport_c;
}

#ifdef __cplusplus
}
#endif
