#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <algorithm>
#include <iostream>

#ifdef MAIN 
#define revcopy1_test main
#endif
#endif
int revcopy1_test(int, char**)
{
  std::cout<<"Results of revcopy1_test:"<<std::endl;
int numbers[6] = { 0, 1, 2, 3, 4, 5 };

  int result[6];
  std::reverse_copy((int*)numbers, (int*)numbers + 6, (int*)result);
  int i;
  for(i = 0; i < 6; i++)
    std::cout << numbers[i] << ' ';
  std::cout << std::endl;
  for(i = 0; i < 6; i++)
    std::cout << result[i] << ' ';
  std::cout << std::endl;
  return 0;
}
