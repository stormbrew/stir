#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <algorithm>
#include <vector>
#include <iostream>
#include "iota.h"

#ifdef MAIN 
#define rotate1_test main
#endif
#endif
int rotate1_test(int, char**)
{
  std::cout<<"Results of rotate1_test:"<<std::endl;
  std::vector <int> v1(10);
  iota(v1.begin(), v1.end(), 0);
  std::ostream_iterator <int> iter(std::cout, " ");
  std::copy(v1.begin(), v1.end(), iter);
  std::cout << std::endl;
  for(int i = 0; i < v1.size(); i++)
  {
    std::rotate(v1.begin(), v1.begin() + i, v1.end());
    std::ostream_iterator <int> iter(std::cout, " ");
    std::copy(v1.begin(), v1.end(), iter);
    std::cout << std::endl;
  }
  std::cout << std::endl;
  return 0;
}
