#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <algorithm>
#include <vector>
#include <iostream>

#ifdef MAIN 
#define lwrbnd1_test main
#endif
#endif
int lwrbnd1_test(int, char**)
{
  std::cout<<"Results of lwrbnd1_test:"<<std::endl;
  std::vector <int> v1(20);
  for(int i = 0; i < v1.size(); i++)
  {
    v1[i] = i/4;
    std::cout << v1[i] << ' ';
  }
  std::vector <int>::iterator location =  std::lower_bound(v1.begin(), v1.end(), 3);
  std::cout
    << "\n3 can be inserted at index: "
    <<(location - v1.begin())
    << std::endl;
  return 0;
}
