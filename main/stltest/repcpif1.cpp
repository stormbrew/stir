#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <algorithm>
#include <vector>
#include <iostream>

#ifdef MAIN 
#define repcpif1_test main
#endif
static bool odd(int a_)
{
  return a_ % 2;
}
#endif
int repcpif1_test(int, char**)
{
  std::cout<<"Results of repcpif1_test:"<<std::endl;

  std::vector <int> v1(10);
  for(int i = 0; i < v1.size(); i++)
    v1[i] = i % 5;
  std::ostream_iterator <int> iter(std::cout, " ");
  std::copy(v1.begin(), v1.end(), iter);
  std::cout << std::endl;
  std::vector <int> v2(v1.size());
  std::replace_copy_if(v1.begin(), v1.end(), v2.begin(), odd, 42);
  std::copy(v1.begin(), v1.end(), iter);
  std::cout << std::endl;
  std::copy(v2.begin(), v2.end(), iter);
  std::cout << std::endl;
  return 0;
}
