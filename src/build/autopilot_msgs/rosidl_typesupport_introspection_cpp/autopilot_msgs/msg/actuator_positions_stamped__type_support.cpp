// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from autopilot_msgs:msg/ActuatorPositionsStamped.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "autopilot_msgs/msg/actuator_positions_stamped__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace autopilot_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

static const ::rosidl_typesupport_introspection_cpp::MessageMember ActuatorPositionsStamped_message_member_array[2] = {
  {
    "stamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Time>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autopilot_msgs::msg::ActuatorPositionsStamped, stamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "actuators",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<autopilot_msgs::msg::ActuatorPositions>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autopilot_msgs::msg::ActuatorPositionsStamped, actuators),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ActuatorPositionsStamped_message_members = {
  "autopilot_msgs::msg",  // message namespace
  "ActuatorPositionsStamped",  // message name
  2,  // number of fields
  sizeof(autopilot_msgs::msg::ActuatorPositionsStamped),
  ActuatorPositionsStamped_message_member_array  // message members
};

static const rosidl_message_type_support_t ActuatorPositionsStamped_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ActuatorPositionsStamped_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace autopilot_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<autopilot_msgs::msg::ActuatorPositionsStamped>()
{
  return &::autopilot_msgs::msg::rosidl_typesupport_introspection_cpp::ActuatorPositionsStamped_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, autopilot_msgs, msg, ActuatorPositionsStamped)() {
  return &::autopilot_msgs::msg::rosidl_typesupport_introspection_cpp::ActuatorPositionsStamped_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
