from setuptools import find_packages
from setuptools import setup

setup(
    name='rosidl_adapter',
    version='4.0.1',
    packages=find_packages(
        include=('rosidl_adapter', 'rosidl_adapter.*')),
)
