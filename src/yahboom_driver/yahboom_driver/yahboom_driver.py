import rclpy
from rclpy.node import Node
from Rosmaster_Lib import Rosmaster

from tk2_msgs.msg import Kartmsg

bot = Rosmaster()

class YahboomDriver(Node):

    def __init__(self):
        super().__init__('yahboom_driver')
        self.subscription = self.create_subscription(
            Kartmsg,
            '/kart_cmd',
            self.listener_callback,
            10)
        self.subscription

    def listener_callback(self, msg):
        kart_buzzer = msg.buzzer
        kart_throttle = msg.throttle
        kart_steer = msg.steering_angle
        
        self.get_logger().info("Throttle: " + str(kart_throttle) + "\tSteering: " + str(kart_steer))

        bot.set_motor(kart_throttle, kart_throttle, kart_throttle, kart_throttle)
        bot.set_pwm_servo(1, kart_steer)
        bot.set_beep(kart_buzzer)

def main(args=None):
    rclpy.init(args=args)

    yahboom_driver = YahboomDriver()

    rclpy.spin(yahboom_driver)

    yahboom_driver.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
