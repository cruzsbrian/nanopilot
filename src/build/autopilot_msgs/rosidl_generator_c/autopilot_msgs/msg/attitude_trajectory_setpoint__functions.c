// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autopilot_msgs:msg/AttitudeTrajectorySetpoint.idl
// generated code does not contain a copyright notice
#include "autopilot_msgs/msg/attitude_trajectory_setpoint__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header__functions.h"
// Member `orientation`
#include "geometry_msgs/msg/quaternion__functions.h"
// Member `angular_rate`
// Member `angular_acceleration`
// Member `force`
#include "geometry_msgs/msg/vector3__functions.h"

bool
autopilot_msgs__msg__AttitudeTrajectorySetpoint__init(autopilot_msgs__msg__AttitudeTrajectorySetpoint * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    autopilot_msgs__msg__AttitudeTrajectorySetpoint__destroy(msg);
    return false;
  }
  // orientation
  if (!geometry_msgs__msg__Quaternion__init(&msg->orientation)) {
    autopilot_msgs__msg__AttitudeTrajectorySetpoint__destroy(msg);
    return false;
  }
  // angular_rate
  if (!geometry_msgs__msg__Vector3__init(&msg->angular_rate)) {
    autopilot_msgs__msg__AttitudeTrajectorySetpoint__destroy(msg);
    return false;
  }
  // angular_acceleration
  if (!geometry_msgs__msg__Vector3__init(&msg->angular_acceleration)) {
    autopilot_msgs__msg__AttitudeTrajectorySetpoint__destroy(msg);
    return false;
  }
  // force
  if (!geometry_msgs__msg__Vector3__init(&msg->force)) {
    autopilot_msgs__msg__AttitudeTrajectorySetpoint__destroy(msg);
    return false;
  }
  return true;
}

void
autopilot_msgs__msg__AttitudeTrajectorySetpoint__fini(autopilot_msgs__msg__AttitudeTrajectorySetpoint * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // orientation
  geometry_msgs__msg__Quaternion__fini(&msg->orientation);
  // angular_rate
  geometry_msgs__msg__Vector3__fini(&msg->angular_rate);
  // angular_acceleration
  geometry_msgs__msg__Vector3__fini(&msg->angular_acceleration);
  // force
  geometry_msgs__msg__Vector3__fini(&msg->force);
}

autopilot_msgs__msg__AttitudeTrajectorySetpoint *
autopilot_msgs__msg__AttitudeTrajectorySetpoint__create()
{
  autopilot_msgs__msg__AttitudeTrajectorySetpoint * msg = (autopilot_msgs__msg__AttitudeTrajectorySetpoint *)malloc(sizeof(autopilot_msgs__msg__AttitudeTrajectorySetpoint));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autopilot_msgs__msg__AttitudeTrajectorySetpoint));
  bool success = autopilot_msgs__msg__AttitudeTrajectorySetpoint__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
autopilot_msgs__msg__AttitudeTrajectorySetpoint__destroy(autopilot_msgs__msg__AttitudeTrajectorySetpoint * msg)
{
  if (msg) {
    autopilot_msgs__msg__AttitudeTrajectorySetpoint__fini(msg);
  }
  free(msg);
}


bool
autopilot_msgs__msg__AttitudeTrajectorySetpoint__Sequence__init(autopilot_msgs__msg__AttitudeTrajectorySetpoint__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  autopilot_msgs__msg__AttitudeTrajectorySetpoint * data = NULL;
  if (size) {
    data = (autopilot_msgs__msg__AttitudeTrajectorySetpoint *)calloc(size, sizeof(autopilot_msgs__msg__AttitudeTrajectorySetpoint));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autopilot_msgs__msg__AttitudeTrajectorySetpoint__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autopilot_msgs__msg__AttitudeTrajectorySetpoint__fini(&data[i - 1]);
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
autopilot_msgs__msg__AttitudeTrajectorySetpoint__Sequence__fini(autopilot_msgs__msg__AttitudeTrajectorySetpoint__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      autopilot_msgs__msg__AttitudeTrajectorySetpoint__fini(&array->data[i]);
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

autopilot_msgs__msg__AttitudeTrajectorySetpoint__Sequence *
autopilot_msgs__msg__AttitudeTrajectorySetpoint__Sequence__create(size_t size)
{
  autopilot_msgs__msg__AttitudeTrajectorySetpoint__Sequence * array = (autopilot_msgs__msg__AttitudeTrajectorySetpoint__Sequence *)malloc(sizeof(autopilot_msgs__msg__AttitudeTrajectorySetpoint__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = autopilot_msgs__msg__AttitudeTrajectorySetpoint__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
autopilot_msgs__msg__AttitudeTrajectorySetpoint__Sequence__destroy(autopilot_msgs__msg__AttitudeTrajectorySetpoint__Sequence * array)
{
  if (array) {
    autopilot_msgs__msg__AttitudeTrajectorySetpoint__Sequence__fini(array);
  }
  free(array);
}
