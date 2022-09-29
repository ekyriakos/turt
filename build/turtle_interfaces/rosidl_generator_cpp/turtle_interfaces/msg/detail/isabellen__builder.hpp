// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtle_interfaces:msg/Isabellen.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__ISABELLEN__BUILDER_HPP_
#define TURTLE_INTERFACES__MSG__DETAIL__ISABELLEN__BUILDER_HPP_

#include "turtle_interfaces/msg/detail/isabellen__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace turtle_interfaces
{

namespace msg
{

namespace builder
{

class Init_Isabellen_energy
{
public:
  explicit Init_Isabellen_energy(::turtle_interfaces::msg::Isabellen & msg)
  : msg_(msg)
  {}
  ::turtle_interfaces::msg::Isabellen energy(::turtle_interfaces::msg::Isabellen::_energy_type arg)
  {
    msg_.energy = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_interfaces::msg::Isabellen msg_;
};

class Init_Isabellen_pdc
{
public:
  explicit Init_Isabellen_pdc(::turtle_interfaces::msg::Isabellen & msg)
  : msg_(msg)
  {}
  Init_Isabellen_energy pdc(::turtle_interfaces::msg::Isabellen::_pdc_type arg)
  {
    msg_.pdc = std::move(arg);
    return Init_Isabellen_energy(msg_);
  }

private:
  ::turtle_interfaces::msg::Isabellen msg_;
};

class Init_Isabellen_vdc
{
public:
  explicit Init_Isabellen_vdc(::turtle_interfaces::msg::Isabellen & msg)
  : msg_(msg)
  {}
  Init_Isabellen_pdc vdc(::turtle_interfaces::msg::Isabellen::_vdc_type arg)
  {
    msg_.vdc = std::move(arg);
    return Init_Isabellen_pdc(msg_);
  }

private:
  ::turtle_interfaces::msg::Isabellen msg_;
};

class Init_Isabellen_idc
{
public:
  explicit Init_Isabellen_idc(::turtle_interfaces::msg::Isabellen & msg)
  : msg_(msg)
  {}
  Init_Isabellen_vdc idc(::turtle_interfaces::msg::Isabellen::_idc_type arg)
  {
    msg_.idc = std::move(arg);
    return Init_Isabellen_vdc(msg_);
  }

private:
  ::turtle_interfaces::msg::Isabellen msg_;
};

class Init_Isabellen_header
{
public:
  Init_Isabellen_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Isabellen_idc header(::turtle_interfaces::msg::Isabellen::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Isabellen_idc(msg_);
  }

private:
  ::turtle_interfaces::msg::Isabellen msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_interfaces::msg::Isabellen>()
{
  return turtle_interfaces::msg::builder::Init_Isabellen_header();
}

}  // namespace turtle_interfaces

#endif  // TURTLE_INTERFACES__MSG__DETAIL__ISABELLEN__BUILDER_HPP_
