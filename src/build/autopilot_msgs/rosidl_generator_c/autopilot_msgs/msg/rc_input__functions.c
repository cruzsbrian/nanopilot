// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autopilot_msgs:msg/RCInput.idl
// generated code does not contain a copyright notice
#include "autopilot_msgs/msg/rc_input__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time__functions.h"
// Member `channels`
#include "rosidl_generator_c/primitives_sequence_functions.h"

bool
autopilot_msgs__msg__RCInput__init(autopilot_msgs__msg__RCInput * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    autopilot_msgs__msg__RCInput__destroy(msg);
    return false;
  }
  // channels
  if (!rosidl_generator_c__float__Sequence__init(&msg->channels, 0)) {
    autopilot_msgs__msg__RCInput__destroy(msg);
    return false;
  }
  // signal
  return true;
}

void
autopilot_msgs__msg__RCInput__fini(autopilot_msgs__msg__RCInput * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // channels
  rosidl_generator_c__float__Sequence__fini(&msg->channels);
  // signal
}

autopilot_msgs__msg__RCInput *
autopilot_msgs__msg__RCInput__create()
{
  autopilot_msgs__msg__RCInput * msg = (autopilot_msgs__msg__RCInput *)malloc(sizeof(autopilot_msgs__msg__RCInput));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autopilot_msgs__msg__RCInput));
  bool success = autopilot_msgs__msg__RCInput__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
autopilot_msgs__msg__RCInput__destroy(autopilot_msgs__msg__RCInput * msg)
{
  if (msg) {
    autopilot_msgs__msg__RCInput__fini(msg);
  }
  free(msg);
}


bool
autopilot_msgs__msg__RCInput__Sequence__init(autopilot_msgs__msg__RCInput__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  autopilot_msgs__msg__RCInput * data = NULL;
  if (size) {
    data = (autopilot_msgs__msg__RCInput *)calloc(size, sizeof(autopilot_msgs__msg__RCInput));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autopilot_msgs__msg__RCInput__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autopilot_msgs__msg__RCInput__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
autopilot_msgs__msg__RCInput__Sequence__fini(autopilot_msgs__msg__RCInput__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      autopilot_msgs__msg__RCInput__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

autopilot_msgs__msg__RCInput__Sequence *
autopilot_msgs__msg__RCInput__Sequence__create(size_t size)
{
  autopilot_msgs__msg__RCInput__Sequence * array = (autopilot_msgs__msg__RCInput__Sequence *)malloc(sizeof(autopilot_msgs__msg__RCInput__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = autopilot_msgs__msg__RCInput__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
autopilot_msgs__msg__RCInput__Sequence__destroy(autopilot_msgs__msg__RCInput__Sequence * array)
{
  if (array) {
    autopilot_msgs__msg__RCInput__Sequence__fini(array);
  }
  free(array);
}
