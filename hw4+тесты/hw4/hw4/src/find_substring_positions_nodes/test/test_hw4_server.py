import rclpy
from rclpy.action import ActionClient

from find_substring_positions_interfaces.action import FindSubstringPositions
from find_substring_positions_nodes.find_substring_positions_server import FindSubstringPositionsServer


def test_server_creation():
    rclpy.init()

    server = FindSubstringPositionsServer()
    assert server.get_name() == "find_substring_positions_server"

    server.destroy_node()
    rclpy.shutdown()


def test_server_work():
    rclpy.init()

    server = FindSubstringPositionsServer()
    test_node = rclpy.create_node("test_node")
    client = ActionClient(test_node, FindSubstringPositions, "find_substring_positions")

    goal = FindSubstringPositions.Goal()
    goal.text = "ababa"
    goal.substring = "aba"

    client.wait_for_server(timeout_sec=2.0)

    send_goal_future = client.send_goal_async(goal)
    for _ in range(100):
        rclpy.spin_once(server, timeout_sec=0.01)
        rclpy.spin_once(test_node, timeout_sec=0.01)
        if send_goal_future.done():
            break

    goal_handle = send_goal_future.result()
    assert goal_handle is not None
    assert goal_handle.accepted

    result_future = goal_handle.get_result_async()
    for _ in range(200):
        rclpy.spin_once(server, timeout_sec=0.01)
        rclpy.spin_once(test_node, timeout_sec=0.01)
        if result_future.done():
            break

    wrapped = result_future.result()
    assert wrapped is not None
    result = wrapped.result

    assert list(result.positions) == [1, 3]

    server.destroy_node()
    test_node.destroy_node()
    rclpy.shutdown()


def test_server_feedback():
    rclpy.init()

    server = FindSubstringPositionsServer()
    test_node = rclpy.create_node("test_node")
    client = ActionClient(test_node, FindSubstringPositions, "find_substring_positions")

    actual = {"positions": []}

    def feedback_callback(feedback_msg):
        actual["positions"].append(int(feedback_msg.feedback.position))

    goal = FindSubstringPositions.Goal()
    goal.text = "ababa"
    goal.substring = "aba"

    client.wait_for_server(timeout_sec=2.0)

    send_goal_future = client.send_goal_async(goal, feedback_callback=feedback_callback)
    for _ in range(100):
        rclpy.spin_once(server, timeout_sec=0.01)
        rclpy.spin_once(test_node, timeout_sec=0.01)
        if send_goal_future.done():
            break

    goal_handle = send_goal_future.result()
    assert goal_handle is not None
    assert goal_handle.accepted

    result_future = goal_handle.get_result_async()
    for _ in range(200):
        rclpy.spin_once(server, timeout_sec=0.01)
        rclpy.spin_once(test_node, timeout_sec=0.01)
        if result_future.done():
            break

    wrapped = result_future.result()
    assert wrapped is not None
    result = wrapped.result

    assert actual["positions"] == [1, 3]
    assert list(result.positions) == [1, 3]
    assert actual["positions"] == list(result.positions)

    server.destroy_node()
    test_node.destroy_node()
    rclpy.shutdown()
