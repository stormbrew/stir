#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <algorithm>
#include <iostream>

#ifdef MAIN 
#define eqlrnge0_test main
#endif
#endif
int eqlrnge0_test(int, char**)
{
  std::cout<<"Results of eqlrnge0_test:"<<std::endl;
  int numbers[10] = { 0, 0, 1, 1, 2, 2, 2, 2, 3, 3 };

  std::pair <int*, int*> range = std::equal_range((int*)numbers, (int*)numbers + 10, 2);
  std::cout
    << "2 can be inserted from before index "
    <<(range.first - numbers)
    << " to before index "
    <<(range.second - numbers)
    << std::endl;
  return 0;
}
