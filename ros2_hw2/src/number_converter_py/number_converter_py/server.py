import rclpy
from rclpy.node import Node
from number_converter.srv import RomanToDecimal

INVALID_INPUT = 'некорректный ввод'


class RomanServer(Node):
    def __init__(self):
        super().__init__('roman_server')
        self.srv = self.create_service(
            RomanToDecimal,
            'roman_to_decimal',
            self.callback,
        )

    def callback(self, request, response):
        s = request.roman_numeral.strip().upper()
        value, message = self.roman_to_decimal(s)
        response.decimal_value = int(value)
        response.message = message
        if message:
            self.get_logger().info(f'"{request.roman_numeral}": {message}')
        else:
            self.get_logger().info(f'"{request.roman_numeral}" -> {response.decimal_value}')
        return response

    def roman_to_decimal(self, s: str) -> tuple[int, str]:
        roman_map = {'I': 1, 'V': 5, 'X': 10, 'L': 50, 'C': 100, 'D': 500, 'M': 1000}
        if not s:
            return 0, INVALID_INPUT
        for c in s:
            if c not in roman_map:
                return 0, INVALID_INPUT
        result = 0
        n = len(s)
        for i in range(n):
            if i < n - 1 and roman_map[s[i]] < roman_map[s[i + 1]]:
                result -= roman_map[s[i]]
            else:
                result += roman_map[s[i]]
        return result, ''


def main(args=None):
    rclpy.init(args=args)
    node = RomanServer()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
