#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <algorithm>
#include <vector>
#include <iostream>
#include "iota.h"

#ifdef MAIN 
#define rndshuf1_test main
#endif
#endif
int rndshuf1_test(int, char**)
{
  std::cout<<"Results of rndshuf1_test:"<<std::endl;
  std::vector <int> v1(10);
  iota(v1.begin(), v1.end(), 0);
  std::ostream_iterator <int> iter(std::cout, " ");
  std::copy(v1.begin(), v1.end(), iter);
  std::cout << std::endl;
  for(int i = 0; i < 3; i++)
  {
    std::random_shuffle(v1.begin(), v1.end());
    std::copy(v1.begin(), v1.end(), iter);
    std::cout << std::endl;
  }
  return 0;
}
