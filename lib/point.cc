#include "point.h"

#include "cmath"

Point::Point(const double x, const double y) : x_{x}, y_{y} {}

double Point::calculate_norm() const {
  return std::sqrt(std::pow(x_, 2) + std::pow(y_, 2));
}
