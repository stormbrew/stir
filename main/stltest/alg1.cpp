#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <iostream>
#include <algorithm>

#ifdef MAIN 
#define alg1_test main
#endif
#endif
int alg1_test(int, char**)
{
  std::cout<<"Results of alg1_test:"<<std::endl;
  int i = std::min(4, 7);
  std::cout << "min(4, 7) = " << i << std::endl;
  char c = std::max('a', 'z');
  std::cout << "max('a', 'z') = " << c << std::endl;
  return 0;
}
