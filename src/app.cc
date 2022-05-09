#include <iostream>

#include "include/point.h"

int main(int argc, char **argv) {
  Point pt{2, 3};
  std::cout << "Norm is " << pt.calculate_norm() << '\n';
  return 0;
}
