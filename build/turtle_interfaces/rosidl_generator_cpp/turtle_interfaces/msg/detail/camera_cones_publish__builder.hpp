// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtle_interfaces:msg/CameraConesPublish.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__CAMERA_CONES_PUBLISH__BUILDER_HPP_
#define TURTLE_INTERFACES__MSG__DETAIL__CAMERA_CONES_PUBLISH__BUILDER_HPP_

#include "turtle_interfaces/msg/detail/camera_cones_publish__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace turtle_interfaces
{

namespace msg
{

namespace builder
{

class Init_CameraConesPublish_right_camera_cones
{
public:
  explicit Init_CameraConesPublish_right_camera_cones(::turtle_interfaces::msg::CameraConesPublish & msg)
  : msg_(msg)
  {}
  ::turtle_interfaces::msg::CameraConesPublish right_camera_cones(::turtle_interfaces::msg::CameraConesPublish::_right_camera_cones_type arg)
  {
    msg_.right_camera_cones = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_interfaces::msg::CameraConesPublish msg_;
};

class Init_CameraConesPublish_center_camera_cones
{
public:
  explicit Init_CameraConesPublish_center_camera_cones(::turtle_interfaces::msg::CameraConesPublish & msg)
  : msg_(msg)
  {}
  Init_CameraConesPublish_right_camera_cones center_camera_cones(::turtle_interfaces::msg::CameraConesPublish::_center_camera_cones_type arg)
  {
    msg_.center_camera_cones = std::move(arg);
    return Init_CameraConesPublish_right_camera_cones(msg_);
  }

private:
  ::turtle_interfaces::msg::CameraConesPublish msg_;
};

class Init_CameraConesPublish_left_camera_cones
{
public:
  explicit Init_CameraConesPublish_left_camera_cones(::turtle_interfaces::msg::CameraConesPublish & msg)
  : msg_(msg)
  {}
  Init_CameraConesPublish_center_camera_cones left_camera_cones(::turtle_interfaces::msg::CameraConesPublish::_left_camera_cones_type arg)
  {
    msg_.left_camera_cones = std::move(arg);
    return Init_CameraConesPublish_center_camera_cones(msg_);
  }

private:
  ::turtle_interfaces::msg::CameraConesPublish msg_;
};

class Init_CameraConesPublish_header
{
public:
  Init_CameraConesPublish_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CameraConesPublish_left_camera_cones header(::turtle_interfaces::msg::CameraConesPublish::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_CameraConesPublish_left_camera_cones(msg_);
  }

private:
  ::turtle_interfaces::msg::CameraConesPublish msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_interfaces::msg::CameraConesPublish>()
{
  return turtle_interfaces::msg::builder::Init_CameraConesPublish_header();
}

}  // namespace turtle_interfaces

#endif  // TURTLE_INTERFACES__MSG__DETAIL__CAMERA_CONES_PUBLISH__BUILDER_HPP_
