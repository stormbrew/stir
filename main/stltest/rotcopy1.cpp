#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <algorithm>
#include <vector>
#include <iostream>
#include "iota.h"

#ifdef MAIN 
#define rotcopy1_test main
#endif
#endif
int rotcopy1_test(int, char**)
{
  std::cout<<"Results of rotcopy1_test:"<<std::endl;
  std::vector <int> v1(10);
  iota(v1.begin(), v1.end(), 0);
  std::ostream_iterator <int> iter(std::cout, " ");
  std::copy(v1.begin(), v1.end(), iter);
  std::cout << std::endl;
  std::vector <int> v2(v1.size());
  for(int i = 0; i < v1.size(); i++)
  {
    std::rotate_copy(v1.begin(),
                 v1.begin() + i,
                 v1.end(),
                 v2.begin());
    std::ostream_iterator <int> iter(std::cout, " ");
    std::copy(v2.begin(), v2.end(), iter);
    std::cout << std::endl;
  }
  std::cout << std::endl;
  return 0;
}
