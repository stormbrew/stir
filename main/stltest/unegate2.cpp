#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <iostream>
#include <algorithm>
#include "unary.h"

#ifdef MAIN 
#define unegate2_test main
#endif
#endif
int unegate2_test(int, char**)
{
  std::cout<<"Results of unegate2_test:"<<std::endl;

int array [3] = { 1, 2, 3 };

  int* p = std::find_if((int*)array, (int*)array + 3, std::not1(odd()));
  if(p != array + 3)
    std::cout << *p << std::endl;
  return 0;
}
