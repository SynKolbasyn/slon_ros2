# Copyright 2016 Open Source Robotics Foundation, Inc.
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

file(GLOB_RECURSE _python_files FOLLOW_SYMLINKS "*.py")
if(_python_files)
  message(STATUS "Added test 'flake8' to check Python code syntax and style conventions")
  message(STATUS "Configured 'flake8' exclude dirs and/or files: ${AMENT_LINT_AUTO_FILE_EXCLUDE}")
  ament_flake8(EXCLUDE ${AMENT_LINT_AUTO_FILE_EXCLUDE})
endif()
