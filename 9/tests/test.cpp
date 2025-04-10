#include "alg.hpp"
bool test() {
  std::array<int,14 > numbers{23,54,-34,1,-5,21,6,-6,2,5,7,9, -20, -3};
  return alg<int, 14>(numbers) == std::pair<int, int>{0,2};
}
int main() { return !test(); }