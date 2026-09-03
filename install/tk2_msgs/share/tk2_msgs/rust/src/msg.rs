#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to tk2_msgs__msg__Kartmsg

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Kartmsg::default())
  }
}

impl rosidl_runtime_rs::Message for Kartmsg {
  type RmwMsg = super::msg::rmw::Kartmsg;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        throttle: msg.throttle,
        steering_angle: msg.steering_angle,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      throttle: msg.throttle,
      steering_angle: msg.steering_angle,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      throttle: msg.throttle,
      steering_angle: msg.steering_angle,
    }
  }
}


