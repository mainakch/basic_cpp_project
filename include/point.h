#ifndef INCLUDE_POINT_H
#define INCLUDE_POINT_H

class Point {
 public:
  Point(const double x, const double y);
  double CalculateNorm() const;

 private:
  double x_;
  double y_;
};
#endif  // INCLUDE_POINT_H
