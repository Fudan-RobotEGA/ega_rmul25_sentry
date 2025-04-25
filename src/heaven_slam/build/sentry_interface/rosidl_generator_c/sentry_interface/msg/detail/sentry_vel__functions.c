// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sentry_interface:msg/SentryVel.idl
// generated code does not contain a copyright notice
#include "sentry_interface/msg/detail/sentry_vel__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
sentry_interface__msg__SentryVel__init(sentry_interface__msg__SentryVel * msg)
{
  if (!msg) {
    return false;
  }
  // vel_x
  // vel_y
  // vel_z
  // angle_yaw
  return true;
}

void
sentry_interface__msg__SentryVel__fini(sentry_interface__msg__SentryVel * msg)
{
  if (!msg) {
    return;
  }
  // vel_x
  // vel_y
  // vel_z
  // angle_yaw
}

bool
sentry_interface__msg__SentryVel__are_equal(const sentry_interface__msg__SentryVel * lhs, const sentry_interface__msg__SentryVel * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // vel_x
  if (lhs->vel_x != rhs->vel_x) {
    return false;
  }
  // vel_y
  if (lhs->vel_y != rhs->vel_y) {
    return false;
  }
  // vel_z
  if (lhs->vel_z != rhs->vel_z) {
    return false;
  }
  // angle_yaw
  if (lhs->angle_yaw != rhs->angle_yaw) {
    return false;
  }
  return true;
}

bool
sentry_interface__msg__SentryVel__copy(
  const sentry_interface__msg__SentryVel * input,
  sentry_interface__msg__SentryVel * output)
{
  if (!input || !output) {
    return false;
  }
  // vel_x
  output->vel_x = input->vel_x;
  // vel_y
  output->vel_y = input->vel_y;
  // vel_z
  output->vel_z = input->vel_z;
  // angle_yaw
  output->angle_yaw = input->angle_yaw;
  return true;
}

sentry_interface__msg__SentryVel *
sentry_interface__msg__SentryVel__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sentry_interface__msg__SentryVel * msg = (sentry_interface__msg__SentryVel *)allocator.allocate(sizeof(sentry_interface__msg__SentryVel), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sentry_interface__msg__SentryVel));
  bool success = sentry_interface__msg__SentryVel__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sentry_interface__msg__SentryVel__destroy(sentry_interface__msg__SentryVel * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sentry_interface__msg__SentryVel__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sentry_interface__msg__SentryVel__Sequence__init(sentry_interface__msg__SentryVel__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sentry_interface__msg__SentryVel * data = NULL;

  if (size) {
    data = (sentry_interface__msg__SentryVel *)allocator.zero_allocate(size, sizeof(sentry_interface__msg__SentryVel), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sentry_interface__msg__SentryVel__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sentry_interface__msg__SentryVel__fini(&data[i - 1]);
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
sentry_interface__msg__SentryVel__Sequence__fini(sentry_interface__msg__SentryVel__Sequence * array)
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
      sentry_interface__msg__SentryVel__fini(&array->data[i]);
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

sentry_interface__msg__SentryVel__Sequence *
sentry_interface__msg__SentryVel__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sentry_interface__msg__SentryVel__Sequence * array = (sentry_interface__msg__SentryVel__Sequence *)allocator.allocate(sizeof(sentry_interface__msg__SentryVel__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sentry_interface__msg__SentryVel__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sentry_interface__msg__SentryVel__Sequence__destroy(sentry_interface__msg__SentryVel__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sentry_interface__msg__SentryVel__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sentry_interface__msg__SentryVel__Sequence__are_equal(const sentry_interface__msg__SentryVel__Sequence * lhs, const sentry_interface__msg__SentryVel__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sentry_interface__msg__SentryVel__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sentry_interface__msg__SentryVel__Sequence__copy(
  const sentry_interface__msg__SentryVel__Sequence * input,
  sentry_interface__msg__SentryVel__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sentry_interface__msg__SentryVel);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sentry_interface__msg__SentryVel * data =
      (sentry_interface__msg__SentryVel *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sentry_interface__msg__SentryVel__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sentry_interface__msg__SentryVel__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sentry_interface__msg__SentryVel__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
