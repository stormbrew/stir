#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <iostream>
#include <vector>
#include <algorithm>

#ifdef MAIN 
#define func1_test main
#endif
#endif
static bool bigger(int i_)
{
  return i_ > 3;
}
int func1_test(int, char**)
{
  std::cout<<"Results of func1_test:"<<std::endl;

  std::vector<int>v;
  v.push_back(4);
  v.push_back(1);
  v.push_back(5);
  int n = std::count_if(v.begin(), v.end(), bigger);
  std::cout << "Number greater than 3 = " << n << std::endl;
  return 0;
}
