#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <algorithm>
#include <vector>
#include <iostream>

#ifdef MAIN 
#define replif1_test main
#endif
static bool odd(int a_)
{
  return a_ % 2;
}
#endif
int replif1_test(int, char**)
{
  std::cout<<"Results of replif1_test:"<<std::endl;

  std::vector <int> v1(10);
  int i;
  for(i = 0; i < v1.size(); i++)
  {
    v1[i] = i % 5;
    std::cout << v1[i] << ' ';
  }
  std::cout << std::endl;
  std::replace_if(v1.begin(), v1.end(), odd, 42);
  for(i = 0; i < v1.size(); i++)
    std::cout << v1[i] << ' ';
  std::cout << std::endl;
  return 0;
}
