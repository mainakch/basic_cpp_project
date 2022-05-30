#include <boost/program_options.hpp>
#include <cereal/archives/json.hpp>
#include <iostream>

#include "include/point.h"

int main(int argc, char **argv) {
  namespace po = boost::program_options;

  po::options_description description("Usage:");

  // clang-format off
  description.add_options()
    ("help,h", "Display this help message")
    ("verbosity,v", "Display the verbosity number")
    ("number_of_lines,n", po::value<int>()->default_value(1), "Number of lines to print out");
  // clang-format on

  po::variables_map vm;
  po::store(po::command_line_parser(argc, argv).options(description).run(), vm);
  po::notify(vm);

  if (vm.count("help")) {
    std::cout << description;
    return 0;
  }

  Point pt{2, 3};
  for (int ct = 0; ct < vm["number_of_lines"].as<int>(); ++ct) {
    {
      cereal::JSONOutputArchive ar(std::cout);
      std::cout << "Point is ";
      ar(CEREAL_NVP(pt));
    }
    std::cout << '\n';
    std::cout << "Norm is " << pt.CalculateNorm() << '\n';
  }
  return 0;
}
