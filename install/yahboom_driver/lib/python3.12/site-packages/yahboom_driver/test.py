import time
import rclpy
from yahboom_driver.yahboom_driver.Rosmaster_Lib import Rosmaster
from rclpy.node import Node
from std_msgs.msg import String


bot = Rosmaster()

bot.set_pwm_servo_all(90, 90, 90, 90)
time.sleep(2)
bot.set_motor(50, 50, 50, 50)
time.sleep(2)
bot.set_motor(-50, -50, -50, -50)
time.sleep(2)
bot.set_motor(0, 0, 0, 0)