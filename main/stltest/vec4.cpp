#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <iostream>
#include <vector>
#include <algorithm>

#ifdef MAIN 
#define vec4_test main
#endif
#endif
int vec4_test(int, char**)
{
  std::cout<<"Results of vec4_test:"<<std::endl;
  std::vector<int> v(4);
  v[0] = 1;
  v[1] = 4;
  v[2] = 9;
  v[3] = 16;
  std::cout << "front = " << v.front() << std::endl;
  std::cout << "back = " << v.back() << ", size = " << v.size() << std::endl;
  v.push_back(25);
  std::cout << "back = " << v.back() << ", size = " << v.size() << std::endl;
  v.pop_back();
  std::cout << "back = " << v.back() << ", size = " << v.size() << std::endl;
  return 0;
}
