// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autopilot_msgs:msg/AttitudeTrajectorySetpoint.idl
// generated code does not contain a copyright notice

#ifndef AUTOPILOT_MSGS__MSG__ATTITUDE_TRAJECTORY_SETPOINT__STRUCT_H_
#define AUTOPILOT_MSGS__MSG__ATTITUDE_TRAJECTORY_SETPOINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/header__struct.h"
// Member 'orientation'
#include "geometry_msgs/msg/quaternion__struct.h"
// Member 'angular_rate'
// Member 'angular_acceleration'
// Member 'force'
#include "geometry_msgs/msg/vector3__struct.h"

// Struct defined in msg/AttitudeTrajectorySetpoint in the package autopilot_msgs.
typedef struct autopilot_msgs__msg__AttitudeTrajectorySetpoint
{
  std_msgs__msg__Header header;
  geometry_msgs__msg__Quaternion orientation;
  geometry_msgs__msg__Vector3 angular_rate;
  geometry_msgs__msg__Vector3 angular_acceleration;
  geometry_msgs__msg__Vector3 force;
} autopilot_msgs__msg__AttitudeTrajectorySetpoint;

// Struct for a sequence of autopilot_msgs__msg__AttitudeTrajectorySetpoint.
typedef struct autopilot_msgs__msg__AttitudeTrajectorySetpoint__Sequence
{
  autopilot_msgs__msg__AttitudeTrajectorySetpoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autopilot_msgs__msg__AttitudeTrajectorySetpoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOPILOT_MSGS__MSG__ATTITUDE_TRAJECTORY_SETPOINT__STRUCT_H_
