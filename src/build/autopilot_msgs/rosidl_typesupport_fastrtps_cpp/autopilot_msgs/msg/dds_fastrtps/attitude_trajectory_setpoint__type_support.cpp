// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from autopilot_msgs:msg/AttitudeTrajectorySetpoint.idl
// generated code does not contain a copyright notice
#include "autopilot_msgs/msg/attitude_trajectory_setpoint__rosidl_typesupport_fastrtps_cpp.hpp"
#include "autopilot_msgs/msg/attitude_trajectory_setpoint__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs

namespace geometry_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const geometry_msgs::msg::Quaternion &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  geometry_msgs::msg::Quaternion &);
size_t get_serialized_size(
  const geometry_msgs::msg::Quaternion &,
  size_t current_alignment);
size_t
max_serialized_size_Quaternion(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace geometry_msgs

namespace geometry_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const geometry_msgs::msg::Vector3 &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  geometry_msgs::msg::Vector3 &);
size_t get_serialized_size(
  const geometry_msgs::msg::Vector3 &,
  size_t current_alignment);
size_t
max_serialized_size_Vector3(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace geometry_msgs

namespace geometry_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const geometry_msgs::msg::Vector3 &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  geometry_msgs::msg::Vector3 &);
size_t get_serialized_size(
  const geometry_msgs::msg::Vector3 &,
  size_t current_alignment);
size_t
max_serialized_size_Vector3(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace geometry_msgs

namespace geometry_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const geometry_msgs::msg::Vector3 &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  geometry_msgs::msg::Vector3 &);
size_t get_serialized_size(
  const geometry_msgs::msg::Vector3 &,
  size_t current_alignment);
size_t
max_serialized_size_Vector3(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace geometry_msgs


namespace autopilot_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autopilot_msgs
cdr_serialize(
  const autopilot_msgs::msg::AttitudeTrajectorySetpoint & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: orientation
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.orientation,
    cdr);
  // Member: angular_rate
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.angular_rate,
    cdr);
  // Member: angular_acceleration
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.angular_acceleration,
    cdr);
  // Member: force
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.force,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autopilot_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  autopilot_msgs::msg::AttitudeTrajectorySetpoint & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: orientation
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.orientation);

  // Member: angular_rate
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.angular_rate);

  // Member: angular_acceleration
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.angular_acceleration);

  // Member: force
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.force);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autopilot_msgs
get_serialized_size(
  const autopilot_msgs::msg::AttitudeTrajectorySetpoint & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);
  // Member: orientation

  current_alignment +=
    geometry_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.orientation, current_alignment);
  // Member: angular_rate

  current_alignment +=
    geometry_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.angular_rate, current_alignment);
  // Member: angular_acceleration

  current_alignment +=
    geometry_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.angular_acceleration, current_alignment);
  // Member: force

  current_alignment +=
    geometry_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.force, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autopilot_msgs
max_serialized_size_AttitudeTrajectorySetpoint(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        full_bounded, current_alignment);
    }
  }

  // Member: orientation
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        geometry_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Quaternion(
        full_bounded, current_alignment);
    }
  }

  // Member: angular_rate
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        geometry_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Vector3(
        full_bounded, current_alignment);
    }
  }

  // Member: angular_acceleration
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        geometry_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Vector3(
        full_bounded, current_alignment);
    }
  }

  // Member: force
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        geometry_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Vector3(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _AttitudeTrajectorySetpoint__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const autopilot_msgs::msg::AttitudeTrajectorySetpoint *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _AttitudeTrajectorySetpoint__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<autopilot_msgs::msg::AttitudeTrajectorySetpoint *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _AttitudeTrajectorySetpoint__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const autopilot_msgs::msg::AttitudeTrajectorySetpoint *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _AttitudeTrajectorySetpoint__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_AttitudeTrajectorySetpoint(full_bounded, 0);
}

static message_type_support_callbacks_t _AttitudeTrajectorySetpoint__callbacks = {
  "autopilot_msgs::msg",
  "AttitudeTrajectorySetpoint",
  _AttitudeTrajectorySetpoint__cdr_serialize,
  _AttitudeTrajectorySetpoint__cdr_deserialize,
  _AttitudeTrajectorySetpoint__get_serialized_size,
  _AttitudeTrajectorySetpoint__max_serialized_size
};

static rosidl_message_type_support_t _AttitudeTrajectorySetpoint__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_AttitudeTrajectorySetpoint__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace autopilot_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_autopilot_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<autopilot_msgs::msg::AttitudeTrajectorySetpoint>()
{
  return &autopilot_msgs::msg::typesupport_fastrtps_cpp::_AttitudeTrajectorySetpoint__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, autopilot_msgs, msg, AttitudeTrajectorySetpoint)() {
  return &autopilot_msgs::msg::typesupport_fastrtps_cpp::_AttitudeTrajectorySetpoint__handle;
}

#ifdef __cplusplus
}
#endif
