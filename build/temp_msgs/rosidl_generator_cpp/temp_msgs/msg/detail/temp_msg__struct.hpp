// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from temp_msgs:msg/TempMsg.idl
// generated code does not contain a copyright notice

#ifndef TEMP_MSGS__MSG__DETAIL__TEMP_MSG__STRUCT_HPP_
#define TEMP_MSGS__MSG__DETAIL__TEMP_MSG__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__temp_msgs__msg__TempMsg __attribute__((deprecated))
#else
# define DEPRECATED__temp_msgs__msg__TempMsg __declspec(deprecated)
#endif

namespace temp_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TempMsg_
{
  using Type = TempMsg_<ContainerAllocator>;

  explicit TempMsg_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->left_up_w = 0.0;
      this->left_up_j = 0.0;
      this->right_up_w = 0.0;
      this->right_up_j = 0.0;
      this->left_down_w = 0.0;
      this->left_down_j = 0.0;
      this->right_down_w = 0.0;
      this->right_down_j = 0.0;
      this->x_min = 0.0;
      this->y_min = 0.0;
      this->x_max = 0.0;
      this->y_max = 0.0;
      this->output_w = 0.0;
      this->output_j = 0.0;
    }
  }

  explicit TempMsg_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->left_up_w = 0.0;
      this->left_up_j = 0.0;
      this->right_up_w = 0.0;
      this->right_up_j = 0.0;
      this->left_down_w = 0.0;
      this->left_down_j = 0.0;
      this->right_down_w = 0.0;
      this->right_down_j = 0.0;
      this->x_min = 0.0;
      this->y_min = 0.0;
      this->x_max = 0.0;
      this->y_max = 0.0;
      this->output_w = 0.0;
      this->output_j = 0.0;
    }
  }

  // field types and members
  using _left_up_w_type =
    double;
  _left_up_w_type left_up_w;
  using _left_up_j_type =
    double;
  _left_up_j_type left_up_j;
  using _right_up_w_type =
    double;
  _right_up_w_type right_up_w;
  using _right_up_j_type =
    double;
  _right_up_j_type right_up_j;
  using _left_down_w_type =
    double;
  _left_down_w_type left_down_w;
  using _left_down_j_type =
    double;
  _left_down_j_type left_down_j;
  using _right_down_w_type =
    double;
  _right_down_w_type right_down_w;
  using _right_down_j_type =
    double;
  _right_down_j_type right_down_j;
  using _x_min_type =
    double;
  _x_min_type x_min;
  using _y_min_type =
    double;
  _y_min_type y_min;
  using _x_max_type =
    double;
  _x_max_type x_max;
  using _y_max_type =
    double;
  _y_max_type y_max;
  using _output_w_type =
    double;
  _output_w_type output_w;
  using _output_j_type =
    double;
  _output_j_type output_j;

  // setters for named parameter idiom
  Type & set__left_up_w(
    const double & _arg)
  {
    this->left_up_w = _arg;
    return *this;
  }
  Type & set__left_up_j(
    const double & _arg)
  {
    this->left_up_j = _arg;
    return *this;
  }
  Type & set__right_up_w(
    const double & _arg)
  {
    this->right_up_w = _arg;
    return *this;
  }
  Type & set__right_up_j(
    const double & _arg)
  {
    this->right_up_j = _arg;
    return *this;
  }
  Type & set__left_down_w(
    const double & _arg)
  {
    this->left_down_w = _arg;
    return *this;
  }
  Type & set__left_down_j(
    const double & _arg)
  {
    this->left_down_j = _arg;
    return *this;
  }
  Type & set__right_down_w(
    const double & _arg)
  {
    this->right_down_w = _arg;
    return *this;
  }
  Type & set__right_down_j(
    const double & _arg)
  {
    this->right_down_j = _arg;
    return *this;
  }
  Type & set__x_min(
    const double & _arg)
  {
    this->x_min = _arg;
    return *this;
  }
  Type & set__y_min(
    const double & _arg)
  {
    this->y_min = _arg;
    return *this;
  }
  Type & set__x_max(
    const double & _arg)
  {
    this->x_max = _arg;
    return *this;
  }
  Type & set__y_max(
    const double & _arg)
  {
    this->y_max = _arg;
    return *this;
  }
  Type & set__output_w(
    const double & _arg)
  {
    this->output_w = _arg;
    return *this;
  }
  Type & set__output_j(
    const double & _arg)
  {
    this->output_j = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    temp_msgs::msg::TempMsg_<ContainerAllocator> *;
  using ConstRawPtr =
    const temp_msgs::msg::TempMsg_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<temp_msgs::msg::TempMsg_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<temp_msgs::msg::TempMsg_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      temp_msgs::msg::TempMsg_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<temp_msgs::msg::TempMsg_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      temp_msgs::msg::TempMsg_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<temp_msgs::msg::TempMsg_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<temp_msgs::msg::TempMsg_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<temp_msgs::msg::TempMsg_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__temp_msgs__msg__TempMsg
    std::shared_ptr<temp_msgs::msg::TempMsg_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__temp_msgs__msg__TempMsg
    std::shared_ptr<temp_msgs::msg::TempMsg_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TempMsg_ & other) const
  {
    if (this->left_up_w != other.left_up_w) {
      return false;
    }
    if (this->left_up_j != other.left_up_j) {
      return false;
    }
    if (this->right_up_w != other.right_up_w) {
      return false;
    }
    if (this->right_up_j != other.right_up_j) {
      return false;
    }
    if (this->left_down_w != other.left_down_w) {
      return false;
    }
    if (this->left_down_j != other.left_down_j) {
      return false;
    }
    if (this->right_down_w != other.right_down_w) {
      return false;
    }
    if (this->right_down_j != other.right_down_j) {
      return false;
    }
    if (this->x_min != other.x_min) {
      return false;
    }
    if (this->y_min != other.y_min) {
      return false;
    }
    if (this->x_max != other.x_max) {
      return false;
    }
    if (this->y_max != other.y_max) {
      return false;
    }
    if (this->output_w != other.output_w) {
      return false;
    }
    if (this->output_j != other.output_j) {
      return false;
    }
    return true;
  }
  bool operator!=(const TempMsg_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TempMsg_

// alias to use template instance with default allocator
using TempMsg =
  temp_msgs::msg::TempMsg_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace temp_msgs

#endif  // TEMP_MSGS__MSG__DETAIL__TEMP_MSG__STRUCT_HPP_
