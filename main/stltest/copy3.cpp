#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <vector>
#include <algorithm>
#include <iostream>

#ifdef MAIN 
#define copy3_test main
#endif
#endif
int copy3_test(int, char**)
{
  std::cout<<"Results of copy3_test:"<<std::endl;
  std::vector <int> v1(10);
  for(int i = 0; i < v1.size(); i++)
    v1[i] = i;
  std::vector <int> v2(10);
  std::copy(v1.begin(), v1.end(), v2.begin());
  std::ostream_iterator<int> iter(std::cout, " ");
  std::copy(v2.begin(), v2.end(), iter);
  std::cout << std::endl;
  return 0;
}
