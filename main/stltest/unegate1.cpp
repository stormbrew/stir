#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <iostream>
#include <algorithm>
#include "unary.h"

#ifdef MAIN 
#define unegate1_test main
#endif
#endif
int unegate1_test(int, char**)
{
  std::cout<<"Results of unegate1_test:"<<std::endl;

int array [3] = { 1, 2, 3 };

  int* p = std::find_if((int*)array, (int*)array + 3, std::unary_negate<odd>(odd()));
  if(p != array + 3)
    std::cout << *p << std::endl;
  return 0;
}
