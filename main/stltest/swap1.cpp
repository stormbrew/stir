#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <algorithm>
#include <iostream>

#ifdef MAIN 
#define swap1_test main
#endif
#endif
int swap1_test(int, char**)
{
  std::cout<<"Results of swap1_test:"<<std::endl;
  int a = 42;
  int b = 19;
  std::cout << "a = " << a << " b = " << b << std::endl;
  std::swap(a, b);
  std::cout << "a = " << a << " b = " << b << std::endl;
  return 0;
}
