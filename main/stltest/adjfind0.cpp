#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <algorithm>
#include <iostream>

#ifdef MAIN 
#define adjfind0_test main
#endif
#endif
int adjfind0_test(int, char**)
{
  std::cout<<"Results of adjfind0_test:"<<std::endl;
int numbers1 [5] = { 1, 2, 4, 8, 16 };
int numbers2 [5] = { 5, 3, 2, 1, 1 };

  int* location = std::adjacent_find((int*)numbers1, (int*)numbers1 + 5);

  if(location != numbers1 + 5)
    std::cout
      << "Found adjacent pair of: "
      << *location
      << " at offset "
      <<(location - numbers1)
      << std::endl;
  else
    std::cout << "No adjacent pairs" << std::endl;
  location = std::adjacent_find((int*)numbers2, (int*)numbers2 + 5);
  if(location != numbers2 + 5)
    std::cout
      << "Found adjacent pair of: "
      << *location
      << " at offset "
      <<(location - numbers2)
      << std::endl;
  else
    std::cout << "No adjacent pairs" << std::endl;
  return 0;
}
