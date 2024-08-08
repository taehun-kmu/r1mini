// Generated by gencpp from file omo_r1mini_bringup/Color.msg
// DO NOT EDIT!


#ifndef OMO_R1MINI_BRINGUP_MESSAGE_COLOR_H
#define OMO_R1MINI_BRINGUP_MESSAGE_COLOR_H

#include <ros/service_traits.h>


#include <omo_r1mini_bringup/ColorRequest.h>
#include <omo_r1mini_bringup/ColorResponse.h>


namespace omo_r1mini_bringup
{

struct Color
{

typedef ColorRequest Request;
typedef ColorResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct Color
} // namespace omo_r1mini_bringup


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::omo_r1mini_bringup::Color > {
  static const char* value()
  {
    return "8b210d51c86d003e1192527182de7381";
  }

  static const char* value(const ::omo_r1mini_bringup::Color&) { return value(); }
};

template<>
struct DataType< ::omo_r1mini_bringup::Color > {
  static const char* value()
  {
    return "omo_r1mini_bringup/Color";
  }

  static const char* value(const ::omo_r1mini_bringup::Color&) { return value(); }
};


// service_traits::MD5Sum< ::omo_r1mini_bringup::ColorRequest> should match
// service_traits::MD5Sum< ::omo_r1mini_bringup::Color >
template<>
struct MD5Sum< ::omo_r1mini_bringup::ColorRequest>
{
  static const char* value()
  {
    return MD5Sum< ::omo_r1mini_bringup::Color >::value();
  }
  static const char* value(const ::omo_r1mini_bringup::ColorRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::omo_r1mini_bringup::ColorRequest> should match
// service_traits::DataType< ::omo_r1mini_bringup::Color >
template<>
struct DataType< ::omo_r1mini_bringup::ColorRequest>
{
  static const char* value()
  {
    return DataType< ::omo_r1mini_bringup::Color >::value();
  }
  static const char* value(const ::omo_r1mini_bringup::ColorRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::omo_r1mini_bringup::ColorResponse> should match
// service_traits::MD5Sum< ::omo_r1mini_bringup::Color >
template<>
struct MD5Sum< ::omo_r1mini_bringup::ColorResponse>
{
  static const char* value()
  {
    return MD5Sum< ::omo_r1mini_bringup::Color >::value();
  }
  static const char* value(const ::omo_r1mini_bringup::ColorResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::omo_r1mini_bringup::ColorResponse> should match
// service_traits::DataType< ::omo_r1mini_bringup::Color >
template<>
struct DataType< ::omo_r1mini_bringup::ColorResponse>
{
  static const char* value()
  {
    return DataType< ::omo_r1mini_bringup::Color >::value();
  }
  static const char* value(const ::omo_r1mini_bringup::ColorResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // OMO_R1MINI_BRINGUP_MESSAGE_COLOR_H