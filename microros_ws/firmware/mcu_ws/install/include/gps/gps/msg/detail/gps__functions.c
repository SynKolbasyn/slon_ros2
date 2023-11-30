// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from gps:msg/GPS.idl
// generated code does not contain a copyright notice
#include "gps/msg/detail/gps__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
gps__msg__GPS__init(gps__msg__GPS * msg)
{
  if (!msg) {
    return false;
  }
  // lat
  // lon
  return true;
}

void
gps__msg__GPS__fini(gps__msg__GPS * msg)
{
  if (!msg) {
    return;
  }
  // lat
  // lon
}

bool
gps__msg__GPS__are_equal(const gps__msg__GPS * lhs, const gps__msg__GPS * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // lat
  if (lhs->lat != rhs->lat) {
    return false;
  }
  // lon
  if (lhs->lon != rhs->lon) {
    return false;
  }
  return true;
}

bool
gps__msg__GPS__copy(
  const gps__msg__GPS * input,
  gps__msg__GPS * output)
{
  if (!input || !output) {
    return false;
  }
  // lat
  output->lat = input->lat;
  // lon
  output->lon = input->lon;
  return true;
}

gps__msg__GPS *
gps__msg__GPS__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gps__msg__GPS * msg = (gps__msg__GPS *)allocator.allocate(sizeof(gps__msg__GPS), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gps__msg__GPS));
  bool success = gps__msg__GPS__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
gps__msg__GPS__destroy(gps__msg__GPS * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    gps__msg__GPS__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
gps__msg__GPS__Sequence__init(gps__msg__GPS__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gps__msg__GPS * data = NULL;

  if (size) {
    data = (gps__msg__GPS *)allocator.zero_allocate(size, sizeof(gps__msg__GPS), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gps__msg__GPS__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gps__msg__GPS__fini(&data[i - 1]);
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
gps__msg__GPS__Sequence__fini(gps__msg__GPS__Sequence * array)
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
      gps__msg__GPS__fini(&array->data[i]);
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

gps__msg__GPS__Sequence *
gps__msg__GPS__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gps__msg__GPS__Sequence * array = (gps__msg__GPS__Sequence *)allocator.allocate(sizeof(gps__msg__GPS__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = gps__msg__GPS__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
gps__msg__GPS__Sequence__destroy(gps__msg__GPS__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    gps__msg__GPS__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
gps__msg__GPS__Sequence__are_equal(const gps__msg__GPS__Sequence * lhs, const gps__msg__GPS__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!gps__msg__GPS__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
gps__msg__GPS__Sequence__copy(
  const gps__msg__GPS__Sequence * input,
  gps__msg__GPS__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(gps__msg__GPS);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    gps__msg__GPS * data =
      (gps__msg__GPS *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!gps__msg__GPS__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          gps__msg__GPS__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!gps__msg__GPS__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
