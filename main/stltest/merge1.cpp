#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <vector>
#include <algorithm>
#include <iostream>
#include "iota.h"

#ifdef MAIN 
#define merge1_test main
#endif
#endif
int merge1_test(int, char**)
{
  std::cout<<"Results of merge1_test:"<<std::endl;
  std::vector <int> v1(5);
  std::vector <int> v2(v1.size());
  iota(v1.begin(), v1.end(), 0);
  iota(v2.begin(), v2.end(), 3);
  std::vector <int> result(v1.size() + v2.size());
  std::merge(v1.begin(), v1.end(), v2.begin(), v2.end(), result.begin());
  std::ostream_iterator <int> iter(std::cout, " ");
  std::copy(v1.begin(), v1.end(), iter);
  std::cout << std::endl;
  std::copy(v2.begin(), v2.end(), iter);
  std::cout << std::endl;
  std::copy(result.begin(), result.end(), iter);
  std::cout << std::endl;
  return 0;
}
