import rclpy
from rclpy.node import Node
from std_msgs.msg import Int64


class EvenNumberPublisher(Node):
    def __init__(self):
        super().__init__('even_number_publisher')
        self.publisher_ = self.create_publisher(Int64, 'even_numbers', 10)

        self.declare_parameter('N', 20)
        self.n = self.get_parameter('N').get_parameter_value().integer_value

        self.current_number = 2
        self.timer = self.create_timer(1.0, self.timer_callback)

        self.get_logger().info(f'Publishing even numbers from 2 to {self.n}')

    def timer_callback(self):
        if self.current_number <= self.n:
            msg = Int64()
            msg.data = self.current_number
            self.publisher_.publish(msg)
            self.get_logger().info(f'Published: {self.current_number}')
            self.current_number += 2
        else:
            self.get_logger().info('Finished publishing all even numbers')
            self.timer.cancel()


def main(args=None):
    rclpy.init(args=args)
    node = EvenNumberPublisher()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()