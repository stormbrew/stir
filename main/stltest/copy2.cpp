#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <vector>
#include <algorithm>
#include <iostream>

#ifdef MAIN 
#define copy2_test main
#endif
#endif
int copy2_test(int, char**)
{
  std::cout<<"Results of copy2_test:"<<std::endl;
  std::vector <int> v(10);
  for(int i = 0; i < v.size(); i++)
    v[i] = i;
  std::ostream_iterator<int> iter(std::cout, " ");
  std::copy(v.begin(), v.end(), iter);
  std::cout << std::endl;
  return 0;
}
