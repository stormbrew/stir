#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <algorithm>
#include <iostream>

#ifdef MAIN 
#define find1_test main
#endif
#endif
int find1_test(int, char**)
{
  std::cout<<"Results of find1_test:"<<std::endl;
  int years[] = { 1942, 1952, 1962, 1972, 1982, 1992 };

  // leave yearCount non-const to avoid bug on VAC++ 4.0
  unsigned yearCount = sizeof(years) / sizeof(years[0]);
  int* location = std::find((int*)years, (int*)years + yearCount, 1972);
  std::cout << "Found 1972 at offset " <<(location - years) << std::endl;
  return 0;
}
