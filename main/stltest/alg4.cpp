#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <iostream>
#include <vector>
#include <algorithm>

#ifdef MAIN 
#define alg4_test main
#endif
#endif
int alg4_test(int, char**)
{
  std::cout<<"Results of alg4_test:"<<std::endl;
  std::vector<int> years;
  years.push_back(1962);
  years.push_back(1992);
  years.push_back(2001);
  years.push_back(1999);
  std::sort(years.begin(), years.end());
  std::vector<int>::const_iterator i;
  for(i = years.begin(); i != years.end(); i++)
    std::cout << *i << std::endl;
  return 0;
}
