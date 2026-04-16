from number_converter.srv import RomanToDecimal
from number_converter_py.server import RomanServer
import rclpy
from rclpy.node import Node


def test_server_creation():
    rclpy.init()
    server = RomanServer()
    try:
        assert server.get_name() == 'roman_server'
        assert server.srv.srv_name == 'roman_to_decimal'
    finally:
        server.destroy_node()
        rclpy.shutdown()


def test_server_valid_request():
    rclpy.init()
    server = RomanServer()
    test_node = Node('test_server_valid_client')
    client = test_node.create_client(RomanToDecimal, 'roman_to_decimal')
    actual = {'resp': None}

    def done_callback(future):
        actual['resp'] = future.result()

    try:
        assert client.wait_for_service(timeout_sec=2.0)

        req = RomanToDecimal.Request()
        req.roman_numeral = 'XIV'
        future = client.call_async(req)
        future.add_done_callback(done_callback)

        rclpy.spin_once(server, timeout_sec=0.2)
        rclpy.spin_until_future_complete(test_node, future, timeout_sec=2.0)

        assert future.done()
        actual['resp'] = future.result()

        assert actual['resp'] is not None
        assert actual['resp'].decimal_value == 14
    finally:
        test_node.destroy_node()
        server.destroy_node()
        rclpy.shutdown()


def test_server_invalid_request():
    rclpy.init()
    server = RomanServer()
    test_node = Node('test_server_invalid_client')
    client = test_node.create_client(RomanToDecimal, 'roman_to_decimal')
    actual = {'resp': None}

    def done_callback(future):
        actual['resp'] = future.result()

    try:
        assert client.wait_for_service(timeout_sec=2.0)

        req = RomanToDecimal.Request()
        req.roman_numeral = 'BAD'
        future = client.call_async(req)
        future.add_done_callback(done_callback)

        rclpy.spin_once(server, timeout_sec=0.2)
        rclpy.spin_until_future_complete(test_node, future, timeout_sec=2.0)

        assert future.done()
        actual['resp'] = future.result()

        assert actual['resp'] is not None
        assert actual['resp'].decimal_value == 0
        assert isinstance(actual['resp'].message, str)
    finally:
        test_node.destroy_node()
        server.destroy_node()
        rclpy.shutdown()
