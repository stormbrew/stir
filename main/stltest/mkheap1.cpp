#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <algorithm>
#include <iostream>
#include <functional>

#ifdef MAIN 
#define mkheap1_test main
#endif
#endif
int mkheap1_test(int, char**)
{
  std::cout<<"Results of mkheap1_test:"<<std::endl;
int numbers[6] = { 5, 10, 4, 13, 11, 19 };

  std::make_heap(numbers, numbers + 6, std::greater<int>());
  for(int i = 6; i >= 1; i--)
  {
    std::cout << numbers[0] << std::endl;
    std::pop_heap(numbers, numbers + i, std::greater<int>());
  }
  return 0;
}
