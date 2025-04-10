#ifndef ALG_HPP
#define ALG_HPP
#include<utility>
#include<array>
template <class T, std::size_t N> std::pair<int, int> alg(std::array<T, N> numbers)
{ 
  T capacity = numbers[0];
  T max_capacity = capacity;
  //индексы первого элемента и элемента после последнего элемента искомой последовательности
  int begin{0}, end{1}, max_begin{0}, max_end{1};
  for (int i = 0; i < numbers.size() - 1; ++i) {
    if (numbers[i]<numbers[i+1])
    {
      capacity += numbers[i+1];
      end = i+2;
    } else {
      capacity = numbers[i + 1];
      begin = i + 1;
      end = i + 2;
    }
    if (capacity>max_capacity)
    {
      max_capacity = capacity;
      max_begin = begin;
      max_end = end;
    }
  }
  return std::pair <int, int>{max_begin, max_end};
}
#endif