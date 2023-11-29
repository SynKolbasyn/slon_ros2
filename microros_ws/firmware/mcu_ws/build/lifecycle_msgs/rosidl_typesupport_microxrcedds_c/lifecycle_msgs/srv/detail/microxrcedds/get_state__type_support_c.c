// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from lifecycle_msgs:srv/GetState.idl
// generated code does not contain a copyright notice
#include "lifecycle_msgs/srv/detail/get_state__rosidl_typesupport_microxrcedds_c.h"
#include "lifecycle_msgs/srv/detail/get_state__functions.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "lifecycle_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "lifecycle_msgs/srv/detail/get_state__struct.h"
#include "lifecycle_msgs/srv/detail/get_state__functions.h"

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


typedef lifecycle_msgs__srv__GetState_Request _GetState_Request__ros_msg_type;

static bool _GetState_Request__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _GetState_Request__ros_msg_type * ros_message = (_GetState_Request__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: structure_needs_at_least_one_member
  rv = ucdr_serialize_uint8_t(cdr, ros_message->structure_needs_at_least_one_member);

  return rv;
}

static bool _GetState_Request__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _GetState_Request__ros_msg_type * ros_message = (_GetState_Request__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: structure_needs_at_least_one_member
  rv = ucdr_deserialize_uint8_t(cdr, &ros_message->structure_needs_at_least_one_member);
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_lifecycle_msgs
size_t get_serialized_size_lifecycle_msgs__srv__GetState_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _GetState_Request__ros_msg_type * ros_message = (const _GetState_Request__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: structure_needs_at_least_one_member
  {
    const size_t item_size = sizeof(ros_message->structure_needs_at_least_one_member);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GetState_Request__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_lifecycle_msgs__srv__GetState_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_lifecycle_msgs
size_t max_serialized_size_lifecycle_msgs__srv__GetState_Request(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: structure_needs_at_least_one_member
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + sizeof(uint8_t);

  return current_alignment - initial_alignment;
}

static size_t _GetState_Request__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_lifecycle_msgs__srv__GetState_Request(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_GetState_Request = {
  "lifecycle_msgs::srv",
  "GetState_Request",
  _GetState_Request__cdr_serialize,
  _GetState_Request__cdr_deserialize,
  _GetState_Request__get_serialized_size,
  get_serialized_size_lifecycle_msgs__srv__GetState_Request,
  _GetState_Request__max_serialized_size
};

static rosidl_message_type_support_t _GetState_Request__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_GetState_Request,
  get_message_typesupport_handle_function,

  &lifecycle_msgs__srv__GetState_Request__get_type_hash,
  &lifecycle_msgs__srv__GetState_Request__get_type_description,
  &lifecycle_msgs__srv__GetState_Request__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, lifecycle_msgs, srv, GetState_Request)() {
  return &_GetState_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <stdint.h>
// already included above
// #include <stdio.h>
// already included above
// #include <string.h>
// already included above
// #include "rosidl_typesupport_microxrcedds_c/identifier.h"
// already included above
// #include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
// already included above
// #include "lifecycle_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
// already included above
// #include "lifecycle_msgs/srv/detail/get_state__struct.h"
// already included above
// #include "lifecycle_msgs/srv/detail/get_state__functions.h"

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

#include "lifecycle_msgs/msg/detail/state__functions.h"  // current_state

// forward declare type support functions
size_t get_serialized_size_lifecycle_msgs__msg__State(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_lifecycle_msgs__msg__State(
  bool * full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, lifecycle_msgs, msg, State)();


typedef lifecycle_msgs__srv__GetState_Response _GetState_Response__ros_msg_type;

static bool _GetState_Response__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _GetState_Response__ros_msg_type * ros_message = (_GetState_Response__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: current_state
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, lifecycle_msgs, msg, State
      )()->data))->cdr_serialize(&ros_message->current_state, cdr);

  return rv;
}

static bool _GetState_Response__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _GetState_Response__ros_msg_type * ros_message = (_GetState_Response__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: current_state
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, lifecycle_msgs, msg, State
      )()->data))->cdr_deserialize(cdr, &ros_message->current_state);
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_lifecycle_msgs
size_t get_serialized_size_lifecycle_msgs__srv__GetState_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _GetState_Response__ros_msg_type * ros_message = (const _GetState_Response__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: current_state
  current_alignment +=
    get_serialized_size_lifecycle_msgs__msg__State(&ros_message->current_state, current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _GetState_Response__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_lifecycle_msgs__srv__GetState_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_lifecycle_msgs
size_t max_serialized_size_lifecycle_msgs__srv__GetState_Response(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: current_state
  current_alignment +=
    max_serialized_size_lifecycle_msgs__msg__State(full_bounded, current_alignment);

  return current_alignment - initial_alignment;
}

static size_t _GetState_Response__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_lifecycle_msgs__srv__GetState_Response(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_GetState_Response = {
  "lifecycle_msgs::srv",
  "GetState_Response",
  _GetState_Response__cdr_serialize,
  _GetState_Response__cdr_deserialize,
  _GetState_Response__get_serialized_size,
  get_serialized_size_lifecycle_msgs__srv__GetState_Response,
  _GetState_Response__max_serialized_size
};

static rosidl_message_type_support_t _GetState_Response__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_GetState_Response,
  get_message_typesupport_handle_function,

  &lifecycle_msgs__srv__GetState_Response__get_type_hash,
  &lifecycle_msgs__srv__GetState_Response__get_type_description,
  &lifecycle_msgs__srv__GetState_Response__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, lifecycle_msgs, srv, GetState_Response)() {
  return &_GetState_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <stdint.h>
// already included above
// #include <stdio.h>
// already included above
// #include <string.h>
// already included above
// #include "rosidl_typesupport_microxrcedds_c/identifier.h"
// already included above
// #include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
// already included above
// #include "lifecycle_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
// already included above
// #include "lifecycle_msgs/srv/detail/get_state__struct.h"
// already included above
// #include "lifecycle_msgs/srv/detail/get_state__functions.h"

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

#include "service_msgs/msg/detail/service_event_info__functions.h"  // info

// forward declare type support functions
size_t get_serialized_size_lifecycle_msgs__srv__GetState_Request(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_lifecycle_msgs__srv__GetState_Request(
  bool * full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, lifecycle_msgs, srv, GetState_Request)();
size_t get_serialized_size_lifecycle_msgs__srv__GetState_Response(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_lifecycle_msgs__srv__GetState_Response(
  bool * full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, lifecycle_msgs, srv, GetState_Response)();
ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_lifecycle_msgs
size_t get_serialized_size_service_msgs__msg__ServiceEventInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_lifecycle_msgs
size_t max_serialized_size_service_msgs__msg__ServiceEventInfo(
  bool * full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_lifecycle_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, service_msgs, msg, ServiceEventInfo)();


typedef lifecycle_msgs__srv__GetState_Event _GetState_Event__ros_msg_type;

static bool _GetState_Event__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _GetState_Event__ros_msg_type * ros_message = (_GetState_Event__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: info
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, service_msgs, msg, ServiceEventInfo
      )()->data))->cdr_serialize(&ros_message->info, cdr);
  // Member: request
  {
    const size_t size = ros_message->request.size;
    rv = ucdr_serialize_uint32_t(cdr, size);

    if(rv == true){
      for(size_t i = 0; i < size; i++){
        rv = ((const message_type_support_callbacks_t *)(
          ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, lifecycle_msgs, srv, GetState_Request
          )()->data))->cdr_serialize(&ros_message->request.data[i], cdr);
        if(rv == false){
          break;
        }
      }
    }
  }
  // Member: response
  {
    const size_t size = ros_message->response.size;
    rv = ucdr_serialize_uint32_t(cdr, size);

    if(rv == true){
      for(size_t i = 0; i < size; i++){
        rv = ((const message_type_support_callbacks_t *)(
          ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, lifecycle_msgs, srv, GetState_Response
          )()->data))->cdr_serialize(&ros_message->response.data[i], cdr);
        if(rv == false){
          break;
        }
      }
    }
  }

  return rv;
}

