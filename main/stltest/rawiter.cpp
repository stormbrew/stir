#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <algorithm>
#include <iostream>

#ifdef MAIN 
#define rawiter_test main
#endif
#include "rawiter.hpp"
#endif

int rawiter_test(int, char**)
{
  std::cout<<"Results of rawiter_test:"<<std::endl;

  std::allocator<X> a;
  std::allocator<X>::pointer save_p, p = a.allocate(5); 
  save_p=p;
  std::raw_storage_iterator<X*, X> r(p);
  int i;
  for(i = 0; i < 5; i++)
    *r++ = X(i);
  for(i = 0; i < 5; i++)
    std::cout << *p++ << std::endl;
  a.deallocate(save_p,5);
  return 0;
}
