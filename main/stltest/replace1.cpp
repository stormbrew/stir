#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <algorithm>
#include <vector>
#include <iostream>

#ifdef MAIN 
#define replace1_test main
#endif
#endif
int replace1_test(int, char**)
{
  std::cout<<"Results of replace1_test:"<<std::endl;
  std::vector <int> v1(10);
  for(int i = 0; i < v1.size(); i++)
    v1[i] = i % 5;
  std::ostream_iterator <int> iter(std::cout, " ");
  std::copy(v1.begin(), v1.end(), iter);
  std::cout << std::endl;
  std::replace(v1.begin(), v1.end(), 2, 42);
  std::copy(v1.begin(), v1.end(), iter);
  std::cout << std::endl;
  return 0;
}
