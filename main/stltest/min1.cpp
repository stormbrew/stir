#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <algorithm>
#include <iostream>

#ifdef MAIN 
#define min1_test main
#endif
#endif
int min1_test(int, char**)
{
  std::cout<<"Results of min1_test:"<<std::endl;
  std::cout << std::min(42, 100) << std::endl;
  return 0;
}
