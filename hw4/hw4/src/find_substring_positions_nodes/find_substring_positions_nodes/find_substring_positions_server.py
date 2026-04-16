import rclpy
from rclpy.action import ActionServer, GoalResponse
from rclpy.node import Node

from find_substring_positions_interfaces.action import FindSubstringPositions


def find_all_overlapping_positions(text: str, substring: str) -> list[int]:
    """Все вхождения подстроки, включая перекрывающиеся (как последовательные str.find)."""
    positions: list[int] = []
    start = 0
    while True:
        idx = text.find(substring, start)
        if idx == -1:
            break
        positions.append(idx)
        start = idx + 1
    return positions


class FindSubstringPositionsServer(Node):
    """Сервер: для каждого найденного вхождения шлёт feedback с позицией, в result — все позиции."""

    def __init__(self) -> None:
        super().__init__('find_substring_positions_server')
        self._server = ActionServer(
            self,
            FindSubstringPositions,
            'find_substring_positions',
            execute_callback=self.execute_callback,
            goal_callback=self.goal_callback,
        )

    def goal_callback(self, goal_request):
        self.get_logger().info(
            f'Получена цель: text={goal_request.text!r}, substring={goal_request.substring!r}'
        )
        return GoalResponse.ACCEPT

    async def execute_callback(self, goal_handle):
        text = goal_handle.request.text
        substring = goal_handle.request.substring

        if not substring:
            self.get_logger().warn('Пустая подстрока — цель прервана')
            goal_handle.abort()
            result = FindSubstringPositions.Result()
            result.positions = []
            return result

        positions = find_all_overlapping_positions(text, substring)

        for pos in positions:
            feedback = FindSubstringPositions.Feedback()
            feedback.position = pos
            goal_handle.publish_feedback(feedback)
            self.get_logger().info(f'Feedback: позиция {pos}')

        goal_handle.succeed()
        result = FindSubstringPositions.Result()
        result.positions = positions
        self.get_logger().info(f'Итог: позиции {list(result.positions)}')
        return result


def main(args=None) -> None:
    rclpy.init(args=args)
    node = FindSubstringPositionsServer()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
