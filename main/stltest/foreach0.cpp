#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <algorithm>
#include <iostream>

#include "fadapter.h"

#ifdef MAIN 
#define foreach0_test main
#endif
#endif
static void print(int a_)
{
  std::cout << a_ << ' ';
}
int foreach0_test(int, char**)
{
  std::cout<<"Results of foreach0_test:"<<std::endl;

int numbers[10] = { 1, 1, 2, 3, 5, 8, 13, 21, 34, 55 };

  std::for_each(numbers, numbers + 10, ptr_proc(print));
  std::cout << std::endl;
  return 0;
}
