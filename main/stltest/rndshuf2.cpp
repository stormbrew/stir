#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <algorithm>
#include <vector>
#include <iostream>
#include "rand.h"
#include "iota.h"

#ifdef MAIN 
#define rndshuf2_test main
#endif
#endif

int rndshuf2_test(int, char**)
{
  std::cout<<"Results of rndshuf2_test:"<<std::endl;

  std::vector <int> v1(10);
  iota(v1.begin(), v1.end(), 0);
  std::ostream_iterator <int> iter(std::cout, " ");
  std::copy(v1.begin(), v1.end(), iter);
  std::cout << std::endl;
  MyRandomGenerator r;
  for(int i = 0; i < 3; i++)
  {
    std::random_shuffle(v1.begin(), v1.end(), r);
    std::copy(v1.begin(), v1.end(), iter);
    std::cout << std::endl;
  }
  return 0;
}
