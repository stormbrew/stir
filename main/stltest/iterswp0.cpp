#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <algorithm>
#include <iostream>

#ifdef MAIN 
#define iterswp0_test main
#endif
#endif
int iterswp0_test(int, char**)
{
  std::cout<<"Results of iterswp0_test:"<<std::endl;
int numbers[6] = { 0, 1, 2, 3, 4, 5 };

  std::iter_swap(numbers, numbers + 3);
  for(int i = 0; i < 6; i++)
    std::cout << numbers[i] << ' ';
  std::cout << std::endl;
  return 0;
}
