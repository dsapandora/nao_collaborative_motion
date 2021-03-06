/* Auto-generated by genmsg_cpp for file /home/olivier/ros_workspace/nao_custom/msg/Sonar.msg */
#ifndef NAO_CUSTOM_MESSAGE_SONAR_H
#define NAO_CUSTOM_MESSAGE_SONAR_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"

#include "std_msgs/Header.h"

namespace nao_custom
{
template <class ContainerAllocator>
struct Sonar_ {
  typedef Sonar_<ContainerAllocator> Type;

  Sonar_()
  : header()
  , right(0.0)
  , left(0.0)
  {
  }

  Sonar_(const ContainerAllocator& _alloc)
  : header(_alloc)
  , right(0.0)
  , left(0.0)
  {
  }

  typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
   ::std_msgs::Header_<ContainerAllocator>  header;

  typedef float _right_type;
  float right;

  typedef float _left_type;
  float left;


  typedef boost::shared_ptr< ::nao_custom::Sonar_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::nao_custom::Sonar_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct Sonar
typedef  ::nao_custom::Sonar_<std::allocator<void> > Sonar;

typedef boost::shared_ptr< ::nao_custom::Sonar> SonarPtr;
typedef boost::shared_ptr< ::nao_custom::Sonar const> SonarConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::nao_custom::Sonar_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::nao_custom::Sonar_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace nao_custom

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::nao_custom::Sonar_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::nao_custom::Sonar_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::nao_custom::Sonar_<ContainerAllocator> > {
  static const char* value() 
  {
    return "b8459b06f837afc7f64834d442c94be1";
  }

  static const char* value(const  ::nao_custom::Sonar_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xb8459b06f837afc7ULL;
  static const uint64_t static_value2 = 0xf64834d442c94be1ULL;
};

template<class ContainerAllocator>
struct DataType< ::nao_custom::Sonar_<ContainerAllocator> > {
  static const char* value() 
  {
    return "nao_custom/Sonar";
  }

  static const char* value(const  ::nao_custom::Sonar_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::nao_custom::Sonar_<ContainerAllocator> > {
  static const char* value() 
  {
    return "# Sonar values\n\
\n\
Header header\n\
\n\
float32 right\n\
float32 left\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.secs: seconds (stamp_secs) since epoch\n\
# * stamp.nsecs: nanoseconds since stamp_secs\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
";
  }

  static const char* value(const  ::nao_custom::Sonar_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct HasHeader< ::nao_custom::Sonar_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct HasHeader< const ::nao_custom::Sonar_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::nao_custom::Sonar_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.header);
    stream.next(m.right);
    stream.next(m.left);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct Sonar_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::nao_custom::Sonar_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::nao_custom::Sonar_<ContainerAllocator> & v) 
  {
    s << indent << "header: ";
s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "right: ";
    Printer<float>::stream(s, indent + "  ", v.right);
    s << indent << "left: ";
    Printer<float>::stream(s, indent + "  ", v.left);
  }
};


} // namespace message_operations
} // namespace ros

#endif // NAO_CUSTOM_MESSAGE_SONAR_H

