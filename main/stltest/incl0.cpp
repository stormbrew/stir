#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <iostream>
#include <algorithm>

#ifdef MAIN 
#define incl0_test main
#endif
#endif
int incl0_test(int, char**)
{
  std::cout<<"Results of incl0_test:"<<std::endl;
int numbers1[5] = { 1, 2, 3, 4, 5 };
int numbers2[5] = { 1, 2, 4, 8, 16 };
int numbers3[2] = { 4, 8 };

  if(std::includes(numbers1, numbers1 + 5, numbers3, numbers3 + 2))
    std::cout << "numbers1 includes numbers3" << std::endl;
  else
    std::cout << "numbers1 does not include numbers3" << std::endl;
  if(std::includes(numbers2, numbers2 + 5, numbers3, numbers3 + 2))
    std::cout << "numbers2 includes numbers3" << std::endl;
  else
    std::cout << "numbers2 does not include numbers3" << std::endl;
  return 0;
}
