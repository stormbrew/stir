#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <iostream>
#include <algorithm>

#ifdef MAIN 
#define alg2_test main
#endif
#endif
int alg2_test(int, char**)
{
  std::cout<<"Results of alg2_test:"<<std::endl;
  int i [] = { 1, 4, 2, 8, 2, 2 };

  int n = std::count(i, i + 6, 2);
  std::cout << "Count of 2s = " << n << std::endl;
  return 0;
}
