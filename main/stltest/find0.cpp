#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <algorithm>
#include <iostream>

#ifdef MAIN 
#define find0_test main
#endif
#endif
int find0_test(int, char**)
{
  std::cout<<"Results of find0_test:"<<std::endl;
int numbers[10] = { 0, 1, 4, 9, 16, 25, 36, 49, 64 };

  int* location;
  location = std::find((int*)numbers, (int*)numbers + 10, 25);
  std::cout << "Found 25 at offset " <<(location - numbers) << std::endl;
  return 0;
}
