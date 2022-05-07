#include <gtest/gtest.h>

#include <cmath>

#include "point.h"

TEST(Point, NormCheck) {
  Point pt{1, 0};
  EXPECT_LE(std::abs(pt.calculate_norm() - 1), 1e-6);
}
