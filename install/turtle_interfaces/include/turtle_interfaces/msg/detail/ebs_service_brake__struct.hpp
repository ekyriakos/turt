// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from turtle_interfaces:msg/EbsServiceBrake.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__EBS_SERVICE_BRAKE__STRUCT_HPP_
#define TURTLE_INTERFACES__MSG__DETAIL__EBS_SERVICE_BRAKE__STRUCT_HPP_

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
# define DEPRECATED__turtle_interfaces__msg__EbsServiceBrake __attribute__((deprecated))
#else
# define DEPRECATED__turtle_interfaces__msg__EbsServiceBrake __declspec(deprecated)
#endif

namespace turtle_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EbsServiceBrake_
{
  using Type = EbsServiceBrake_<ContainerAllocator>;

  explicit EbsServiceBrake_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->servo_commanded_enable = 0;
    }
  }

  explicit EbsServiceBrake_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->servo_commanded_enable = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _servo_commanded_enable_type =
    uint8_t;
  _servo_commanded_enable_type servo_commanded_enable;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__servo_commanded_enable(
    const uint8_t & _arg)
  {
    this->servo_commanded_enable = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    turtle_interfaces::msg::EbsServiceBrake_<ContainerAllocator> *;
  using ConstRawPtr =
    const turtle_interfaces::msg::EbsServiceBrake_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<turtle_interfaces::msg::EbsServiceBrake_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<turtle_interfaces::msg::EbsServiceBrake_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      turtle_interfaces::msg::EbsServiceBrake_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<turtle_interfaces::msg::EbsServiceBrake_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      turtle_interfaces::msg::EbsServiceBrake_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<turtle_interfaces::msg::EbsServiceBrake_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<turtle_interfaces::msg::EbsServiceBrake_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<turtle_interfaces::msg::EbsServiceBrake_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__turtle_interfaces__msg__EbsServiceBrake
    std::shared_ptr<turtle_interfaces::msg::EbsServiceBrake_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__turtle_interfaces__msg__EbsServiceBrake
    std::shared_ptr<turtle_interfaces::msg::EbsServiceBrake_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EbsServiceBrake_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->servo_commanded_enable != other.servo_commanded_enable) {
      return false;
    }
    return true;
  }
  bool operator!=(const EbsServiceBrake_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EbsServiceBrake_

// alias to use template instance with default allocator
using EbsServiceBrake =
  turtle_interfaces::msg::EbsServiceBrake_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace turtle_interfaces

#endif  // TURTLE_INTERFACES__MSG__DETAIL__EBS_SERVICE_BRAKE__STRUCT_HPP_
