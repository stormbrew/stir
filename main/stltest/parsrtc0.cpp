#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <algorithm>
#include <iostream>

#ifdef MAIN 
#define parsrtc0_test main
#endif
#endif
int parsrtc0_test(int, char**)
{
  std::cout<<"Results of parsrtc0_test:"<<std::endl;
int numbers[6] = { 5, 2, 4, 3, 1, 6 };

  int result[3];
  std::partial_sort_copy((int*)numbers, (int*)numbers + 6, (int*)result, (int*)result + 3);
  for(int i = 0; i < 3; i++)
    std::cout << result[i] << ' ';
  std::cout << std::endl;
  return 0;
}
