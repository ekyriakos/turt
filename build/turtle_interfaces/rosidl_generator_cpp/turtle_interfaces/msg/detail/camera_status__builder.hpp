// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtle_interfaces:msg/CameraStatus.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__CAMERA_STATUS__BUILDER_HPP_
#define TURTLE_INTERFACES__MSG__DETAIL__CAMERA_STATUS__BUILDER_HPP_

#include "turtle_interfaces/msg/detail/camera_status__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace turtle_interfaces
{

namespace msg
{

namespace builder
{

class Init_CameraStatus_right_camera
{
public:
  explicit Init_CameraStatus_right_camera(::turtle_interfaces::msg::CameraStatus & msg)
  : msg_(msg)
  {}
  ::turtle_interfaces::msg::CameraStatus right_camera(::turtle_interfaces::msg::CameraStatus::_right_camera_type arg)
  {
    msg_.right_camera = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_interfaces::msg::CameraStatus msg_;
};

class Init_CameraStatus_center_camera
{
public:
  explicit Init_CameraStatus_center_camera(::turtle_interfaces::msg::CameraStatus & msg)
  : msg_(msg)
  {}
  Init_CameraStatus_right_camera center_camera(::turtle_interfaces::msg::CameraStatus::_center_camera_type arg)
  {
    msg_.center_camera = std::move(arg);
    return Init_CameraStatus_right_camera(msg_);
  }

private:
  ::turtle_interfaces::msg::CameraStatus msg_;
};

class Init_CameraStatus_left_camera
{
public:
  explicit Init_CameraStatus_left_camera(::turtle_interfaces::msg::CameraStatus & msg)
  : msg_(msg)
  {}
  Init_CameraStatus_center_camera left_camera(::turtle_interfaces::msg::CameraStatus::_left_camera_type arg)
  {
    msg_.left_camera = std::move(arg);
    return Init_CameraStatus_center_camera(msg_);
  }

private:
  ::turtle_interfaces::msg::CameraStatus msg_;
};

class Init_CameraStatus_header
{
public:
  Init_CameraStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CameraStatus_left_camera header(::turtle_interfaces::msg::CameraStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_CameraStatus_left_camera(msg_);
  }

private:
  ::turtle_interfaces::msg::CameraStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_interfaces::msg::CameraStatus>()
{
  return turtle_interfaces::msg::builder::Init_CameraStatus_header();
}

}  // namespace turtle_interfaces

#endif  // TURTLE_INTERFACES__MSG__DETAIL__CAMERA_STATUS__BUILDER_HPP_
