#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <algorithm>
#include <iostream>

#ifdef MAIN 
#define max1_test main
#endif
#endif
int max1_test(int, char**)
{
  std::cout<<"Results of max1_test:"<<std::endl;
  std::cout << std::max(42, 100) << std::endl;
  return 0;
}
