#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <algorithm>
#include <iostream>

#ifdef MAIN 
#define merge0_test main
#endif
#endif
int merge0_test(int, char**)
{
  std::cout<<"Results of merge0_test:"<<std::endl;
int numbers1[5] = { 1, 6, 13, 25, 101 };
int numbers2[5] = {-5, 26, 36, 46, 99 };

  int result[10];
  std::merge((int*)numbers1, (int*)numbers1 + 5, (int*)numbers2, (int*)numbers2 + 5, (int*)result);
  for(int i = 0; i < 10; i++)
    std::cout << result[i] << ' ';
  std::cout << std::endl;
  return 0;
}
