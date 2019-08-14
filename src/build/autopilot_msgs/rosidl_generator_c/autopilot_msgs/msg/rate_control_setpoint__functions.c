// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autopilot_msgs:msg/RateControlSetpoint.idl
// generated code does not contain a copyright notice
#include "autopilot_msgs/msg/rate_control_setpoint__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header__functions.h"
// Member `rate_control_setpoint`
// Member `feed_forward_torque`
// Member `force`
#include "geometry_msgs/msg/vector3__functions.h"
// Member `actuators`
#include "autopilot_msgs/msg/actuator_positions__functions.h"

bool
autopilot_msgs__msg__RateControlSetpoint__init(autopilot_msgs__msg__RateControlSetpoint * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    autopilot_msgs__msg__RateControlSetpoint__destroy(msg);
    return false;
  }
  // rate_control_setpoint
  if (!geometry_msgs__msg__Vector3__init(&msg->rate_control_setpoint)) {
    autopilot_msgs__msg__RateControlSetpoint__destroy(msg);
    return false;
  }
  // feed_forward_torque
  if (!geometry_msgs__msg__Vector3__init(&msg->feed_forward_torque)) {
    autopilot_msgs__msg__RateControlSetpoint__destroy(msg);
    return false;
  }
  // force
  if (!geometry_msgs__msg__Vector3__init(&msg->force)) {
    autopilot_msgs__msg__RateControlSetpoint__destroy(msg);
    return false;
  }
  // actuators
  if (!autopilot_msgs__msg__ActuatorPositions__init(&msg->actuators)) {
    autopilot_msgs__msg__RateControlSetpoint__destroy(msg);
    return false;
  }
  return true;
}

void
autopilot_msgs__msg__RateControlSetpoint__fini(autopilot_msgs__msg__RateControlSetpoint * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // rate_control_setpoint
  geometry_msgs__msg__Vector3__fini(&msg->rate_control_setpoint);
  // feed_forward_torque
  geometry_msgs__msg__Vector3__fini(&msg->feed_forward_torque);
  // force
  geometry_msgs__msg__Vector3__fini(&msg->force);
  // actuators
  autopilot_msgs__msg__ActuatorPositions__fini(&msg->actuators);
}

autopilot_msgs__msg__RateControlSetpoint *
autopilot_msgs__msg__RateControlSetpoint__create()
{
  autopilot_msgs__msg__RateControlSetpoint * msg = (autopilot_msgs__msg__RateControlSetpoint *)malloc(sizeof(autopilot_msgs__msg__RateControlSetpoint));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autopilot_msgs__msg__RateControlSetpoint));
  bool success = autopilot_msgs__msg__RateControlSetpoint__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
autopilot_msgs__msg__RateControlSetpoint__destroy(autopilot_msgs__msg__RateControlSetpoint * msg)
{
  if (msg) {
    autopilot_msgs__msg__RateControlSetpoint__fini(msg);
  }
  free(msg);
}


bool
autopilot_msgs__msg__RateControlSetpoint__Sequence__init(autopilot_msgs__msg__RateControlSetpoint__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  autopilot_msgs__msg__RateControlSetpoint * data = NULL;
  if (size) {
    data = (autopilot_msgs__msg__RateControlSetpoint *)calloc(size, sizeof(autopilot_msgs__msg__RateControlSetpoint));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autopilot_msgs__msg__RateControlSetpoint__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autopilot_msgs__msg__RateControlSetpoint__fini(&data[i - 1]);
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
autopilot_msgs__msg__RateControlSetpoint__Sequence__fini(autopilot_msgs__msg__RateControlSetpoint__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      autopilot_msgs__msg__RateControlSetpoint__fini(&array->data[i]);
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

autopilot_msgs__msg__RateControlSetpoint__Sequence *
autopilot_msgs__msg__RateControlSetpoint__Sequence__create(size_t size)
{
  autopilot_msgs__msg__RateControlSetpoint__Sequence * array = (autopilot_msgs__msg__RateControlSetpoint__Sequence *)malloc(sizeof(autopilot_msgs__msg__RateControlSetpoint__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = autopilot_msgs__msg__RateControlSetpoint__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
autopilot_msgs__msg__RateControlSetpoint__Sequence__destroy(autopilot_msgs__msg__RateControlSetpoint__Sequence * array)
{
  if (array) {
    autopilot_msgs__msg__RateControlSetpoint__Sequence__fini(array);
  }
  free(array);
}
