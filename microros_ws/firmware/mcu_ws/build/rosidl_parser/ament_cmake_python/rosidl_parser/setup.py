from setuptools import find_packages
from setuptools import setup

setup(
    name='rosidl_parser',
    version='4.0.1',
    packages=find_packages(
        include=('rosidl_parser', 'rosidl_parser.*')),
)
