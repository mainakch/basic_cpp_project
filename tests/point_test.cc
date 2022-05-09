#include "include/point.h"

#include <gtest/gtest.h>

#include <cmath>

TEST(Point, NormCheck) {
  Point pt{1, 0};
  EXPECT_LE(std::abs(pt.CalculateNorm() - 1), 1e-6);
}
