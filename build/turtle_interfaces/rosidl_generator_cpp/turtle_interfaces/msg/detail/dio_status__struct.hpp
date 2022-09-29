// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from turtle_interfaces:msg/DioStatus.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__DIO_STATUS__STRUCT_HPP_
#define TURTLE_INTERFACES__MSG__DETAIL__DIO_STATUS__STRUCT_HPP_

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
# define DEPRECATED__turtle_interfaces__msg__DioStatus __attribute__((deprecated))
#else
# define DEPRECATED__turtle_interfaces__msg__DioStatus __declspec(deprecated)
#endif

namespace turtle_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DioStatus_
{
  using Type = DioStatus_<ContainerAllocator>;

  explicit DioStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<bool, 8>::iterator, bool>(this->do_state.begin(), this->do_state.end(), false);
      std::fill<typename std::array<bool, 8>::iterator, bool>(this->di_state.begin(), this->di_state.end(), false);
    }
  }

  explicit DioStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    do_state(_alloc),
    di_state(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<bool, 8>::iterator, bool>(this->do_state.begin(), this->do_state.end(), false);
      std::fill<typename std::array<bool, 8>::iterator, bool>(this->di_state.begin(), this->di_state.end(), false);
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _do_state_type =
    std::array<bool, 8>;
  _do_state_type do_state;
  using _di_state_type =
    std::array<bool, 8>;
  _di_state_type di_state;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__do_state(
    const std::array<bool, 8> & _arg)
  {
    this->do_state = _arg;
    return *this;
  }
  Type & set__di_state(
    const std::array<bool, 8> & _arg)
  {
    this->di_state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    turtle_interfaces::msg::DioStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const turtle_interfaces::msg::DioStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<turtle_interfaces::msg::DioStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<turtle_interfaces::msg::DioStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      turtle_interfaces::msg::DioStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<turtle_interfaces::msg::DioStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      turtle_interfaces::msg::DioStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<turtle_interfaces::msg::DioStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<turtle_interfaces::msg::DioStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<turtle_interfaces::msg::DioStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__turtle_interfaces__msg__DioStatus
    std::shared_ptr<turtle_interfaces::msg::DioStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__turtle_interfaces__msg__DioStatus
    std::shared_ptr<turtle_interfaces::msg::DioStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DioStatus_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->do_state != other.do_state) {
      return false;
    }
    if (this->di_state != other.di_state) {
      return false;
    }
    return true;
  }
  bool operator!=(const DioStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DioStatus_

// alias to use template instance with default allocator
using DioStatus =
  turtle_interfaces::msg::DioStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace turtle_interfaces

#endif  // TURTLE_INTERFACES__MSG__DETAIL__DIO_STATUS__STRUCT_HPP_
