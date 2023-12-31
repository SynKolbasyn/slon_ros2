# Copyright 2014 Open Source Robotics Foundation, Inc.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# copied from ament_cmake_core/ament_cmake_core-extras.cmake

include("${ament_cmake_core_DIR}/core/all.cmake" NO_POLICY_SCOPE)

# Add AMENT_IGNORE to CMAKE_BINARY_DIR to avoid picking up cmake specific folders created by
# CLion in `colcon build` and `colcon test` commands
file(WRITE ${CMAKE_BINARY_DIR}/AMENT_IGNORE "")

