// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from autopilot_msgs:msg/ActuatorPositions.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "autopilot_msgs/msg/actuator_positions__struct.hpp"
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

size_t size_function__ActuatorPositions__actuators(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ActuatorPositions__actuators(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__ActuatorPositions__actuators(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void resize_function__ActuatorPositions__actuators(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ActuatorPositions_message_member_array[1] = {
  {
    "actuators",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    16,  // array size
    true,  // is upper bound
    offsetof(autopilot_msgs::msg::ActuatorPositions, actuators),  // bytes offset in struct
    nullptr,  // default value
    size_function__ActuatorPositions__actuators,  // size() function pointer
    get_const_function__ActuatorPositions__actuators,  // get_const(index) function pointer
    get_function__ActuatorPositions__actuators,  // get(index) function pointer
    resize_function__ActuatorPositions__actuators  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ActuatorPositions_message_members = {
  "autopilot_msgs::msg",  // message namespace
  "ActuatorPositions",  // message name
  1,  // number of fields
  sizeof(autopilot_msgs::msg::ActuatorPositions),
  ActuatorPositions_message_member_array  // message members
};

static const rosidl_message_type_support_t ActuatorPositions_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ActuatorPositions_message_members,
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
get_message_type_support_handle<autopilot_msgs::msg::ActuatorPositions>()
{
  return &::autopilot_msgs::msg::rosidl_typesupport_introspection_cpp::ActuatorPositions_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, autopilot_msgs, msg, ActuatorPositions)() {
  return &::autopilot_msgs::msg::rosidl_typesupport_introspection_cpp::ActuatorPositions_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
