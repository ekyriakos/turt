// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from turtle_interfaces:msg/InverterInfo.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__INVERTER_INFO__STRUCT_HPP_
#define TURTLE_INTERFACES__MSG__DETAIL__INVERTER_INFO__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__turtle_interfaces__msg__InverterInfo __attribute__((deprecated))
#else
# define DEPRECATED__turtle_interfaces__msg__InverterInfo __declspec(deprecated)
#endif

namespace turtle_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct InverterInfo_
{
  using Type = InverterInfo_<ContainerAllocator>;

  explicit InverterInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->igbts_temp = 0.0f;
      this->irms_max = 0.0f;
      this->i_lim_in_use = 0.0f;
      this->motor_temp = 0.0f;
      this->irms = 0.0f;
      this->max_rpm = 0.0f;
    }
  }

  explicit InverterInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->igbts_temp = 0.0f;
      this->irms_max = 0.0f;
      this->i_lim_in_use = 0.0f;
      this->motor_temp = 0.0f;
      this->irms = 0.0f;
      this->max_rpm = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _igbts_temp_type =
    float;
  _igbts_temp_type igbts_temp;
  using _irms_max_type =
    float;
  _irms_max_type irms_max;
  using _i_lim_in_use_type =
    float;
  _i_lim_in_use_type i_lim_in_use;
  using _motor_temp_type =
    float;
  _motor_temp_type motor_temp;
  using _irms_type =
    float;
  _irms_type irms;
  using _max_rpm_type =
    float;
  _max_rpm_type max_rpm;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__igbts_temp(
    const float & _arg)
  {
    this->igbts_temp = _arg;
    return *this;
  }
  Type & set__irms_max(
    const float & _arg)
  {
    this->irms_max = _arg;
    return *this;
  }
  Type & set__i_lim_in_use(
    const float & _arg)
  {
    this->i_lim_in_use = _arg;
    return *this;
  }
  Type & set__motor_temp(
    const float & _arg)
  {
    this->motor_temp = _arg;
    return *this;
  }
  Type & set__irms(
    const float & _arg)
  {
    this->irms = _arg;
    return *this;
  }
  Type & set__max_rpm(
    const float & _arg)
  {
    this->max_rpm = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    turtle_interfaces::msg::InverterInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const turtle_interfaces::msg::InverterInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<turtle_interfaces::msg::InverterInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<turtle_interfaces::msg::InverterInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      turtle_interfaces::msg::InverterInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<turtle_interfaces::msg::InverterInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      turtle_interfaces::msg::InverterInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<turtle_interfaces::msg::InverterInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<turtle_interfaces::msg::InverterInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<turtle_interfaces::msg::InverterInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__turtle_interfaces__msg__InverterInfo
    std::shared_ptr<turtle_interfaces::msg::InverterInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__turtle_interfaces__msg__InverterInfo
    std::shared_ptr<turtle_interfaces::msg::InverterInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const InverterInfo_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->igbts_temp != other.igbts_temp) {
      return false;
    }
    if (this->irms_max != other.irms_max) {
      return false;
    }
    if (this->i_lim_in_use != other.i_lim_in_use) {
      return false;
    }
    if (this->motor_temp != other.motor_temp) {
      return false;
    }
    if (this->irms != other.irms) {
      return false;
    }
    if (this->max_rpm != other.max_rpm) {
      return false;
    }
    return true;
  }
  bool operator!=(const InverterInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct InverterInfo_

// alias to use template instance with default allocator
using InverterInfo =
  turtle_interfaces::msg::InverterInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace turtle_interfaces

#endif  // TURTLE_INTERFACES__MSG__DETAIL__INVERTER_INFO__STRUCT_HPP_