static bool _GetState_Event__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _GetState_Event__ros_msg_type * ros_message = (_GetState_Event__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: info
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, service_msgs, msg, ServiceEventInfo
      )()->data))->cdr_deserialize(cdr, &ros_message->info);
  // Field name: request
  {
    uint32_t size;
    rv = ucdr_deserialize_uint32_t(cdr, &size);

    if(size > ros_message->request.capacity){
      return 0;
    }

    ros_message->request.size = size;
    for(size_t i = 0; i < size; i++){
      rv = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, lifecycle_msgs, srv, GetState_Request
        )()->data))->cdr_deserialize(cdr, &ros_message->request.data[i]);
      if(rv == false){
        break;
      }
    }
  }
  // Field name: response
  {
    uint32_t size;
    rv = ucdr_deserialize_uint32_t(cdr, &size);

    if(size > ros_message->response.capacity){
      return 0;
    }

    ros_message->response.size = size;
    for(size_t i = 0; i < size; i++){
      rv = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, lifecycle_msgs, srv, GetState_Response
        )()->data))->cdr_deserialize(cdr, &ros_message->response.data[i]);
      if(rv == false){
        break;
      }
    }
  }
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_lifecycle_msgs
size_t get_serialized_size_lifecycle_msgs__srv__GetState_Event(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _GetState_Event__ros_msg_type * ros_message = (const _GetState_Event__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: info
  current_alignment +=
    get_serialized_size_service_msgs__msg__ServiceEventInfo(&ros_message->info, current_alignment);
  // Member: request
  {
    const size_t sequence_size = ros_message->request.size;

    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    for(size_t i = 0; i < sequence_size; i++){
      size_t element_size = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, lifecycle_msgs, srv, GetState_Request
        )()->data))->get_serialized_size_with_initial_alignment(&ros_message->request.data[i], current_alignment);
      uint8_t alignment_size = (element_size < MICROXRCEDDS_PADDING) ? element_size : MICROXRCEDDS_PADDING;
      current_alignment += ucdr_alignment(current_alignment, alignment_size) + element_size;
    }
  }
  // Member: response
  {
    const size_t sequence_size = ros_message->response.size;

    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    for(size_t i = 0; i < sequence_size; i++){
      size_t element_size = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, lifecycle_msgs, srv, GetState_Response
        )()->data))->get_serialized_size_with_initial_alignment(&ros_message->response.data[i], current_alignment);
      uint8_t alignment_size = (element_size < MICROXRCEDDS_PADDING) ? element_size : MICROXRCEDDS_PADDING;
      current_alignment += ucdr_alignment(current_alignment, alignment_size) + element_size;
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GetState_Event__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_lifecycle_msgs__srv__GetState_Event(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_lifecycle_msgs
size_t max_serialized_size_lifecycle_msgs__srv__GetState_Event(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: info
  current_alignment +=
    max_serialized_size_service_msgs__msg__ServiceEventInfo(full_bounded, current_alignment);
  // Member: request
  {
    *full_bounded = false;
  }
  // Member: response
  {
    *full_bounded = false;
  }

  return current_alignment - initial_alignment;
}

static size_t _GetState_Event__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_lifecycle_msgs__srv__GetState_Event(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_GetState_Event = {
  "lifecycle_msgs::srv",
  "GetState_Event",
  _GetState_Event__cdr_serialize,
  _GetState_Event__cdr_deserialize,
  _GetState_Event__get_serialized_size,
  get_serialized_size_lifecycle_msgs__srv__GetState_Event,
  _GetState_Event__max_serialized_size
};

static rosidl_message_type_support_t _GetState_Event__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_GetState_Event,
  get_message_typesupport_handle_function,

  &lifecycle_msgs__srv__GetState_Event__get_type_hash,
  &lifecycle_msgs__srv__GetState_Event__get_type_description,
  &lifecycle_msgs__srv__GetState_Event__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, lifecycle_msgs, srv, GetState_Event)() {
  return &_GetState_Event__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_microxrcedds_c/service_type_support.h"
// already included above
// #include "rosidl_typesupport_microxrcedds_c/identifier.h"
// already included above
// #include "lifecycle_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "lifecycle_msgs/srv/get_state.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t GetState__callbacks = {
  "lifecycle_msgs::srv",
  "GetState",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, lifecycle_msgs, srv, GetState_Request),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, lifecycle_msgs, srv, GetState_Response),
};

static rosidl_service_type_support_t GetState__handle = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &GetState__callbacks,
  get_service_typesupport_handle_function,

  &_GetState_Request__type_support,
  &_GetState_Response__type_support,
  &_GetState_Event__type_support,

  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    lifecycle_msgs,
    srv,
    GetState
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    lifecycle_msgs,
    srv,
    GetState
  ),

  &lifecycle_msgs__srv__GetState__get_type_hash,
  &lifecycle_msgs__srv__GetState__get_type_description,
  &lifecycle_msgs__srv__GetState__get_type_description_sources,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, lifecycle_msgs, srv, GetState)() {
  return &GetState__handle;
}

#if defined(__cplusplus)
}
#endif
