#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <algorithm>
#include <functional>
#include <iostream>

#ifdef MAIN 
#define sort2_test main
#endif
#endif
int sort2_test(int, char**)
{
  std::cout<<"Results of sort2_test:"<<std::endl;
int array[] = { 1, 50, -10, 11, 42, 19 };

  // leave count non-const to avoid bug on VAC++ 4.0
  int count = sizeof(array) / sizeof(array[0]);
  std::ostream_iterator <int> iter(std::cout, " ");
  std::cout << "before: ";
  std::copy(array, array + count, iter);
  std::cout << "\nafter: ";
  std::sort(array, array + count, std::greater<int>());
  std::copy(array, array + count, iter);
  std::cout << std::endl;
  return 0;
}
