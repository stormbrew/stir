#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <iostream>
#include <deque>
#include <algorithm>

#ifdef MAIN 
#define insert2_test main
#endif
#endif
int insert2_test(int, char**)
{
  std::cout<<"Results of insert2_test:"<<std::endl;
  const char* array1 [] = { "laurie", "jennifer", "leisa" };
  const char* array2 [] = { "amanda", "saskia", "carrie" };

  std::deque<const char*> names(array1, array1 + 3);
  std::deque<const char*>::iterator i = names.begin() + 2;
  std::copy(array2, array2 + 3, std::inserter(names, i));
  std::deque<const char*>::iterator j;
  for(j = names.begin(); j != names.end(); j++)
    std::cout << *j << std::endl;
  return 0;
}
