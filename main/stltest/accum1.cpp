#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <vector>
#include <numeric>
#include <iostream>

#ifdef MAIN 
#define accum1_test main
#endif
#endif

int accum1_test(int, char**)
{
  std::cout<<"Results of accum1_test:"<<std::endl;
  std::vector <int> v(5);
  for(int i = 0; i < v.size(); i++)
    v[i] = i + 1;
  int sum = std::accumulate(v.begin(), v.end(), 0);
  std::cout << "sum = " << sum << std::endl;
  return 0;
}
