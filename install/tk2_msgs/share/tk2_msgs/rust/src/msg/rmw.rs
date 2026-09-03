#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "tk2_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__tk2_msgs__msg__Kartmsg() -> *const std::ffi::c_void;
}

#[link(name = "tk2_msgs__rosidl_generator_c")]
extern "C" {
    fn tk2_msgs__msg__Kartmsg__init(msg: *mut Kartmsg) -> bool;
    fn tk2_msgs__msg__Kartmsg__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Kartmsg>, size: usize) -> bool;
    fn tk2_msgs__msg__Kartmsg__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Kartmsg>);
    fn tk2_msgs__msg__Kartmsg__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Kartmsg>, out_seq: *mut rosidl_runtime_rs::Sequence<Kartmsg>) -> bool;
}

// Corresponds to tk2_msgs__msg__Kartmsg
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Kartmsg {

    // This member is not documented.
    #[allow(missing_docs)]
    pub throttle: i64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub steering_angle: i64,

}



impl Default for Kartmsg {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !tk2_msgs__msg__Kartmsg__init(&mut msg as *mut _) {
        panic!("Call to tk2_msgs__msg__Kartmsg__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Kartmsg {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { tk2_msgs__msg__Kartmsg__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { tk2_msgs__msg__Kartmsg__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { tk2_msgs__msg__Kartmsg__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Kartmsg {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Kartmsg where Self: Sized {
  const TYPE_NAME: &'static str = "tk2_msgs/msg/Kartmsg";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__tk2_msgs__msg__Kartmsg() }
  }
}


