#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <iostream>
#include <deque>
#include <algorithm>

#ifdef MAIN 
#define finsert2_test main
#endif
#endif
int finsert2_test(int, char**)
{
  std::cout<<"Results of finsert2_test:"<<std::endl;
  const char* array [] = { "laurie", "jennifer", "leisa" };

  std::deque<const char*> names;
  std::copy(array, array + 3, std::front_inserter(names));
  std::deque<const char*>::iterator i;
  for(i = names.begin(); i != names.end(); i++)
    std::cout << *i << std::endl;
  return 0;
}
