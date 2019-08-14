// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from autopilot_msgs:msg/ActuatorPositions.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "autopilot_msgs/msg/actuator_positions__rosidl_typesupport_introspection_c.h"
#include "autopilot_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "autopilot_msgs/msg/actuator_positions__struct.h"


// Include directives for member types
// Member `actuators`
#include "rosidl_generator_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember ActuatorPositions__rosidl_typesupport_introspection_c__ActuatorPositions_message_member_array[1] = {
  {
    "actuators",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    16,  // array size
    true,  // is upper bound
    offsetof(autopilot_msgs__msg__ActuatorPositions, actuators),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ActuatorPositions__rosidl_typesupport_introspection_c__ActuatorPositions_message_members = {
  "autopilot_msgs__msg",  // message namespace
  "ActuatorPositions",  // message name
  1,  // number of fields
  sizeof(autopilot_msgs__msg__ActuatorPositions),
  ActuatorPositions__rosidl_typesupport_introspection_c__ActuatorPositions_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ActuatorPositions__rosidl_typesupport_introspection_c__ActuatorPositions_message_type_support_handle = {
  0,
  &ActuatorPositions__rosidl_typesupport_introspection_c__ActuatorPositions_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autopilot_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autopilot_msgs, msg, ActuatorPositions)() {
  if (!ActuatorPositions__rosidl_typesupport_introspection_c__ActuatorPositions_message_type_support_handle.typesupport_identifier) {
    ActuatorPositions__rosidl_typesupport_introspection_c__ActuatorPositions_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ActuatorPositions__rosidl_typesupport_introspection_c__ActuatorPositions_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
