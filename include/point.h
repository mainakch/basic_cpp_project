#ifndef POINT_H
#define POINT_H

class Point {
 public:
  Point(const double x, const double y);
  double calculate_norm() const;

 private:
  double x_;
  double y_;
};
#endif
