#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <vector>
#include <algorithm>
#include <iostream>

#ifdef MAIN 
#define copyb_test main
#endif
#endif
int copyb_test(int, char**)
{
  std::cout<<"Results of copyb_test:"<<std::endl;
  std::vector <int> v1(10);
  for(int i = 0; i < v1.size(); i++)
    v1[i] = i;
  std::vector <int> v2(v1.size());
  std::copy_backward(v1.begin(), v1.end(), v2.end());
  std::ostream_iterator<int> iter(std::cout, " ");
  std::copy(v2.begin(), v2.end(), iter);
  std::cout << std::endl;
  return 0;
}
