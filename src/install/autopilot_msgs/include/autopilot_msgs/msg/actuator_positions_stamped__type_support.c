// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from autopilot_msgs:msg/ActuatorPositionsStamped.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "autopilot_msgs/msg/actuator_positions_stamped__rosidl_typesupport_introspection_c.h"
#include "autopilot_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "autopilot_msgs/msg/actuator_positions_stamped__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/time__rosidl_typesupport_introspection_c.h"
// Member `actuators`
#include "autopilot_msgs/msg/actuator_positions.h"
// Member `actuators`
#include "autopilot_msgs/msg/actuator_positions__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember ActuatorPositionsStamped__rosidl_typesupport_introspection_c__ActuatorPositionsStamped_message_member_array[2] = {
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autopilot_msgs__msg__ActuatorPositionsStamped, stamp),  // bytes offset in struct
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
    offsetof(autopilot_msgs__msg__ActuatorPositionsStamped, actuators),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ActuatorPositionsStamped__rosidl_typesupport_introspection_c__ActuatorPositionsStamped_message_members = {
  "autopilot_msgs__msg",  // message namespace
  "ActuatorPositionsStamped",  // message name
  2,  // number of fields
  sizeof(autopilot_msgs__msg__ActuatorPositionsStamped),
  ActuatorPositionsStamped__rosidl_typesupport_introspection_c__ActuatorPositionsStamped_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ActuatorPositionsStamped__rosidl_typesupport_introspection_c__ActuatorPositionsStamped_message_type_support_handle = {
  0,
  &ActuatorPositionsStamped__rosidl_typesupport_introspection_c__ActuatorPositionsStamped_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autopilot_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autopilot_msgs, msg, ActuatorPositionsStamped)() {
  ActuatorPositionsStamped__rosidl_typesupport_introspection_c__ActuatorPositionsStamped_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  ActuatorPositionsStamped__rosidl_typesupport_introspection_c__ActuatorPositionsStamped_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autopilot_msgs, msg, ActuatorPositions)();
  if (!ActuatorPositionsStamped__rosidl_typesupport_introspection_c__ActuatorPositionsStamped_message_type_support_handle.typesupport_identifier) {
    ActuatorPositionsStamped__rosidl_typesupport_introspection_c__ActuatorPositionsStamped_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ActuatorPositionsStamped__rosidl_typesupport_introspection_c__ActuatorPositionsStamped_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
