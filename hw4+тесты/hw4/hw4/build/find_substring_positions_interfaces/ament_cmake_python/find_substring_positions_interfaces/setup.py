from setuptools import find_packages
from setuptools import setup

setup(
    name='find_substring_positions_interfaces',
    version='0.0.1',
    packages=find_packages(
        include=('find_substring_positions_interfaces', 'find_substring_positions_interfaces.*')),
)
