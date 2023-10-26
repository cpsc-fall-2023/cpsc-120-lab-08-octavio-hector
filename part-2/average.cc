// Hector Cazares
// HectorCazares255@csu.fullerton.edu
// @HectorCazares255
// Partners: @opalacios44

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};
  if (arguments.size() < 2) {
    std::cout << "error: you must supply at least one number\n";
    return 1;
  }

  double sum = 0.0;
  bool first = true;
  for (std::string& wish : arguments) {
    if (first) {
      first = false;
    } else {
      sum += std::stod(wish);
    }
  }

  double average = (sum / (static_cast<int>(arguments.size()) - 1));
  std::cout << "average = " << average << "\n.";
  return 0;
}
