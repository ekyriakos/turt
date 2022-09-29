// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from turtle_interfaces:msg/ResStatus.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__RES_STATUS__STRUCT_HPP_
#define TURTLE_INTERFACES__MSG__DETAIL__RES_STATUS__STRUCT_HPP_

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
# define DEPRECATED__turtle_interfaces__msg__ResStatus __attribute__((deprecated))
#else
# define DEPRECATED__turtle_interfaces__msg__ResStatus __declspec(deprecated)
#endif

namespace turtle_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ResStatus_
{
  using Type = ResStatus_<ContainerAllocator>;

  explicit ResStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->button = false;
      this->toggle = false;
      this->stop = false;
      this->signal_strength = 0;
    }
  }

  explicit ResStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->button = false;
      this->toggle = false;
      this->stop = false;
      this->signal_strength = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _button_type =
    bool;
  _button_type button;
  using _toggle_type =
    bool;
  _toggle_type toggle;
  using _stop_type =
    bool;
  _stop_type stop;
  using _signal_strength_type =
    uint8_t;
  _signal_strength_type signal_strength;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__button(
    const bool & _arg)
  {
    this->button = _arg;
    return *this;
  }
  Type & set__toggle(
    const bool & _arg)
  {
    this->toggle = _arg;
    return *this;
  }
  Type & set__stop(
    const bool & _arg)
  {
    this->stop = _arg;
    return *this;
  }
  Type & set__signal_strength(
    const uint8_t & _arg)
  {
    this->signal_strength = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    turtle_interfaces::msg::ResStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const turtle_interfaces::msg::ResStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<turtle_interfaces::msg::ResStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<turtle_interfaces::msg::ResStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      turtle_interfaces::msg::ResStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<turtle_interfaces::msg::ResStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      turtle_interfaces::msg::ResStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<turtle_interfaces::msg::ResStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<turtle_interfaces::msg::ResStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<turtle_interfaces::msg::ResStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__turtle_interfaces__msg__ResStatus
    std::shared_ptr<turtle_interfaces::msg::ResStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__turtle_interfaces__msg__ResStatus
    std::shared_ptr<turtle_interfaces::msg::ResStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ResStatus_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->button != other.button) {
      return false;
    }
    if (this->toggle != other.toggle) {
      return false;
    }
    if (this->stop != other.stop) {
      return false;
    }
    if (this->signal_strength != other.signal_strength) {
      return false;
    }
    return true;
  }
  bool operator!=(const ResStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ResStatus_

// alias to use template instance with default allocator
using ResStatus =
  turtle_interfaces::msg::ResStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace turtle_interfaces

#endif  // TURTLE_INTERFACES__MSG__DETAIL__RES_STATUS__STRUCT_HPP_
