#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <algorithm>
#include <functional>
#include <iostream>

#ifdef MAIN 
#define ptrunf2_test main
#endif
static bool even(int n_)
{
  return(n_ % 2) == 0;
}
#endif
int ptrunf2_test(int, char**)
{
  std::cout<<"Results of ptrunf2_test:"<<std::endl;

int array [3] = { 1, 2, 3 };

  int* p = std::find_if((int*)array, (int*)array + 3, std::ptr_fun(even));
  if(p != array + 3)
    std::cout << *p << " is even" << std::endl;
  return 0;
}
