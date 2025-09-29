// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from custom_msgs:msg/PoseCtrl.idl
// generated code does not contain a copyright notice
#include "custom_msgs/msg/detail/pose_ctrl__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
custom_msgs__msg__PoseCtrl__init(custom_msgs__msg__PoseCtrl * msg)
{
  if (!msg) {
    return false;
  }
  // fl_x
  // fl_z
  // fr_x
  // fr_z
  // f_pitch
  // f_delta
  // bl_x
  // bl_z
  // br_x
  // br_z
  // b_pitch
  // b_delta
  return true;
}

void
custom_msgs__msg__PoseCtrl__fini(custom_msgs__msg__PoseCtrl * msg)
{
  if (!msg) {
    return;
  }
  // fl_x
  // fl_z
  // fr_x
  // fr_z
  // f_pitch
  // f_delta
  // bl_x
  // bl_z
  // br_x
  // br_z
  // b_pitch
  // b_delta
}

bool
custom_msgs__msg__PoseCtrl__are_equal(const custom_msgs__msg__PoseCtrl * lhs, const custom_msgs__msg__PoseCtrl * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // fl_x
  if (lhs->fl_x != rhs->fl_x) {
    return false;
  }
  // fl_z
  if (lhs->fl_z != rhs->fl_z) {
    return false;
  }
  // fr_x
  if (lhs->fr_x != rhs->fr_x) {
    return false;
  }
  // fr_z
  if (lhs->fr_z != rhs->fr_z) {
    return false;
  }
  // f_pitch
  if (lhs->f_pitch != rhs->f_pitch) {
    return false;
  }
  // f_delta
  if (lhs->f_delta != rhs->f_delta) {
    return false;
  }
  // bl_x
  if (lhs->bl_x != rhs->bl_x) {
    return false;
  }
  // bl_z
  if (lhs->bl_z != rhs->bl_z) {
    return false;
  }
  // br_x
  if (lhs->br_x != rhs->br_x) {
    return false;
  }
  // br_z
  if (lhs->br_z != rhs->br_z) {
    return false;
  }
  // b_pitch
  if (lhs->b_pitch != rhs->b_pitch) {
    return false;
  }
  // b_delta
  if (lhs->b_delta != rhs->b_delta) {
    return false;
  }
  return true;
}

bool
custom_msgs__msg__PoseCtrl__copy(
  const custom_msgs__msg__PoseCtrl * input,
  custom_msgs__msg__PoseCtrl * output)
{
  if (!input || !output) {
    return false;
  }
  // fl_x
  output->fl_x = input->fl_x;
  // fl_z
  output->fl_z = input->fl_z;
  // fr_x
  output->fr_x = input->fr_x;
  // fr_z
  output->fr_z = input->fr_z;
  // f_pitch
  output->f_pitch = input->f_pitch;
  // f_delta
  output->f_delta = input->f_delta;
  // bl_x
  output->bl_x = input->bl_x;
  // bl_z
  output->bl_z = input->bl_z;
  // br_x
  output->br_x = input->br_x;
  // br_z
  output->br_z = input->br_z;
  // b_pitch
  output->b_pitch = input->b_pitch;
  // b_delta
  output->b_delta = input->b_delta;
  return true;
}

custom_msgs__msg__PoseCtrl *
custom_msgs__msg__PoseCtrl__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_msgs__msg__PoseCtrl * msg = (custom_msgs__msg__PoseCtrl *)allocator.allocate(sizeof(custom_msgs__msg__PoseCtrl), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custom_msgs__msg__PoseCtrl));
  bool success = custom_msgs__msg__PoseCtrl__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
custom_msgs__msg__PoseCtrl__destroy(custom_msgs__msg__PoseCtrl * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    custom_msgs__msg__PoseCtrl__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
custom_msgs__msg__PoseCtrl__Sequence__init(custom_msgs__msg__PoseCtrl__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_msgs__msg__PoseCtrl * data = NULL;

  if (size) {
    data = (custom_msgs__msg__PoseCtrl *)allocator.zero_allocate(size, sizeof(custom_msgs__msg__PoseCtrl), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = custom_msgs__msg__PoseCtrl__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        custom_msgs__msg__PoseCtrl__fini(&data[i - 1]);
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
custom_msgs__msg__PoseCtrl__Sequence__fini(custom_msgs__msg__PoseCtrl__Sequence * array)
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
      custom_msgs__msg__PoseCtrl__fini(&array->data[i]);
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

custom_msgs__msg__PoseCtrl__Sequence *
custom_msgs__msg__PoseCtrl__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_msgs__msg__PoseCtrl__Sequence * array = (custom_msgs__msg__PoseCtrl__Sequence *)allocator.allocate(sizeof(custom_msgs__msg__PoseCtrl__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = custom_msgs__msg__PoseCtrl__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
custom_msgs__msg__PoseCtrl__Sequence__destroy(custom_msgs__msg__PoseCtrl__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    custom_msgs__msg__PoseCtrl__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
custom_msgs__msg__PoseCtrl__Sequence__are_equal(const custom_msgs__msg__PoseCtrl__Sequence * lhs, const custom_msgs__msg__PoseCtrl__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!custom_msgs__msg__PoseCtrl__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
custom_msgs__msg__PoseCtrl__Sequence__copy(
  const custom_msgs__msg__PoseCtrl__Sequence * input,
  custom_msgs__msg__PoseCtrl__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(custom_msgs__msg__PoseCtrl);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    custom_msgs__msg__PoseCtrl * data =
      (custom_msgs__msg__PoseCtrl *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!custom_msgs__msg__PoseCtrl__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          custom_msgs__msg__PoseCtrl__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!custom_msgs__msg__PoseCtrl__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
