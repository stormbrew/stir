#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <iostream>
#include <functional>
#include <algorithm>

#ifdef MAIN 
#define ptrunf1_test main
#endif
bool even(int n_)
{
  return(n_ % 2) == 0;
}
#endif
int ptrunf1_test(int, char**)
{
  std::cout<<"Results of ptrunf1_test:"<<std::endl;

int array [3] = { 1, 2, 3 };

  int* p = std::find_if((int*)array, (int*)array + 3, 
    std::pointer_to_unary_function<int, bool>(even));
  if(p != array + 3)
    std::cout << *p << " is even" << std::endl;
  return 0;
}
