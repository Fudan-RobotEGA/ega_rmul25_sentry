// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sentry_interface:msg/SentryStatus.idl
// generated code does not contain a copyright notice
#include "sentry_interface/msg/detail/sentry_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
sentry_interface__msg__SentryStatus__init(sentry_interface__msg__SentryStatus * msg)
{
  if (!msg) {
    return false;
  }
  // game_stage
  // gain_area_detected
  // gain_area_status
  // supply_area_status
  // stage_time_remain
  // current_hp
  // rotate_flag
  return true;
}

void
sentry_interface__msg__SentryStatus__fini(sentry_interface__msg__SentryStatus * msg)
{
  if (!msg) {
    return;
  }
  // game_stage
  // gain_area_detected
  // gain_area_status
  // supply_area_status
  // stage_time_remain
  // current_hp
  // rotate_flag
}

bool
sentry_interface__msg__SentryStatus__are_equal(const sentry_interface__msg__SentryStatus * lhs, const sentry_interface__msg__SentryStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // game_stage
  if (lhs->game_stage != rhs->game_stage) {
    return false;
  }
  // gain_area_detected
  if (lhs->gain_area_detected != rhs->gain_area_detected) {
    return false;
  }
  // gain_area_status
  if (lhs->gain_area_status != rhs->gain_area_status) {
    return false;
  }
  // supply_area_status
  if (lhs->supply_area_status != rhs->supply_area_status) {
    return false;
  }
  // stage_time_remain
  if (lhs->stage_time_remain != rhs->stage_time_remain) {
    return false;
  }
  // current_hp
  if (lhs->current_hp != rhs->current_hp) {
    return false;
  }
  // rotate_flag
  if (lhs->rotate_flag != rhs->rotate_flag) {
    return false;
  }
  return true;
}

bool
sentry_interface__msg__SentryStatus__copy(
  const sentry_interface__msg__SentryStatus * input,
  sentry_interface__msg__SentryStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // game_stage
  output->game_stage = input->game_stage;
  // gain_area_detected
  output->gain_area_detected = input->gain_area_detected;
  // gain_area_status
  output->gain_area_status = input->gain_area_status;
  // supply_area_status
  output->supply_area_status = input->supply_area_status;
  // stage_time_remain
  output->stage_time_remain = input->stage_time_remain;
  // current_hp
  output->current_hp = input->current_hp;
  // rotate_flag
  output->rotate_flag = input->rotate_flag;
  return true;
}

sentry_interface__msg__SentryStatus *
sentry_interface__msg__SentryStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sentry_interface__msg__SentryStatus * msg = (sentry_interface__msg__SentryStatus *)allocator.allocate(sizeof(sentry_interface__msg__SentryStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sentry_interface__msg__SentryStatus));
  bool success = sentry_interface__msg__SentryStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sentry_interface__msg__SentryStatus__destroy(sentry_interface__msg__SentryStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sentry_interface__msg__SentryStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sentry_interface__msg__SentryStatus__Sequence__init(sentry_interface__msg__SentryStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sentry_interface__msg__SentryStatus * data = NULL;

  if (size) {
    data = (sentry_interface__msg__SentryStatus *)allocator.zero_allocate(size, sizeof(sentry_interface__msg__SentryStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sentry_interface__msg__SentryStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sentry_interface__msg__SentryStatus__fini(&data[i - 1]);
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
sentry_interface__msg__SentryStatus__Sequence__fini(sentry_interface__msg__SentryStatus__Sequence * array)
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
      sentry_interface__msg__SentryStatus__fini(&array->data[i]);
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

sentry_interface__msg__SentryStatus__Sequence *
sentry_interface__msg__SentryStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sentry_interface__msg__SentryStatus__Sequence * array = (sentry_interface__msg__SentryStatus__Sequence *)allocator.allocate(sizeof(sentry_interface__msg__SentryStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sentry_interface__msg__SentryStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sentry_interface__msg__SentryStatus__Sequence__destroy(sentry_interface__msg__SentryStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sentry_interface__msg__SentryStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sentry_interface__msg__SentryStatus__Sequence__are_equal(const sentry_interface__msg__SentryStatus__Sequence * lhs, const sentry_interface__msg__SentryStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sentry_interface__msg__SentryStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sentry_interface__msg__SentryStatus__Sequence__copy(
  const sentry_interface__msg__SentryStatus__Sequence * input,
  sentry_interface__msg__SentryStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sentry_interface__msg__SentryStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sentry_interface__msg__SentryStatus * data =
      (sentry_interface__msg__SentryStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sentry_interface__msg__SentryStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sentry_interface__msg__SentryStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sentry_interface__msg__SentryStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
