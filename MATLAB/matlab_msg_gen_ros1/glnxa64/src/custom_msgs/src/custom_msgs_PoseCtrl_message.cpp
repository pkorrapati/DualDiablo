// Copyright 2019-2021 The MathWorks, Inc.
// Common copy functions for custom_msgs/PoseCtrl
#include "boost/date_time.hpp"
#include "boost/shared_array.hpp"
#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable : 4244)
#pragma warning(disable : 4265)
#pragma warning(disable : 4458)
#pragma warning(disable : 4100)
#pragma warning(disable : 4127)
#pragma warning(disable : 4267)
#pragma warning(disable : 4068)
#pragma warning(disable : 4245)
#else
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpedantic"
#pragma GCC diagnostic ignored "-Wunused-local-typedefs"
#pragma GCC diagnostic ignored "-Wredundant-decls"
#pragma GCC diagnostic ignored "-Wnon-virtual-dtor"
#pragma GCC diagnostic ignored "-Wdelete-non-virtual-dtor"
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wshadow"
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif //_MSC_VER
#include "ros/ros.h"
#include "custom_msgs/PoseCtrl.h"
#include "visibility_control.h"
#include "MATLABROSMsgInterface.hpp"
#include "ROSPubSubTemplates.hpp"
class CUSTOM_MSGS_EXPORT custom_msgs_msg_PoseCtrl_common : public MATLABROSMsgInterface<custom_msgs::PoseCtrl> {
  public:
    virtual ~custom_msgs_msg_PoseCtrl_common(){}
    virtual void copy_from_struct(custom_msgs::PoseCtrl* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const custom_msgs::PoseCtrl* msg, MultiLibLoader loader, size_t size = 1);
};
  void custom_msgs_msg_PoseCtrl_common::copy_from_struct(custom_msgs::PoseCtrl* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //fl_x
        const matlab::data::TypedArray<double> fl_x_arr = arr["FlX"];
        msg->fl_x = fl_x_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'FlX' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'FlX' is wrong type; expected a double.");
    }
    try {
        //fl_z
        const matlab::data::TypedArray<double> fl_z_arr = arr["FlZ"];
        msg->fl_z = fl_z_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'FlZ' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'FlZ' is wrong type; expected a double.");
    }
    try {
        //fr_x
        const matlab::data::TypedArray<double> fr_x_arr = arr["FrX"];
        msg->fr_x = fr_x_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'FrX' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'FrX' is wrong type; expected a double.");
    }
    try {
        //fr_z
        const matlab::data::TypedArray<double> fr_z_arr = arr["FrZ"];
        msg->fr_z = fr_z_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'FrZ' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'FrZ' is wrong type; expected a double.");
    }
    try {
        //f_pitch
        const matlab::data::TypedArray<double> f_pitch_arr = arr["FPitch"];
        msg->f_pitch = f_pitch_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'FPitch' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'FPitch' is wrong type; expected a double.");
    }
    try {
        //f_delta
        const matlab::data::TypedArray<double> f_delta_arr = arr["FDelta"];
        msg->f_delta = f_delta_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'FDelta' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'FDelta' is wrong type; expected a double.");
    }
    try {
        //bl_x
        const matlab::data::TypedArray<double> bl_x_arr = arr["BlX"];
        msg->bl_x = bl_x_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'BlX' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'BlX' is wrong type; expected a double.");
    }
    try {
        //bl_z
        const matlab::data::TypedArray<double> bl_z_arr = arr["BlZ"];
        msg->bl_z = bl_z_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'BlZ' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'BlZ' is wrong type; expected a double.");
    }
    try {
        //br_x
        const matlab::data::TypedArray<double> br_x_arr = arr["BrX"];
        msg->br_x = br_x_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'BrX' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'BrX' is wrong type; expected a double.");
    }
    try {
        //br_z
        const matlab::data::TypedArray<double> br_z_arr = arr["BrZ"];
        msg->br_z = br_z_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'BrZ' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'BrZ' is wrong type; expected a double.");
    }
    try {
        //b_pitch
        const matlab::data::TypedArray<double> b_pitch_arr = arr["BPitch"];
        msg->b_pitch = b_pitch_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'BPitch' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'BPitch' is wrong type; expected a double.");
    }
    try {
        //b_delta
        const matlab::data::TypedArray<double> b_delta_arr = arr["BDelta"];
        msg->b_delta = b_delta_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'BDelta' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'BDelta' is wrong type; expected a double.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T custom_msgs_msg_PoseCtrl_common::get_arr(MDFactory_T& factory, const custom_msgs::PoseCtrl* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","FlX","FlZ","FrX","FrZ","FPitch","FDelta","BlX","BlZ","BrX","BrZ","BPitch","BDelta"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("custom_msgs/PoseCtrl");
    // fl_x
    auto currentElement_fl_x = (msg + ctr)->fl_x;
    outArray[ctr]["FlX"] = factory.createScalar(currentElement_fl_x);
    // fl_z
    auto currentElement_fl_z = (msg + ctr)->fl_z;
    outArray[ctr]["FlZ"] = factory.createScalar(currentElement_fl_z);
    // fr_x
    auto currentElement_fr_x = (msg + ctr)->fr_x;
    outArray[ctr]["FrX"] = factory.createScalar(currentElement_fr_x);
    // fr_z
    auto currentElement_fr_z = (msg + ctr)->fr_z;
    outArray[ctr]["FrZ"] = factory.createScalar(currentElement_fr_z);
    // f_pitch
    auto currentElement_f_pitch = (msg + ctr)->f_pitch;
    outArray[ctr]["FPitch"] = factory.createScalar(currentElement_f_pitch);
    // f_delta
    auto currentElement_f_delta = (msg + ctr)->f_delta;
    outArray[ctr]["FDelta"] = factory.createScalar(currentElement_f_delta);
    // bl_x
    auto currentElement_bl_x = (msg + ctr)->bl_x;
    outArray[ctr]["BlX"] = factory.createScalar(currentElement_bl_x);
    // bl_z
    auto currentElement_bl_z = (msg + ctr)->bl_z;
    outArray[ctr]["BlZ"] = factory.createScalar(currentElement_bl_z);
    // br_x
    auto currentElement_br_x = (msg + ctr)->br_x;
    outArray[ctr]["BrX"] = factory.createScalar(currentElement_br_x);
    // br_z
    auto currentElement_br_z = (msg + ctr)->br_z;
    outArray[ctr]["BrZ"] = factory.createScalar(currentElement_br_z);
    // b_pitch
    auto currentElement_b_pitch = (msg + ctr)->b_pitch;
    outArray[ctr]["BPitch"] = factory.createScalar(currentElement_b_pitch);
    // b_delta
    auto currentElement_b_delta = (msg + ctr)->b_delta;
    outArray[ctr]["BDelta"] = factory.createScalar(currentElement_b_delta);
    }
    return std::move(outArray);
  } 
