from typing import List

import rclpy
from rclpy.node import Node
from std_msgs.msg import Int64, Int64MultiArray


def get_prime_divisors(n: int) -> List[int]:
    if n < 2:
        return []
    result = []
    d = 2
    while d * d <= n:
        if n % d == 0:
            result.append(d)
            while n % d == 0:
                n //= d
        d += 1
    if n > 1:
        result.append(n)
    return result


class PrimeDivisorsSubscriber(Node):

    def __init__(self):
        super().__init__('prime_divisors_subscriber')
        self.subscription = self.create_subscription(
            Int64,
            'even_numbers',
            self.listener_callback,
            10
        )
        self.publisher_ = self.create_publisher(
            Int64MultiArray,
            'prime_divisors',
            10
        )
        self.get_logger().info('Subscribed to even_numbers, publishing to prime_divisors')

    def listener_callback(self, msg: Int64):
        number = msg.data
        divisors = get_prime_divisors(number)
        out_msg = Int64MultiArray()
        out_msg.data = divisors
        self.publisher_.publish(out_msg)
        self.get_logger().info(f'{number} -> prime divisors: {divisors}')


def main(args=None):
    rclpy.init(args=args)
    node = PrimeDivisorsSubscriber()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()