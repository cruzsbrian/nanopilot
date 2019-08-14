// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autopilot_msgs:msg/ActuatorPositions.idl
// generated code does not contain a copyright notice
#include "autopilot_msgs/msg/actuator_positions__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `actuators`
#include "rosidl_generator_c/primitives_sequence_functions.h"

bool
autopilot_msgs__msg__ActuatorPositions__init(autopilot_msgs__msg__ActuatorPositions * msg)
{
  if (!msg) {
    return false;
  }
  // actuators
  if (!rosidl_generator_c__float__Sequence__init(&msg->actuators, 0)) {
    autopilot_msgs__msg__ActuatorPositions__destroy(msg);
    return false;
  }
  return true;
}

void
autopilot_msgs__msg__ActuatorPositions__fini(autopilot_msgs__msg__ActuatorPositions * msg)
{
  if (!msg) {
    return;
  }
  // actuators
  rosidl_generator_c__float__Sequence__fini(&msg->actuators);
}

autopilot_msgs__msg__ActuatorPositions *
autopilot_msgs__msg__ActuatorPositions__create()
{
  autopilot_msgs__msg__ActuatorPositions * msg = (autopilot_msgs__msg__ActuatorPositions *)malloc(sizeof(autopilot_msgs__msg__ActuatorPositions));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autopilot_msgs__msg__ActuatorPositions));
  bool success = autopilot_msgs__msg__ActuatorPositions__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
autopilot_msgs__msg__ActuatorPositions__destroy(autopilot_msgs__msg__ActuatorPositions * msg)
{
  if (msg) {
    autopilot_msgs__msg__ActuatorPositions__fini(msg);
  }
  free(msg);
}


bool
autopilot_msgs__msg__ActuatorPositions__Sequence__init(autopilot_msgs__msg__ActuatorPositions__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  autopilot_msgs__msg__ActuatorPositions * data = NULL;
  if (size) {
    data = (autopilot_msgs__msg__ActuatorPositions *)calloc(size, sizeof(autopilot_msgs__msg__ActuatorPositions));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autopilot_msgs__msg__ActuatorPositions__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autopilot_msgs__msg__ActuatorPositions__fini(&data[i - 1]);
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
autopilot_msgs__msg__ActuatorPositions__Sequence__fini(autopilot_msgs__msg__ActuatorPositions__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      autopilot_msgs__msg__ActuatorPositions__fini(&array->data[i]);
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

autopilot_msgs__msg__ActuatorPositions__Sequence *
autopilot_msgs__msg__ActuatorPositions__Sequence__create(size_t size)
{
  autopilot_msgs__msg__ActuatorPositions__Sequence * array = (autopilot_msgs__msg__ActuatorPositions__Sequence *)malloc(sizeof(autopilot_msgs__msg__ActuatorPositions__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = autopilot_msgs__msg__ActuatorPositions__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
autopilot_msgs__msg__ActuatorPositions__Sequence__destroy(autopilot_msgs__msg__ActuatorPositions__Sequence * array)
{
  if (array) {
    autopilot_msgs__msg__ActuatorPositions__Sequence__fini(array);
  }
  free(array);
}
