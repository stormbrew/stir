#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <algorithm>
#include <iostream>

#ifdef MAIN 
#define ostmit_test main
#endif
#endif
int ostmit_test(int, char**)
{
  std::cout<<"Results of ostmit_test:"<<std::endl;
int array [] = { 1, 5, 2, 4 };

  const char* string = "hello";
  std::ostream_iterator<char> it1(std::cout);
  std::copy(string, string + 5, it1);
  std::cout << std::endl;
  std::ostream_iterator<int> it2(std::cout);
  std::copy(array, array + 4, it2);
  std::cout << std::endl;
  return 0;
}
