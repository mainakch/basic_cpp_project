///
/// \file point.h
/// This file contains various classes representing points in 2D and 3D space
///
#ifndef INCLUDE_POINT_H
#define INCLUDE_POINT_H
#include "cereal/cereal.hpp"

///
/// Class representing a 2D Point
///
/// This class represents a 2D point with various methods relevant to
/// geometrical operations on the point
///
class Point {
 public:
  Point(const double x, const double y);
  ///
  /// Calculate distance from origin
  ///
  /// @return distance from origin
  ///
  double CalculateNorm() const;

 private:
  friend class cereal::access;
  double x_;  ///< x coordinate
  double y_;  ///< y coordinate

  template <class Archive>
  void serialize(Archive& ar, std::uint32_t const version) {
    ar(x_, y_);
  }
};
#endif  // INCLUDE_POINT_H
