#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <algorithm>
#include <iostream>

#ifdef MAIN 
#define copyb0_test main
#endif
#endif
int copyb0_test(int, char**)
{
  std::cout<<"Results of copyb0_test:"<<std::endl;
int numbers[5] = { 1, 2, 3, 4, 5 };

  int result[5];
  std::copy_backward(numbers, numbers + 5, (int*)result + 5);
  int i;
  for(i = 0; i < 5; i++)
    std::cout << numbers[i] << ' ';
  std::cout << std::endl;
  for(i = 0; i < 5; i++)
    std::cout << result[i] << ' ';
  std::cout << std::endl;
  return 0;
}
