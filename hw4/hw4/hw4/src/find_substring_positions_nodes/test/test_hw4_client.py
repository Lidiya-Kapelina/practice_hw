import rclpy
from rclpy.action import ActionClient

from find_substring_positions_interfaces.action import FindSubstringPositions
from find_substring_positions_nodes.find_substring_positions_client import FindSubstringPositionsClient
from find_substring_positions_nodes.find_substring_positions_server import FindSubstringPositionsServer


def test_client_creation():
    rclpy.init()
    client = FindSubstringPositionsClient("ababa", "aba")
    assert client.get_name() == "find_substring_positions_client"
    client.destroy_node()
    rclpy.shutdown()


def test_client_work():
    rclpy.init()

    server = FindSubstringPositionsServer()
    client_node = FindSubstringPositionsClient("ababa", "aba")

    action_client = ActionClient(client_node, FindSubstringPositions, "find_substring_positions")
    action_client.wait_for_server(timeout_sec=2.0)

    goal = FindSubstringPositions.Goal()
    goal.text = "ababa"
    goal.substring = "aba"

    send_goal_future = action_client.send_goal_async(goal)
    for _ in range(100):
        rclpy.spin_once(server, timeout_sec=0.01)
        rclpy.spin_once(client_node, timeout_sec=0.01)
        if send_goal_future.done():
            break

    goal_handle = send_goal_future.result()
    assert goal_handle.accepted

    result_future = goal_handle.get_result_async()
    for _ in range(200):
        rclpy.spin_once(server, timeout_sec=0.01)
        rclpy.spin_once(client_node, timeout_sec=0.01)
        if result_future.done():
            break

    result = result_future.result().result
    assert list(result.positions) == [1, 3]

    server.destroy_node()
    client_node.destroy_node()
    rclpy.shutdown()
