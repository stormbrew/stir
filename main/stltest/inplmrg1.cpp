#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <algorithm>
#include <iostream>

#ifdef MAIN 
#define inplmrg1_test main
#endif
#endif
int inplmrg1_test(int, char**)
{
  std::cout<<"Results of inplmrg1_test:"<<std::endl;
int numbers[6] = { 1, 10, 42, 3, 16, 32 };

  int i;
  for(i = 0; i < 6; i++)
    std::cout << numbers[i] << ' ';
  std::cout << std::endl;
  std::inplace_merge(numbers, numbers + 3, numbers + 6);
  for(i = 0; i < 6; i++)
    std::cout << numbers[i] << ' ';
  std::cout << std::endl;
  return 0;
}
