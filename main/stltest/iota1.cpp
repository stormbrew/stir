#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <algorithm>
#include <iostream>
#include "iota.h"

#ifdef MAIN 
#define iota1_test main
#endif
#endif
int iota1_test(int, char**)
{
  std::cout<<"Results of iota1_test:"<<std::endl;
  int numbers[10];
  iota(numbers, numbers + 10, 42);
  for(int i = 0; i < 10; i++)
    std::cout << numbers[i] << ' ';
  std::cout << std::endl;
  return 0;
}
