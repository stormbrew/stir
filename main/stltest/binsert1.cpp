#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

#ifdef MAIN 
#define binsert1_test main
#endif
#endif
int binsert1_test(int, char**)
{
  std::cout<<"Results of binsert1_test:"<<std::endl;
  const char* array [] = { "laurie", "jennifer", "leisa" };

  std::vector<const char*> names;
  std::copy(array, array + 3,
            std::back_insert_iterator<std::vector <const char*> >(names));
  std::vector<const char*>::iterator i;
  for(i = names.begin(); i != names.end(); i++)
    std::cout << *i << std::endl;
  return 0;
}
