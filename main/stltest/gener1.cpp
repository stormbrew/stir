#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <algorithm>
#include <iostream>
#include <cstdlib>

#include "fadapter.h"

#ifdef MAIN 
#define gener1_test main
#endif
#endif

static  int cxxrand() { return std::rand();}

int gener1_test(int, char**)
{
  std::cout<<"Results of gener1_test:"<<std::endl;
  int numbers[10];
  std::generate(numbers, numbers + 10, cxxrand);

  for(int i = 0; i < 10; i++)
    std::cout << numbers[i] << ' ';
  std::cout << std::endl;
  return 0;
}
