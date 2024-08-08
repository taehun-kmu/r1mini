// Generated by gencpp from file omo_r1mini_bringup/Battery.msg
// DO NOT EDIT!


#ifndef OMO_R1MINI_BRINGUP_MESSAGE_BATTERY_H
#define OMO_R1MINI_BRINGUP_MESSAGE_BATTERY_H

#include <ros/service_traits.h>


#include <omo_r1mini_bringup/BatteryRequest.h>
#include <omo_r1mini_bringup/BatteryResponse.h>


namespace omo_r1mini_bringup
{

struct Battery
{

typedef BatteryRequest Request;
typedef BatteryResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct Battery
} // namespace omo_r1mini_bringup


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::omo_r1mini_bringup::Battery > {
  static const char* value()
  {
    return "9d9c08bbb8192da6b3949691563ecb91";
  }

  static const char* value(const ::omo_r1mini_bringup::Battery&) { return value(); }
};

template<>
struct DataType< ::omo_r1mini_bringup::Battery > {
  static const char* value()
  {
    return "omo_r1mini_bringup/Battery";
  }

  static const char* value(const ::omo_r1mini_bringup::Battery&) { return value(); }
};


// service_traits::MD5Sum< ::omo_r1mini_bringup::BatteryRequest> should match
// service_traits::MD5Sum< ::omo_r1mini_bringup::Battery >
template<>
struct MD5Sum< ::omo_r1mini_bringup::BatteryRequest>
{
  static const char* value()
  {
    return MD5Sum< ::omo_r1mini_bringup::Battery >::value();
  }
  static const char* value(const ::omo_r1mini_bringup::BatteryRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::omo_r1mini_bringup::BatteryRequest> should match
// service_traits::DataType< ::omo_r1mini_bringup::Battery >
template<>
struct DataType< ::omo_r1mini_bringup::BatteryRequest>
{
  static const char* value()
  {
    return DataType< ::omo_r1mini_bringup::Battery >::value();
  }
  static const char* value(const ::omo_r1mini_bringup::BatteryRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::omo_r1mini_bringup::BatteryResponse> should match
// service_traits::MD5Sum< ::omo_r1mini_bringup::Battery >
template<>
struct MD5Sum< ::omo_r1mini_bringup::BatteryResponse>
{
  static const char* value()
  {
    return MD5Sum< ::omo_r1mini_bringup::Battery >::value();
  }
  static const char* value(const ::omo_r1mini_bringup::BatteryResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::omo_r1mini_bringup::BatteryResponse> should match
// service_traits::DataType< ::omo_r1mini_bringup::Battery >
template<>
struct DataType< ::omo_r1mini_bringup::BatteryResponse>
{
  static const char* value()
  {
    return DataType< ::omo_r1mini_bringup::Battery >::value();
  }
  static const char* value(const ::omo_r1mini_bringup::BatteryResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // OMO_R1MINI_BRINGUP_MESSAGE_BATTERY_H