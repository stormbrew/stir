#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <vector>
#include <numeric>
#include <iostream>

#ifdef MAIN 
#define accum2_test main
#endif
#endif
static int mult(int initial_, int element_)
{
  return initial_ * element_;
}
int accum2_test(int, char**)
{
  std::cout<<"Results of accum2_test:"<<std::endl;

  std::vector <int> v(5);
  for(int i = 0; i < v.size(); i++)
    v[i] = i + 1;
  int prod = std::accumulate(v.begin(), v.end(), 1, mult);
  std::cout << "prod = " << prod << std::endl;
  return 0;
}
