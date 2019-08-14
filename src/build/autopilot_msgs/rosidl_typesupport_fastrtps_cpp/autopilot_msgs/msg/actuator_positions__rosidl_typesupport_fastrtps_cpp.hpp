// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from autopilot_msgs:msg/ActuatorPositions.idl
// generated code does not contain a copyright notice

#ifndef AUTOPILOT_MSGS__MSG__ACTUATOR_POSITIONS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define AUTOPILOT_MSGS__MSG__ACTUATOR_POSITIONS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "autopilot_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "autopilot_msgs/msg/actuator_positions__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace autopilot_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autopilot_msgs
cdr_serialize(
  const autopilot_msgs::msg::ActuatorPositions & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autopilot_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  autopilot_msgs::msg::ActuatorPositions & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autopilot_msgs
get_serialized_size(
  const autopilot_msgs::msg::ActuatorPositions & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autopilot_msgs
max_serialized_size_ActuatorPositions(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace autopilot_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autopilot_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, autopilot_msgs, msg, ActuatorPositions)();

#ifdef __cplusplus
}
#endif

#endif  // AUTOPILOT_MSGS__MSG__ACTUATOR_POSITIONS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
