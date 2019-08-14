// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from autopilot_msgs:msg/RateControlSetpoint.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "autopilot_msgs/msg/rate_control_setpoint__rosidl_typesupport_introspection_c.h"
#include "autopilot_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "autopilot_msgs/msg/rate_control_setpoint__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/header__rosidl_typesupport_introspection_c.h"
// Member `rate_control_setpoint`
// Member `feed_forward_torque`
// Member `force`
#include "geometry_msgs/msg/vector3.h"
// Member `rate_control_setpoint`
// Member `feed_forward_torque`
// Member `force`
#include "geometry_msgs/msg/vector3__rosidl_typesupport_introspection_c.h"
// Member `actuators`
#include "autopilot_msgs/msg/actuator_positions.h"
// Member `actuators`
#include "autopilot_msgs/msg/actuator_positions__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember RateControlSetpoint__rosidl_typesupport_introspection_c__RateControlSetpoint_message_member_array[5] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autopilot_msgs__msg__RateControlSetpoint, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rate_control_setpoint",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autopilot_msgs__msg__RateControlSetpoint, rate_control_setpoint),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feed_forward_torque",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autopilot_msgs__msg__RateControlSetpoint, feed_forward_torque),  // bytes offset in struct
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
    offsetof(autopilot_msgs__msg__RateControlSetpoint, force),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "actuators",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autopilot_msgs__msg__RateControlSetpoint, actuators),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RateControlSetpoint__rosidl_typesupport_introspection_c__RateControlSetpoint_message_members = {
  "autopilot_msgs__msg",  // message namespace
  "RateControlSetpoint",  // message name
  5,  // number of fields
  sizeof(autopilot_msgs__msg__RateControlSetpoint),
  RateControlSetpoint__rosidl_typesupport_introspection_c__RateControlSetpoint_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RateControlSetpoint__rosidl_typesupport_introspection_c__RateControlSetpoint_message_type_support_handle = {
  0,
  &RateControlSetpoint__rosidl_typesupport_introspection_c__RateControlSetpoint_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autopilot_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autopilot_msgs, msg, RateControlSetpoint)() {
  RateControlSetpoint__rosidl_typesupport_introspection_c__RateControlSetpoint_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  RateControlSetpoint__rosidl_typesupport_introspection_c__RateControlSetpoint_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  RateControlSetpoint__rosidl_typesupport_introspection_c__RateControlSetpoint_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  RateControlSetpoint__rosidl_typesupport_introspection_c__RateControlSetpoint_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  RateControlSetpoint__rosidl_typesupport_introspection_c__RateControlSetpoint_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autopilot_msgs, msg, ActuatorPositions)();
  if (!RateControlSetpoint__rosidl_typesupport_introspection_c__RateControlSetpoint_message_type_support_handle.typesupport_identifier) {
    RateControlSetpoint__rosidl_typesupport_introspection_c__RateControlSetpoint_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RateControlSetpoint__rosidl_typesupport_introspection_c__RateControlSetpoint_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
