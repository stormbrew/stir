#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <algorithm>
#include <vector>
#include <iostream>
#include "iota.h"

#ifdef MAIN 
#define search1_test main
#endif
#endif
int search1_test(int, char**)
{
  std::cout<<"Results of search1_test:"<<std::endl;
  typedef std::vector <int> IntVec;
  IntVec v1(10);
  iota(v1.begin(), v1.end(), 0);
  IntVec v2(3);
  iota(v2.begin(), v2.end(), 50);
  std::ostream_iterator <int> iter(std::cout, " ");

  std::cout << "v1: ";
  std::copy(v1.begin(), v1.end(), iter);
  std::cout << std::endl;
  std::cout << "v2: ";
  std::copy(v2.begin(), v2.end(), iter);
  std::cout << std::endl;

  IntVec::iterator location;
  location = std::search(v1.begin(), v1.end(), v2.begin(), v2.end());

  if(location == v1.end())
    std::cout << "v2 not contained in v1" << std::endl;
  else
    std::cout << "Found v2 in v1 at offset: " << location - v1.begin() << std::endl;

  iota(v2.begin(), v2.end(), 4);
  std::cout << "v1: ";
  std::copy(v1.begin(), v1.end(), iter);
  std::cout << std::endl;
  std::cout << "v2: ";
  std::copy(v2.begin(), v2.end(), iter);
  std::cout << std::endl;

  location = std::search(v1.begin(), v1.end(), v2.begin(), v2.end());

  if(location == v1.end())
    std::cout << "v2 not contained in v1" << std::endl;
  else
    std::cout << "Found v2 in v1 at offset: " << location - v1.begin() << std::endl;

  return 0;
}
