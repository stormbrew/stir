#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <algorithm>
#include <iostream>

#ifdef MAIN 
#define rotcopy0_test main
#endif
#endif
int rotcopy0_test(int, char**)
{
  std::cout<<"Results of rotcopy0_test:"<<std::endl;
int numbers[6] = { 0, 1, 2, 3, 4, 5 };

  int result[6];
  std::rotate_copy((int*)numbers, (int*)numbers + 3, (int*)numbers + 6, (int*)result);
  for(int i = 0; i < 6; i++)
    std::cout << result[i] << ' ';
  std::cout << std::endl;
  return 0;
}
