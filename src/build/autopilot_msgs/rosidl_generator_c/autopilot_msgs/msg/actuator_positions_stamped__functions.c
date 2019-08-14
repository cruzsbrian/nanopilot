// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autopilot_msgs:msg/ActuatorPositionsStamped.idl
// generated code does not contain a copyright notice
#include "autopilot_msgs/msg/actuator_positions_stamped__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time__functions.h"
// Member `actuators`
#include "autopilot_msgs/msg/actuator_positions__functions.h"

bool
autopilot_msgs__msg__ActuatorPositionsStamped__init(autopilot_msgs__msg__ActuatorPositionsStamped * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    autopilot_msgs__msg__ActuatorPositionsStamped__destroy(msg);
    return false;
  }
  // actuators
  if (!autopilot_msgs__msg__ActuatorPositions__init(&msg->actuators)) {
    autopilot_msgs__msg__ActuatorPositionsStamped__destroy(msg);
    return false;
  }
  return true;
}

void
autopilot_msgs__msg__ActuatorPositionsStamped__fini(autopilot_msgs__msg__ActuatorPositionsStamped * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // actuators
  autopilot_msgs__msg__ActuatorPositions__fini(&msg->actuators);
}

autopilot_msgs__msg__ActuatorPositionsStamped *
autopilot_msgs__msg__ActuatorPositionsStamped__create()
{
  autopilot_msgs__msg__ActuatorPositionsStamped * msg = (autopilot_msgs__msg__ActuatorPositionsStamped *)malloc(sizeof(autopilot_msgs__msg__ActuatorPositionsStamped));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autopilot_msgs__msg__ActuatorPositionsStamped));
  bool success = autopilot_msgs__msg__ActuatorPositionsStamped__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
autopilot_msgs__msg__ActuatorPositionsStamped__destroy(autopilot_msgs__msg__ActuatorPositionsStamped * msg)
{
  if (msg) {
    autopilot_msgs__msg__ActuatorPositionsStamped__fini(msg);
  }
  free(msg);
}


bool
autopilot_msgs__msg__ActuatorPositionsStamped__Sequence__init(autopilot_msgs__msg__ActuatorPositionsStamped__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  autopilot_msgs__msg__ActuatorPositionsStamped * data = NULL;
  if (size) {
    data = (autopilot_msgs__msg__ActuatorPositionsStamped *)calloc(size, sizeof(autopilot_msgs__msg__ActuatorPositionsStamped));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autopilot_msgs__msg__ActuatorPositionsStamped__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autopilot_msgs__msg__ActuatorPositionsStamped__fini(&data[i - 1]);
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
autopilot_msgs__msg__ActuatorPositionsStamped__Sequence__fini(autopilot_msgs__msg__ActuatorPositionsStamped__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      autopilot_msgs__msg__ActuatorPositionsStamped__fini(&array->data[i]);
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

autopilot_msgs__msg__ActuatorPositionsStamped__Sequence *
autopilot_msgs__msg__ActuatorPositionsStamped__Sequence__create(size_t size)
{
  autopilot_msgs__msg__ActuatorPositionsStamped__Sequence * array = (autopilot_msgs__msg__ActuatorPositionsStamped__Sequence *)malloc(sizeof(autopilot_msgs__msg__ActuatorPositionsStamped__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = autopilot_msgs__msg__ActuatorPositionsStamped__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
autopilot_msgs__msg__ActuatorPositionsStamped__Sequence__destroy(autopilot_msgs__msg__ActuatorPositionsStamped__Sequence * array)
{
  if (array) {
    autopilot_msgs__msg__ActuatorPositionsStamped__Sequence__fini(array);
  }
  free(array);
}
