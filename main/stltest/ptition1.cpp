#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <algorithm>
#include <functional>
#include <iostream>
#include <vector>
#include <cstdlib>

#ifdef MAIN 
#define ptition1_test main
#endif
#endif
int ptition1_test(int, char**)
{
  std::cout<<"Results of ptition1_test:"<<std::endl;
  std::vector <int> v1(10);
  for(int i = 0; i < v1.size(); i++)
    v1[i] = std::rand() % 20;
  std::ostream_iterator <int> iter(std::cout, " ");
  std::copy(v1.begin(), v1.end(), iter);
  std::cout << std::endl;
  std::partition(v1.begin(), v1.end(), std::bind2nd(std::less<int>(), 11));
  std::copy(v1.begin(), v1.end(), iter);
  std::cout << std::endl;
  return 0;
}
