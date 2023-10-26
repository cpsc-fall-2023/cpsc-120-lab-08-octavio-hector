// Hector Cazares
// HectorCazares255@csu.fullerton.edu
// @HectorCazares255
// Partners: @opalacios44

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};
  if (arguments.size() != 4) {
    std::cout << "error: you must supply three arguments\n";
    return 1;
  }

  std::string first{arguments.at(1)};
  std::string second{arguments.at(2)};
  std::string last{arguments.at(3)};

  std::cout << "Your order:\n";
  std::cout << "A " << first << " sandwich on " << second << " with " << last
            << "\n";
  return 0;
}
