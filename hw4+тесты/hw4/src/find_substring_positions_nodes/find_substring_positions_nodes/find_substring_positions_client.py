import argparse
import sys

import rclpy
from action_msgs.msg import GoalStatus
from rclpy.action import ActionClient
from rclpy.node import Node
from rclpy.utilities import remove_ros_args

from find_substring_positions_interfaces.action import FindSubstringPositions


def parse_cli_args() -> argparse.Namespace:
    parser = argparse.ArgumentParser(
        description='Отправляет на action-сервер строку и подстроку; печатает feedback и результат.',
    )
    parser.add_argument(
        'text',
        help='Строка, в которой ищем вхождения (в кавычках, если есть пробелы).',
    )
    parser.add_argument('substring', help='Искомая подстрока.')
    argv = remove_ros_args(sys.argv)
    return parser.parse_args(argv[1:])


class FindSubstringPositionsClient(Node):
    """Клиент: отправляет строку и подстроку, печатает feedback и итоговый массив позиций."""

    def __init__(self, text: str, substring: str) -> None:
        super().__init__('find_substring_positions_client')
        self._client = ActionClient(self, FindSubstringPositions, 'find_substring_positions')
        self._text = text
        self._substring = substring

    def feedback_callback(self, feedback_msg):
        pos = feedback_msg.feedback.position
        self.get_logger().info(f'Feedback: позиция {pos}')

    def run_once(self) -> None:
        self._client.wait_for_server()

        goal = FindSubstringPositions.Goal()
        goal.text = self._text
        goal.substring = self._substring

        self.get_logger().info(f'Отправка цели: text={goal.text!r}, substring={goal.substring!r}')

        send_future = self._client.send_goal_async(goal, feedback_callback=self.feedback_callback)
        rclpy.spin_until_future_complete(self, send_future)
        goal_handle = send_future.result()

        if not goal_handle.accepted:
            self.get_logger().error('Цель отклонена')
            return

        result_future = goal_handle.get_result_async()
        rclpy.spin_until_future_complete(self, result_future)
        wrapped = result_future.result()
        status = wrapped.status
        result = wrapped.result

        if status == GoalStatus.STATUS_SUCCEEDED:
            self.get_logger().info(f'Результат: позиции {list(result.positions)}')
        else:
            self.get_logger().warn(f'Статус завершения: {status}, позиции {list(result.positions)}')


def main(args=None) -> None:
    cli = parse_cli_args()
    rclpy.init(args=args)
    node = FindSubstringPositionsClient(cli.text, cli.substring)
    try:
        node.run_once()
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
