#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL
//  compose2 is an extension

#include <iostream>
#include <algorithm>
#include <functional>
#include "unary.h"

#ifdef MAIN 
#define bcompos2_test main
#endif
#endif
int bcompos2_test(int, char**)
{
  std::cout<<"Results of bcompos2_test:"<<std::endl;

  int array [6] = { -2, -1 , 0, 1, 2, 3 };
  int* p = std::find_if((int*)array, (int*)array + 6, 
    compose2(std::logical_and<bool>(), odd(), positive()));
  if(p != array + 6)
    std::cout << *p << " is odd and positive" << std::endl;
  return 0;
}
