#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <vector>
#include <algorithm>
#include <iostream>
#include "iota.h"

#ifdef MAIN 
#define nextprm1_test main
#endif
#endif
int nextprm1_test(int, char**)
{
  std::cout<<"Results of nextprm1_test:"<<std::endl;
  std::vector <int> v1(3);
  iota(v1.begin(), v1.end(), 0);
  std::ostream_iterator<int> iter(std::cout, " ");
  std::copy(v1.begin(), v1.end(), iter);
  std::cout << std::endl;
  for(int i = 0; i < 9; i++)
  {
    std::next_permutation(v1.begin(), v1.end());
    std::copy(v1.begin(), v1.end(), iter);
    std::cout << std::endl;
  }
  return 0;
}
