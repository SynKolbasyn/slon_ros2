// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gps:msg/GPS.idl
// generated code does not contain a copyright notice

#ifndef GPS__MSG__DETAIL__GPS__BUILDER_HPP_
#define GPS__MSG__DETAIL__GPS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gps/msg/detail/gps__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gps
{

namespace msg
{

namespace builder
{

class Init_GPS_lon
{
public:
  explicit Init_GPS_lon(::gps::msg::GPS & msg)
  : msg_(msg)
  {}
  ::gps::msg::GPS lon(::gps::msg::GPS::_lon_type arg)
  {
    msg_.lon = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gps::msg::GPS msg_;
};

class Init_GPS_lat
{
public:
  Init_GPS_lat()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GPS_lon lat(::gps::msg::GPS::_lat_type arg)
  {
    msg_.lat = std::move(arg);
    return Init_GPS_lon(msg_);
  }

private:
  ::gps::msg::GPS msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::gps::msg::GPS>()
{
  return gps::msg::builder::Init_GPS_lat();
}

}  // namespace gps

#endif  // GPS__MSG__DETAIL__GPS__BUILDER_HPP_
