#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <vector>
#include <algorithm>
#include <iostream>

#ifdef MAIN 
#define filln1_test main
#endif
#endif
int filln1_test(int, char**)
{
  std::cout<<"Results of filln1_test:"<<std::endl;
  std::vector <int> v(10);
  std::fill_n(v.begin(), v.size(), 42);
  for(int i = 0; i < 10; i++)
    std::cout << v[i] << ' ';
  std::cout << std::endl;
  return 0;
}
