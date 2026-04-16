import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/li/Downloads/hw4/hw4/install/find_substring_positions_nodes'
