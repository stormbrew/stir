#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

#ifdef MAIN 
#define func3_test main
#endif
#endif
int func3_test(int, char**)
{
  std::cout<<"Results of func3_test:"<<std::endl;
  std::vector<int>v;
  v.push_back(4);
  v.push_back(1);
  v.push_back(5);
  std::sort(v.begin(), v.end(), std::greater<int>());
  std::vector<int>::iterator i;
  for(i = v.begin(); i != v.end(); i++)
    std::cout << *i << std::endl;
  return 0;
}
