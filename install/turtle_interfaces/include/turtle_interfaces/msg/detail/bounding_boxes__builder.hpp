// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtle_interfaces:msg/BoundingBoxes.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__BOUNDING_BOXES__BUILDER_HPP_
#define TURTLE_INTERFACES__MSG__DETAIL__BOUNDING_BOXES__BUILDER_HPP_

#include "turtle_interfaces/msg/detail/bounding_boxes__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace turtle_interfaces
{

namespace msg
{

namespace builder
{

class Init_BoundingBoxes_camera
{
public:
  explicit Init_BoundingBoxes_camera(::turtle_interfaces::msg::BoundingBoxes & msg)
  : msg_(msg)
  {}
  ::turtle_interfaces::msg::BoundingBoxes camera(::turtle_interfaces::msg::BoundingBoxes::_camera_type arg)
  {
    msg_.camera = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_interfaces::msg::BoundingBoxes msg_;
};

class Init_BoundingBoxes_color
{
public:
  explicit Init_BoundingBoxes_color(::turtle_interfaces::msg::BoundingBoxes & msg)
  : msg_(msg)
  {}
  Init_BoundingBoxes_camera color(::turtle_interfaces::msg::BoundingBoxes::_color_type arg)
  {
    msg_.color = std::move(arg);
    return Init_BoundingBoxes_camera(msg_);
  }

private:
  ::turtle_interfaces::msg::BoundingBoxes msg_;
};

class Init_BoundingBoxes_h
{
public:
  explicit Init_BoundingBoxes_h(::turtle_interfaces::msg::BoundingBoxes & msg)
  : msg_(msg)
  {}
  Init_BoundingBoxes_color h(::turtle_interfaces::msg::BoundingBoxes::_h_type arg)
  {
    msg_.h = std::move(arg);
    return Init_BoundingBoxes_color(msg_);
  }

private:
  ::turtle_interfaces::msg::BoundingBoxes msg_;
};

class Init_BoundingBoxes_w
{
public:
  explicit Init_BoundingBoxes_w(::turtle_interfaces::msg::BoundingBoxes & msg)
  : msg_(msg)
  {}
  Init_BoundingBoxes_h w(::turtle_interfaces::msg::BoundingBoxes::_w_type arg)
  {
    msg_.w = std::move(arg);
    return Init_BoundingBoxes_h(msg_);
  }

private:
  ::turtle_interfaces::msg::BoundingBoxes msg_;
};

class Init_BoundingBoxes_y
{
public:
  explicit Init_BoundingBoxes_y(::turtle_interfaces::msg::BoundingBoxes & msg)
  : msg_(msg)
  {}
  Init_BoundingBoxes_w y(::turtle_interfaces::msg::BoundingBoxes::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_BoundingBoxes_w(msg_);
  }

private:
  ::turtle_interfaces::msg::BoundingBoxes msg_;
};

class Init_BoundingBoxes_x
{
public:
  explicit Init_BoundingBoxes_x(::turtle_interfaces::msg::BoundingBoxes & msg)
  : msg_(msg)
  {}
  Init_BoundingBoxes_y x(::turtle_interfaces::msg::BoundingBoxes::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_BoundingBoxes_y(msg_);
  }

private:
  ::turtle_interfaces::msg::BoundingBoxes msg_;
};

class Init_BoundingBoxes_header
{
public:
  Init_BoundingBoxes_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BoundingBoxes_x header(::turtle_interfaces::msg::BoundingBoxes::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_BoundingBoxes_x(msg_);
  }

private:
  ::turtle_interfaces::msg::BoundingBoxes msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_interfaces::msg::BoundingBoxes>()
{
  return turtle_interfaces::msg::builder::Init_BoundingBoxes_header();
}

}  // namespace turtle_interfaces

#endif  // TURTLE_INTERFACES__MSG__DETAIL__BOUNDING_BOXES__BUILDER_HPP_
