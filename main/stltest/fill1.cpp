#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <vector>
#include <algorithm>
#include <iostream>

#ifdef MAIN 
#define fill1_test main
#endif
#endif
int fill1_test(int, char**)
{
  std::cout<<"Results of fill1_test:"<<std::endl;
  std::vector <int> v(10);
  std::fill(v.begin(), v.end(), 42);
  for(int i = 0; i < 10; i++)
    std::cout << v[i] << ' ';
  std::cout << std::endl;
  return 0;
}
