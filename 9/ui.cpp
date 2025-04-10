#include <iostream>

#include "alg.hpp"
int main() {
  size_t N{};
  std::cout << "Input the size of the arrray: ";
  std::cin >> N;
  std::vector<double> numbers(N);
  std::cout << std::endl << "Input the array: ";
  for (int i = 0; i < N; ++i) {
    std::cin >> numbers[i];
  }
  std::pair<int, int> edges = alg<double>(numbers);
  std::cout << std::endl
            << "The desired sequence is from " << edges.first << " to "
            << edges.second - 1 << " element: ";
  for (int i = edges.first; i < edges.second; ++i) {
    std::cout << numbers[i] << ' ';
  }
  return 1;
}