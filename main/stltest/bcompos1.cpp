#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL
//  binary_compose is an extension

#include <iostream>
#include <algorithm>
#include <functional>
#include "unary.h"

#ifdef MAIN 
#define bcompos1_test main
#endif
#endif
int bcompos1_test(int, char**)
{
  std::cout<<"Results of bcompos1_test:"<<std::endl;

  int array [6] = { -2, -1, 0, 1, 2, 3 };
  binary_compose<logical_and<bool>, odd, positive> 
    b = binary_compose<logical_and<bool>, odd, positive>
      (std::logical_and<bool>(), odd(), positive());
  int* p = std::find_if((int*)array, (int*)array + 6, b);
  if(p != array + 6)
    std::cout << *p << " is odd and positive" << std::endl;
  return 0;
}
