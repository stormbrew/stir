#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <vector>
#include <algorithm>
#include <iostream>
#include "iota.h"

#ifdef MAIN 
#define iterswp1_test main
#endif
#endif
int iterswp1_test(int, char**)
{
  std::cout<<"Results of iterswp1_test:"<<std::endl;
  std::vector <int> v1(6);
  iota(v1.begin(), v1.end(), 0);
  std::iter_swap(v1.begin(), v1.begin() + 3);
  std::ostream_iterator <int> iter(std::cout, " ");
  std::copy(v1.begin(), v1.end(), iter);
  std::cout << std::endl;
  return 0;
}
