#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <algorithm>
#include <iostream>

#ifdef MAIN 
#define equal0_test main
#endif
#endif
int equal0_test(int, char**)
{
  std::cout<<"Results of equal0_test:"<<std::endl;
int numbers1[5] = { 1, 2, 3, 4, 5 };
int numbers2[5] = { 1, 2, 4, 8, 16 };
int numbers3[2] = { 1, 2 };

  if(std::equal(numbers1, numbers1 + 5, numbers2))
    std::cout << "numbers1 is equal to numbers2" << std::endl;
  else
    std::cout << "numbers1 is not equal to numbers2" << std::endl;
  if(std::equal(numbers3, numbers3 + 2, numbers1))
    std::cout << "numbers3 is equal to numbers1" << std::endl;
  else
    std::cout << "numbers3 is not equal to numbers1" << std::endl;
  return 0;
}
