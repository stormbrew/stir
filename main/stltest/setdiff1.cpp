#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <algorithm>
#include <vector>
#include <iostream>
#include "iota.h"

#ifdef MAIN 
#define setdiff1_test main
#endif
#endif
int setdiff1_test(int, char**)
{
  std::cout<<"Results of setdiff1_test:"<<std::endl;
  std::vector <int> v1(10);
  iota(v1.begin(), v1.end(), 0);
  std::vector <int> v2(10);
  iota(v2.begin(), v2.end(), 7);
  std::ostream_iterator <int> iter(std::cout, " ");
  std::cout << "v1: ";
  std::copy(v1.begin(), v1.end(), iter);
  std::cout << "\nv2: ";
  std::copy(v2.begin(), v2.end(), iter);
  std::cout << std::endl;
  std::set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), iter);
  std::cout << std::endl;
  return 0;
}
