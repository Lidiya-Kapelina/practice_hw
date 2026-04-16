import rclpy
from std_msgs.msg import Int64

from hw1_pkg.even_number_publisher import EvenNumberPublisher


def callback(actual: dict, msg: Int64):
    actual["values"].append(int(msg.data))


def test_publisher_creation():
    rclpy.init()

    publisher = EvenNumberPublisher()
    assert publisher.get_name() == "even_number_publisher"

    publisher.destroy_node()
    rclpy.shutdown()


def test_publisher_work():
    rclpy.init()

    publisher = EvenNumberPublisher()

    test_node = rclpy.create_node("test_node")
    actual = {"values": []}

    test_node.create_subscription(
        Int64,
        "even_numbers",
        lambda msg: callback(actual, msg),
        10,
    )

    for _ in range(20):
        rclpy.spin_once(publisher, timeout_sec=1.05)
        rclpy.spin_once(test_node, timeout_sec=0.2)
        if len(actual["values"]) >= 6:
            break

    assert actual["values"][4] == 10
    assert actual["values"][5] == 12

    publisher.destroy_node()
    test_node.destroy_node()
    rclpy.shutdown()


