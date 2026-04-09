from setuptools import find_packages, setup

package_name = 'find_substring_positions_nodes'

setup(
    name=package_name,
    version='0.0.1',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages', ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='user',
    maintainer_email='li@example.com',
    description='Action server/client for substring search (HW4).',
    license='Apache-2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'find_substring_positions_server = find_substring_positions_nodes.find_substring_positions_server:main',
            'find_substring_positions_client = find_substring_positions_nodes.find_substring_positions_client:main',
        ],
    },
)
