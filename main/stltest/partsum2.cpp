#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <algorithm>
#include <functional>
#include <iostream>
#include <numeric>
#include <vector>
#include "iota.h"

#ifdef MAIN 
#define partsum2_test main
#endif
#endif
int partsum2_test(int, char**)
{
  std::cout<<"Results of partsum2_test:"<<std::endl;
  std::vector <int> v1(5);
  iota(v1.begin(), v1.end(), 1);
  std::vector <int> v2(v1.size());
  std::partial_sum(v1.begin(), v1.end(), v2.begin(), std::multiplies<int>());
  std::ostream_iterator <int> iter(std::cout, " ");
  std::copy(v1.begin(), v1.end(), iter);
  std::cout << std::endl;
  std::copy(v2.begin(), v2.end(), iter);
  std::cout << std::endl;
  return 0;
}
