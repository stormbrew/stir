#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <algorithm>
#include <functional>
#include <iostream>
#include <vector>
#include "iota.h"

#ifdef MAIN 
#define nextprm2_test main
#endif
#endif
int nextprm2_test(int, char**)
{
  std::cout<<"Results of nextprm2_test:"<<std::endl;
  std::vector <char> v1(3);
  iota(v1.begin(), v1.end(), 'A');
  std::ostream_iterator<char> iter(std::cout);
  std::copy(v1.begin(), v1.end(), iter);
  std::cout << std::endl;
  for(int i = 0; i < 9; i++)
  {
    std::next_permutation(v1.begin(), v1.end(), std::less<char>());
    std::copy(v1.begin(), v1.end(), iter);
    std::cout << std::endl;
  }
  return 0;
}
