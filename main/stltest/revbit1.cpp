#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <iostream>
#include <algorithm>
#include <list>

#ifdef MAIN 
#define revbit1_test main
#endif
#endif
int revbit1_test(int, char**)
{
  std::cout<<"Results of revbit1_test:"<<std::endl;
int array [] = { 1, 5, 2, 3 };

  std::list<int> v(array, array + 4);
  std::list<int>::reverse_iterator r(v.rbegin());
  while(!(r == v.rend()))
    std::cout << *r++ << std::endl;
  return 0;
}
