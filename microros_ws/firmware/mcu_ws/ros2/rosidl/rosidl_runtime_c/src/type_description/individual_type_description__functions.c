// DO NOT EDIT MANUALLY - this copied file managed by copy_type_description_generated_sources.bash
// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from type_description_interfaces:msg/IndividualTypeDescription.idl
// generated code does not contain a copyright notice
#include "rosidl_runtime_c/type_description/individual_type_description__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `type_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `fields`
#include "rosidl_runtime_c/type_description/field__functions.h"

bool
rosidl_runtime_c__type_description__IndividualTypeDescription__init(rosidl_runtime_c__type_description__IndividualTypeDescription * msg)
{
  if (!msg) {
    return false;
  }
  // type_name
  if (!rosidl_runtime_c__String__init(&msg->type_name)) {
    rosidl_runtime_c__type_description__IndividualTypeDescription__fini(msg);
    return false;
  }
  // fields
  if (!rosidl_runtime_c__type_description__Field__Sequence__init(&msg->fields, 0)) {
    rosidl_runtime_c__type_description__IndividualTypeDescription__fini(msg);
    return false;
  }
  return true;
}

void
rosidl_runtime_c__type_description__IndividualTypeDescription__fini(rosidl_runtime_c__type_description__IndividualTypeDescription * msg)
{
  if (!msg) {
    return;
  }
  // type_name
  rosidl_runtime_c__String__fini(&msg->type_name);
  // fields
  rosidl_runtime_c__type_description__Field__Sequence__fini(&msg->fields);
}

bool
rosidl_runtime_c__type_description__IndividualTypeDescription__are_equal(const rosidl_runtime_c__type_description__IndividualTypeDescription * lhs, const rosidl_runtime_c__type_description__IndividualTypeDescription * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // type_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->type_name), &(rhs->type_name)))
  {
    return false;
  }
  // fields
  if (!rosidl_runtime_c__type_description__Field__Sequence__are_equal(
      &(lhs->fields), &(rhs->fields)))
  {
    return false;
  }
  return true;
}

bool
rosidl_runtime_c__type_description__IndividualTypeDescription__copy(
  const rosidl_runtime_c__type_description__IndividualTypeDescription * input,
  rosidl_runtime_c__type_description__IndividualTypeDescription * output)
{
  if (!input || !output) {
    return false;
  }
  // type_name
  if (!rosidl_runtime_c__String__copy(
      &(input->type_name), &(output->type_name)))
  {
    return false;
  }
  // fields
  if (!rosidl_runtime_c__type_description__Field__Sequence__copy(
      &(input->fields), &(output->fields)))
  {
    return false;
  }
  return true;
}

rosidl_runtime_c__type_description__IndividualTypeDescription *
rosidl_runtime_c__type_description__IndividualTypeDescription__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rosidl_runtime_c__type_description__IndividualTypeDescription * msg = (rosidl_runtime_c__type_description__IndividualTypeDescription *)allocator.allocate(sizeof(rosidl_runtime_c__type_description__IndividualTypeDescription), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rosidl_runtime_c__type_description__IndividualTypeDescription));
  bool success = rosidl_runtime_c__type_description__IndividualTypeDescription__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rosidl_runtime_c__type_description__IndividualTypeDescription__destroy(rosidl_runtime_c__type_description__IndividualTypeDescription * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rosidl_runtime_c__type_description__IndividualTypeDescription__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rosidl_runtime_c__type_description__IndividualTypeDescription__Sequence__init(rosidl_runtime_c__type_description__IndividualTypeDescription__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rosidl_runtime_c__type_description__IndividualTypeDescription * data = NULL;

  if (size) {
    data = (rosidl_runtime_c__type_description__IndividualTypeDescription *)allocator.zero_allocate(size, sizeof(rosidl_runtime_c__type_description__IndividualTypeDescription), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rosidl_runtime_c__type_description__IndividualTypeDescription__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rosidl_runtime_c__type_description__IndividualTypeDescription__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
rosidl_runtime_c__type_description__IndividualTypeDescription__Sequence__fini(rosidl_runtime_c__type_description__IndividualTypeDescription__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rosidl_runtime_c__type_description__IndividualTypeDescription__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

rosidl_runtime_c__type_description__IndividualTypeDescription__Sequence *
rosidl_runtime_c__type_description__IndividualTypeDescription__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rosidl_runtime_c__type_description__IndividualTypeDescription__Sequence * array = (rosidl_runtime_c__type_description__IndividualTypeDescription__Sequence *)allocator.allocate(sizeof(rosidl_runtime_c__type_description__IndividualTypeDescription__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rosidl_runtime_c__type_description__IndividualTypeDescription__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rosidl_runtime_c__type_description__IndividualTypeDescription__Sequence__destroy(rosidl_runtime_c__type_description__IndividualTypeDescription__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rosidl_runtime_c__type_description__IndividualTypeDescription__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rosidl_runtime_c__type_description__IndividualTypeDescription__Sequence__are_equal(const rosidl_runtime_c__type_description__IndividualTypeDescription__Sequence * lhs, const rosidl_runtime_c__type_description__IndividualTypeDescription__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rosidl_runtime_c__type_description__IndividualTypeDescription__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rosidl_runtime_c__type_description__IndividualTypeDescription__Sequence__copy(
  const rosidl_runtime_c__type_description__IndividualTypeDescription__Sequence * input,
  rosidl_runtime_c__type_description__IndividualTypeDescription__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rosidl_runtime_c__type_description__IndividualTypeDescription);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rosidl_runtime_c__type_description__IndividualTypeDescription * data =
      (rosidl_runtime_c__type_description__IndividualTypeDescription *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rosidl_runtime_c__type_description__IndividualTypeDescription__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rosidl_runtime_c__type_description__IndividualTypeDescription__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rosidl_runtime_c__type_description__IndividualTypeDescription__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
