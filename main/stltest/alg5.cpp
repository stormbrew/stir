#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <iostream>
#include <deque>
#include <algorithm>

#ifdef MAIN 
#define alg5_test main
#endif
#endif
int alg5_test(int, char**)
{
  std::cout<<"Results of alg5_test:"<<std::endl;
  std::deque<int> years;
  years.push_back(1962);
  years.push_back(1992);
  years.push_back(2001);
  years.push_back(1999);
  std::deque<int>::iterator i;
  for(i = years.begin(); i != years.end(); i++)
    std::cout << *i << std::endl;
  return 0;
}
