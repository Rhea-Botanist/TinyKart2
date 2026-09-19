import rclpy
import sys
from rclpy.node import Node
from .Rosmaster_Lib import Rosmaster

from tk2_msgs.msg import Kartmsg

bot = Rosmaster()

class YahboomDriver(Node):

    def __init__(self):
        super().__init__('yahboom_driver')
        self.publisher_ = self.create_publisher(Kartdata, '/kart_data', 10)
        self.subscription = self.create_subscription(
            Kartmsg,
            '/kart_cmd',
            self.listener_callback,
            10)
        self.subscription        

    def listener_callback(self, msg):
        #grab commands from kart message
        cmd_throttle = msg.throttle
        cmd_steer = msg.steering_angle
        cmd_buzzer = msg.buzzer
        
        self.get_logger().info("Throttle: " + str(cmd_throttle) + "\tSteering: " + str(cmd_steer))

        #set outputs onto kart
        bot.set_motor(cmd_throttle, cmd_throttle, cmd_throttle, cmd_throttle)
        bot.set_pwm_servo(1, cmd_steer)
        bot.set_beep(cmd_buzzer)

        kart_data = Kartdata()
        kart_data.velocity.x, kart_data.velocity.y, kart_data.velocity.z, = bot.get_motion_data()
        kart_data.encoder = bot.get_motor_encoder()
        self.publisher_.publish(kart_data)

        

def main(args=None):
    rclpy.init(args=args)

    yahboom_driver = YahboomDriver()

    rclpy.spin(yahboom_driver)

    yahboom_driver.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
