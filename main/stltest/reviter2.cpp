#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <iostream>
#include <vector>
#include <algorithm>

#ifdef MAIN 
#define reviter2_test main
#endif
#endif
int reviter2_test(int, char**)
{
  std::cout<<"Results of reviter2_test:"<<std::endl;
int array [] = { 1, 5, 2, 3 };

  std::vector<int> v(array, array + 4);
  std::vector<int>::reverse_iterator r;
  for(r = v.rbegin(); r != v.rend(); r++)
    std::cout << *r << std::endl;
  return 0;
}
