#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <iostream>
#include <vector>
#include <algorithm>

#ifdef MAIN 
#define func2_test main
#endif
#endif
static bool bigger_than(int x_, int y_)
{
  return x_ > y_;
}
int func2_test(int, char**)
{
  std::cout<<"Results of func2_test:"<<std::endl;

  std::vector<int>v;
  v.push_back(4);
  v.push_back(1);
  v.push_back(5);
  std::sort(v.begin(), v.end(), bigger_than);
  std::vector<int>::iterator i;
  for(i = v.begin(); i != v.end(); i++)
    std::cout << *i << std::endl;
  return 0;
}
