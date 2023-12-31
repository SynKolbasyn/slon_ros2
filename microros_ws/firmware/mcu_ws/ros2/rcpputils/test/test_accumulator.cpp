// Copyright 2020 PAL Robotics SL.
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

// To get M_PI on Windows.

#ifdef _MSC_VER
#ifndef _USE_MATH_DEFINES
#define _USE_MATH_DEFINES
#endif
#endif

#include <cmath>
#include <memory>

#include "gtest/gtest.h"

#include "rcpputils/rolling_mean_accumulator.hpp"

TEST(TestAccumulator, test_accumulator)
{
  constexpr double THRESHOLD = 1e-12;
  rcpputils::RollingMeanAccumulator<double> accum(4);

  accum.accumulate(1.);
  EXPECT_NEAR(1., accum.getRollingMean(), THRESHOLD);

  accum.accumulate(1.);
  EXPECT_NEAR(1., accum.getRollingMean(), THRESHOLD);

  accum.accumulate(5.);
  EXPECT_NEAR(7. / 3., accum.getRollingMean(), THRESHOLD);

  accum.accumulate(5.);
  EXPECT_NEAR(12. / 4., accum.getRollingMean(), THRESHOLD);

  // Start removing old values
  accum.accumulate(5.);
  EXPECT_NEAR(16. / 4., accum.getRollingMean(), THRESHOLD);

  accum.accumulate(5.);
  EXPECT_NEAR(20. / 4., accum.getRollingMean(), THRESHOLD);
}

TEST(TestAccumulator, spam_accumulator)
{
  constexpr double THRESHOLD = 1e-12;
  rcpputils::RollingMeanAccumulator<double> accum(10);
  for (int i = 0; i < 10000; ++i) {
    accum.accumulate(M_PI);
    EXPECT_NEAR(M_PI, accum.getRollingMean(), THRESHOLD);
  }
}
