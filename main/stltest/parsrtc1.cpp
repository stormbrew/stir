#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <algorithm>
#include <iostream>
#include <vector>
#include <cstdlib>

#ifdef MAIN 
#define parsrtc1_test main
#endif
#endif
int parsrtc1_test(int, char**)
{
  std::cout<<"Results of parsrtc1_test:"<<std::endl;
  std::vector <int> v1(10);
  for(int i = 0; i < v1.size(); i++)
    v1[i] = std::rand() % 10;
  std::vector <int> result(5);
  std::ostream_iterator<int> iter(std::cout, " ");
  std::copy(v1.begin(), v1.end(), iter);
  std::cout << std::endl;
  std::partial_sort_copy(v1.begin(),
                     v1.end(),
                     result.begin(),
                     result.end());
  std::copy(result.begin(), result.end(), iter);
  std::cout << std::endl;
  return 0;
}
