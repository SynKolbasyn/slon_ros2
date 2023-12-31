// Copyright 2015 Open Source Robotics Foundation, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef RCL__COMMON_H_
#define RCL__COMMON_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include "rcl/types.h"

/// Convenience function for converting common rmw_ret_t return codes to rcl.
rcl_ret_t
rcl_convert_rmw_ret_to_rcl_ret(rmw_ret_t rmw_ret);

/// Convenience function for converting common rcutils_ret_t return codes to rcl.
rcl_ret_t
rcl_convert_rcutils_ret_to_rcl_ret(rcutils_ret_t rcutils_ret);

#ifdef __cplusplus
}
#endif

#endif  // RCL__COMMON_H_
