#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <algorithm>
#include <iostream>

#ifdef MAIN 
#define remcopy1_test main
#endif
#endif
int remcopy1_test(int, char**)
{
  std::cout<<"Results of remcopy1_test:"<<std::endl;
int numbers[6] = { 1, 2, 3, 1, 2, 3 };
int result[6] = { 0, 0, 0, 0, 0, 0 };

  std::remove_copy((int*)numbers, (int*)numbers + 6, (int*)result, 2);
  for(int i = 0; i < 6; i++)
    std::cout << result[i] << ' ';
  std::cout << std::endl;
  return 0;
}