class CUSTOM_MSGS_EXPORT custom_msgs_PoseCtrl_message : public ROSMsgElementInterfaceFactory {
  public:
    virtual ~custom_msgs_PoseCtrl_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType type);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType type);
    virtual std::shared_ptr<MATLABRosbagWriterInterface> generateRosbagWriterInterface(ElementType type);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          custom_msgs_PoseCtrl_message::generatePublisherInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSPublisherImpl<custom_msgs::PoseCtrl,custom_msgs_msg_PoseCtrl_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         custom_msgs_PoseCtrl_message::generateSubscriberInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSSubscriberImpl<custom_msgs::PoseCtrl,custom_msgs::PoseCtrl::ConstPtr,custom_msgs_msg_PoseCtrl_common>>();
  }
#include "ROSbagTemplates.hpp" 
  std::shared_ptr<MATLABRosbagWriterInterface>
         custom_msgs_PoseCtrl_message::generateRosbagWriterInterface(ElementType type){
    if(type != eMessage){
        throw std::invalid_argument("Wrong input, Expected eMessage");
    }
    return std::make_shared<ROSBagWriterImpl<custom_msgs::PoseCtrl,custom_msgs_msg_PoseCtrl_common>>();
  }
#include "register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(custom_msgs_msg_PoseCtrl_common, MATLABROSMsgInterface<custom_msgs::PoseCtrl>)
CLASS_LOADER_REGISTER_CLASS(custom_msgs_PoseCtrl_message, ROSMsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1