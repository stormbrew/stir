#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <iostream>
#include <vector>
#include <algorithm>

#ifdef MAIN 
#define vec8_test main
#endif
#endif
int vec8_test(int, char**)
{
  std::cout<<"Results of vec8_test:"<<std::endl;
  std::vector<int> v;
  std::cout << "capacity = " << v.capacity() << std::endl;
  v.push_back(42);
  std::cout << "capacity = " << v.capacity() << std::endl;
  v.reserve(5000);
  std::cout << "capacity = " << v.capacity() << std::endl;
  return 0;
}
