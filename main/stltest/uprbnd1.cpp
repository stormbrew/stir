#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <algorithm>
#include <iostream>

#ifdef MAIN 
#define uprbnd1_test main
#endif
#endif
int uprbnd1_test(int, char**)
{
  std::cout<<"Results of uprbnd1_test:"<<std::endl;
  int array[20];
  for(int i = 0; i < 20; i++)
  {
    array[i] = i/4;
    std::cout << array[i] << ' ';
  }
  std::cout
    << "\n3 can be inserted at index: "
    <<(std::upper_bound((int*)array, (int*)array + 20, 3) - array)
    << std::endl;
  return 0;
}
