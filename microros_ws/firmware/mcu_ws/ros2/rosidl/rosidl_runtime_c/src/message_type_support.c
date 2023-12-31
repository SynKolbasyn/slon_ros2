// Copyright 2016 Open Source Robotics Foundation, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "rosidl_runtime_c/message_type_support_struct.h"

#include <assert.h>
#include <stdio.h>
#include <string.h>

rosidl_message_type_support_t rosidl_get_zero_initialized_message_type_support_handle(void)
{
  static rosidl_message_type_support_t null_message_type_support = {
    .typesupport_identifier = NULL,
    .data = NULL,
    .func = NULL,
    .get_type_hash_func = NULL,
    .get_type_description_func = NULL,
    .get_type_description_sources_func = NULL
  };
  return null_message_type_support;
}

const rosidl_message_type_support_t * get_message_typesupport_handle(
  const rosidl_message_type_support_t * handle, const char * identifier)
{
  assert(handle);
  assert(handle->func);
  rosidl_message_typesupport_handle_function func =
    (rosidl_message_typesupport_handle_function)(handle->func);
  return func(handle, identifier);
}

const rosidl_message_type_support_t * get_message_typesupport_handle_function(
  const rosidl_message_type_support_t * handle, const char * identifier)
{
  assert(handle);
  assert(handle->typesupport_identifier);
  assert(identifier);
  if (strcmp(handle->typesupport_identifier, identifier) == 0) {
    return handle;
  }
  return 0;
}
