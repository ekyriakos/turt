// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from turtle_interfaces:msg/CameraStatus.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__CAMERA_STATUS__STRUCT_HPP_
#define TURTLE_INTERFACES__MSG__DETAIL__CAMERA_STATUS__STRUCT_HPP_

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
# define DEPRECATED__turtle_interfaces__msg__CameraStatus __attribute__((deprecated))
#else
# define DEPRECATED__turtle_interfaces__msg__CameraStatus __declspec(deprecated)
#endif

namespace turtle_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CameraStatus_
{
  using Type = CameraStatus_<ContainerAllocator>;

  explicit CameraStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->left_camera = false;
      this->center_camera = false;
      this->right_camera = false;
    }
  }

  explicit CameraStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->left_camera = false;
      this->center_camera = false;
      this->right_camera = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _left_camera_type =
    bool;
  _left_camera_type left_camera;
  using _center_camera_type =
    bool;
  _center_camera_type center_camera;
  using _right_camera_type =
    bool;
  _right_camera_type right_camera;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__left_camera(
    const bool & _arg)
  {
    this->left_camera = _arg;
    return *this;
  }
  Type & set__center_camera(
    const bool & _arg)
  {
    this->center_camera = _arg;
    return *this;
  }
  Type & set__right_camera(
    const bool & _arg)
  {
    this->right_camera = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    turtle_interfaces::msg::CameraStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const turtle_interfaces::msg::CameraStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<turtle_interfaces::msg::CameraStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<turtle_interfaces::msg::CameraStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      turtle_interfaces::msg::CameraStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<turtle_interfaces::msg::CameraStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      turtle_interfaces::msg::CameraStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<turtle_interfaces::msg::CameraStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<turtle_interfaces::msg::CameraStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<turtle_interfaces::msg::CameraStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__turtle_interfaces__msg__CameraStatus
    std::shared_ptr<turtle_interfaces::msg::CameraStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__turtle_interfaces__msg__CameraStatus
    std::shared_ptr<turtle_interfaces::msg::CameraStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CameraStatus_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->left_camera != other.left_camera) {
      return false;
    }
    if (this->center_camera != other.center_camera) {
      return false;
    }
    if (this->right_camera != other.right_camera) {
      return false;
    }
    return true;
  }
  bool operator!=(const CameraStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CameraStatus_

// alias to use template instance with default allocator
using CameraStatus =
  turtle_interfaces::msg::CameraStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace turtle_interfaces

#endif  // TURTLE_INTERFACES__MSG__DETAIL__CAMERA_STATUS__STRUCT_HPP_
