#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <iostream>
#include <algorithm>
#include <list>

#ifdef MAIN 
#define revbit2_test main
#endif
#endif
int revbit2_test(int, char**)
{
  std::cout<<"Results of revbit2_test:"<<std::endl;
int array [] = { 1, 5, 2, 3 };

  std::list<int> v(array, array + 4);
  std::list<int>::reverse_iterator r;
  for(r = v.rbegin(); !(r == v.rend()); r++)
    std::cout << *r << std::endl;
  return 0;
}
