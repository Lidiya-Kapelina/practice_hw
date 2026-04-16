import rclpy
from std_msgs.msg import Int64, Int64MultiArray

from hw1_pkg.even_number_publisher import EvenNumberPublisher
from hw1_pkg.prime_divisors_subscriber import PrimeDivisorsSubscriber


def cb(actual: dict, msg: Int64MultiArray):
    actual["values"].append(list(msg.data))


def test_subscriber_creation():
    rclpy.init()

    node = PrimeDivisorsSubscriber()
    assert node.get_name() == "prime_divisors_subscriber"

    node.destroy_node()
    rclpy.shutdown()


def test_subscriber_work():
    rclpy.init()

    publisher = EvenNumberPublisher()
    subscriber = PrimeDivisorsSubscriber()

    test_node = rclpy.create_node("test_node")
    actual = {"values": []}

    test_node.create_subscription(
        Int64MultiArray,
        "prime_divisors",
        lambda msg: cb(actual, msg),
        10,
    )

    for _ in range(30):
        rclpy.spin_once(publisher, timeout_sec=1.05)
        rclpy.spin_once(subscriber, timeout_sec=0.2)
        rclpy.spin_once(test_node, timeout_sec=0.2)
        if len(actual["values"]) >= 6:
            break

    assert actual["values"][4] == [2, 5]
    assert actual["values"][5] == [2, 3]

    publisher.destroy_node()
    subscriber.destroy_node()
    test_node.destroy_node()
    rclpy.shutdown()

