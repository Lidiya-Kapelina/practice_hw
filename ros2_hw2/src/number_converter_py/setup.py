from setuptools import find_packages
from setuptools import setup

package_name = 'number_converter_py'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='li',
    maintainer_email='li@todo.todo',
    description='Roman numeral service client/server',
    license='Apache-2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'roman_server = number_converter_py.server:main',
            'roman_client = number_converter_py.client:main',
        ],
    },
)