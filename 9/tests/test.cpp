#include "alg.hpp"
bool test() {
  std::vector<int> numbers{23, 54, -34, 1, -5, 21,  6,
                              -6, 2,  5,   7, 9,  -20, -3};
  return alg<int>(numbers) == std::pair<int, int>{0, 2};
}
int main() { return !test(); }