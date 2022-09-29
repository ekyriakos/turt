// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from turtle_interfaces:msg/Brake.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__BRAKE__STRUCT_HPP_
#define TURTLE_INTERFACES__MSG__DETAIL__BRAKE__STRUCT_HPP_

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
# define DEPRECATED__turtle_interfaces__msg__Brake __attribute__((deprecated))
#else
# define DEPRECATED__turtle_interfaces__msg__Brake __declspec(deprecated)
#endif

namespace turtle_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Brake_
{
  using Type = Brake_<ContainerAllocator>;

  explicit Brake_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->brake = 0.0f;
    }
  }

  explicit Brake_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->brake = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _brake_type =
    float;
  _brake_type brake;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__brake(
    const float & _arg)
  {
    this->brake = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    turtle_interfaces::msg::Brake_<ContainerAllocator> *;
  using ConstRawPtr =
    const turtle_interfaces::msg::Brake_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<turtle_interfaces::msg::Brake_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<turtle_interfaces::msg::Brake_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      turtle_interfaces::msg::Brake_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<turtle_interfaces::msg::Brake_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      turtle_interfaces::msg::Brake_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<turtle_interfaces::msg::Brake_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<turtle_interfaces::msg::Brake_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<turtle_interfaces::msg::Brake_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__turtle_interfaces__msg__Brake
    std::shared_ptr<turtle_interfaces::msg::Brake_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__turtle_interfaces__msg__Brake
    std::shared_ptr<turtle_interfaces::msg::Brake_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Brake_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->brake != other.brake) {
      return false;
    }
    return true;
  }
  bool operator!=(const Brake_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Brake_

// alias to use template instance with default allocator
using Brake =
  turtle_interfaces::msg::Brake_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace turtle_interfaces

#endif  // TURTLE_INTERFACES__MSG__DETAIL__BRAKE__STRUCT_HPP_
