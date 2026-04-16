from setuptools import setup

package_name = 'hw1_pkg'

setup(
    name=package_name,
    version='0.1.0',
    packages=[package_name],
    install_requires=['setuptools'],
    entry_points={
        'console_scripts': [
            'even_number_publisher = hw1_pkg.even_number_publisher:main',
            'prime_divisors_subscriber = hw1_pkg.prime_divisors_subscriber:main',
        ],
    },
)