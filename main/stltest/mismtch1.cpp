#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <vector>
#include <algorithm>
#include <iostream>
#include "iota.h"

#ifdef MAIN 
#define mismtch1_test main
#endif
#endif
int mismtch1_test(int, char**)
{
  std::cout<<"Results of mismtch1_test:"<<std::endl;
  typedef std::vector<int> IntVec;
  IntVec v1(10);
  IntVec v2(v1.size());
  iota(v1.begin(), v1.end(), 0);
  iota(v2.begin(), v2.end(), 0);
  std::pair <IntVec::iterator, IntVec::iterator> result =
      std::mismatch(v1.begin(), v1.end(), v2.begin());
  if(result.first == v1.end() && result.second == v2.end())
    std::cout << "v1 and v2 are the same" << std::endl;
  else
    std::cout << "mismatch at index: " <<(result.first - v1.begin()) << std::endl;
  v2[v2.size()/2] = 42;
  result = std::mismatch(v1.begin(), v1.end(), v2.begin());
  if(result.first == v1.end() && result.second == v2.end())
    std::cout << "v1 and v2 are the same" << std::endl;
  else
    std::cout << "mismatch at index: " <<(result.first - v1.begin()) << std::endl;
  return 0;
}
