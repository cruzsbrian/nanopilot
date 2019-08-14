// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from autopilot_msgs:msg/AttitudeTrajectorySetpoint.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "autopilot_msgs/msg/attitude_trajectory_setpoint__rosidl_typesupport_introspection_c.h"
#include "autopilot_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "autopilot_msgs/msg/attitude_trajectory_setpoint__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/header__rosidl_typesupport_introspection_c.h"
// Member `orientation`
#include "geometry_msgs/msg/quaternion.h"
// Member `orientation`
#include "geometry_msgs/msg/quaternion__rosidl_typesupport_introspection_c.h"
// Member `angular_rate`
// Member `angular_acceleration`
// Member `force`
#include "geometry_msgs/msg/vector3.h"
// Member `angular_rate`
// Member `angular_acceleration`
// Member `force`
#include "geometry_msgs/msg/vector3__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember AttitudeTrajectorySetpoint__rosidl_typesupport_introspection_c__AttitudeTrajectorySetpoint_message_member_array[5] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autopilot_msgs__msg__AttitudeTrajectorySetpoint, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "orientation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autopilot_msgs__msg__AttitudeTrajectorySetpoint, orientation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "angular_rate",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autopilot_msgs__msg__AttitudeTrajectorySetpoint, angular_rate),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "angular_acceleration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autopilot_msgs__msg__AttitudeTrajectorySetpoint, angular_acceleration),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "force",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autopilot_msgs__msg__AttitudeTrajectorySetpoint, force),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers AttitudeTrajectorySetpoint__rosidl_typesupport_introspection_c__AttitudeTrajectorySetpoint_message_members = {
  "autopilot_msgs__msg",  // message namespace
  "AttitudeTrajectorySetpoint",  // message name
  5,  // number of fields
  sizeof(autopilot_msgs__msg__AttitudeTrajectorySetpoint),
  AttitudeTrajectorySetpoint__rosidl_typesupport_introspection_c__AttitudeTrajectorySetpoint_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t AttitudeTrajectorySetpoint__rosidl_typesupport_introspection_c__AttitudeTrajectorySetpoint_message_type_support_handle = {
  0,
  &AttitudeTrajectorySetpoint__rosidl_typesupport_introspection_c__AttitudeTrajectorySetpoint_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autopilot_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autopilot_msgs, msg, AttitudeTrajectorySetpoint)() {
  AttitudeTrajectorySetpoint__rosidl_typesupport_introspection_c__AttitudeTrajectorySetpoint_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  AttitudeTrajectorySetpoint__rosidl_typesupport_introspection_c__AttitudeTrajectorySetpoint_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Quaternion)();
  AttitudeTrajectorySetpoint__rosidl_typesupport_introspection_c__AttitudeTrajectorySetpoint_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  AttitudeTrajectorySetpoint__rosidl_typesupport_introspection_c__AttitudeTrajectorySetpoint_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  AttitudeTrajectorySetpoint__rosidl_typesupport_introspection_c__AttitudeTrajectorySetpoint_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  if (!AttitudeTrajectorySetpoint__rosidl_typesupport_introspection_c__AttitudeTrajectorySetpoint_message_type_support_handle.typesupport_identifier) {
    AttitudeTrajectorySetpoint__rosidl_typesupport_introspection_c__AttitudeTrajectorySetpoint_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &AttitudeTrajectorySetpoint__rosidl_typesupport_introspection_c__AttitudeTrajectorySetpoint_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
