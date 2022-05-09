#include "include/point.h"

#include "cmath"

Point::Point(const double x, const double y) : x_{x}, y_{y} {}

double Point::CalculateNorm() const {
  return std::sqrt(std::pow(x_, 2) + std::pow(y_, 2));
}
