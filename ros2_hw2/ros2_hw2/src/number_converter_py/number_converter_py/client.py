import sys

from number_converter.srv import RomanToDecimal
import rclpy
from rclpy.node import Node


class RomanClient(Node):
    def __init__(self):
        super().__init__('roman_client')
        self.client = self.create_client(RomanToDecimal, 'roman_to_decimal')

    def send_request(self, roman: str):
        req = RomanToDecimal.Request()
        req.roman_numeral = roman
        future = self.client.call_async(req)
        rclpy.spin_until_future_complete(self, future)
        return future.result()


def main(args=None):
    rclpy.init(args=args)
    node = RomanClient()
    if not node.client.wait_for_service(timeout_sec=5.0):
        node.get_logger().error('Сервис roman_to_decimal недоступен. Запустите сервер.')
        node.destroy_node()
        rclpy.shutdown()
        return

    roman = sys.argv[1] if len(sys.argv) > 1 else 'XIV'
    response = node.send_request(roman)
    if response is not None:
        if response.message:
            node.get_logger().info(response.message)
        else:
            node.get_logger().info(f'{roman} -> {response.decimal_value}')
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
