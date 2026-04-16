from number_converter.srv import RomanToDecimal
from number_converter_py.client import RomanClient
from number_converter_py.server import RomanServer
import rclpy


def test_client_creation():
    rclpy.init()
    client = RomanClient()
    try:
        assert client.get_name() == 'roman_client'
        assert client.client.srv_name == 'roman_to_decimal'
    finally:
        client.destroy_node()
        rclpy.shutdown()


def test_client_valid_request():
    rclpy.init()
    server = RomanServer()
    client = RomanClient()
    actual = {'resp': None}

    def done_callback(future):
        actual['resp'] = future.result()

    try:
        assert client.client.wait_for_service(timeout_sec=2.0)

        req = RomanToDecimal.Request()
        req.roman_numeral = 'XIV'
        future = client.client.call_async(req)
        future.add_done_callback(done_callback)

        rclpy.spin_once(server, timeout_sec=0.2)
        rclpy.spin_until_future_complete(client, future, timeout_sec=2.0)

        assert future.done()
        actual['resp'] = future.result()

        assert actual['resp'] is not None
        assert actual['resp'].decimal_value == 14
    finally:
        client.destroy_node()
        server.destroy_node()
        rclpy.shutdown()


def test_client_invalid_request():
    rclpy.init()
    server = RomanServer()
    client = RomanClient()
    actual = {'resp': None}

    def done_callback(future):
        actual['resp'] = future.result()

    try:
        assert client.client.wait_for_service(timeout_sec=2.0)

        req = RomanToDecimal.Request()
        req.roman_numeral = 'BAD'
        future = client.client.call_async(req)
        future.add_done_callback(done_callback)

        rclpy.spin_once(server, timeout_sec=0.2)
        rclpy.spin_until_future_complete(client, future, timeout_sec=2.0)

        assert future.done()
        actual['resp'] = future.result()

        assert actual['resp'] is not None
        assert actual['resp'].decimal_value == 0
        assert isinstance(actual['resp'].message, str)
    finally:
        client.destroy_node()
        server.destroy_node()
        rclpy.shutdown()
