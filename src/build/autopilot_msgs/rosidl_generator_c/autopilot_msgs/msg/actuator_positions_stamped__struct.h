// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autopilot_msgs:msg/ActuatorPositionsStamped.idl
// generated code does not contain a copyright notice

#ifndef AUTOPILOT_MSGS__MSG__ACTUATOR_POSITIONS_STAMPED__STRUCT_H_
#define AUTOPILOT_MSGS__MSG__ACTUATOR_POSITIONS_STAMPED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/time__struct.h"
// Member 'actuators'
#include "autopilot_msgs/msg/actuator_positions__struct.h"

// Struct defined in msg/ActuatorPositionsStamped in the package autopilot_msgs.
typedef struct autopilot_msgs__msg__ActuatorPositionsStamped
{
  builtin_interfaces__msg__Time stamp;
  autopilot_msgs__msg__ActuatorPositions actuators;
} autopilot_msgs__msg__ActuatorPositionsStamped;

// Struct for a sequence of autopilot_msgs__msg__ActuatorPositionsStamped.
typedef struct autopilot_msgs__msg__ActuatorPositionsStamped__Sequence
{
  autopilot_msgs__msg__ActuatorPositionsStamped * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autopilot_msgs__msg__ActuatorPositionsStamped__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOPILOT_MSGS__MSG__ACTUATOR_POSITIONS_STAMPED__STRUCT_H_
