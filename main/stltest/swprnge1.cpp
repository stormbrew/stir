#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <algorithm>
#include <iostream>
#include <cstring>

#ifdef MAIN 
#define swprnge1_test main
#endif
#endif
int swprnge1_test(int, char**)
{
  std::cout<<"Results of swprnge1_test:"<<std::endl;
  char word1[] = "World";
  char word2[] = "Hello";
  std::cout << word1 << " " << word2 << std::endl;
  std::swap_ranges((char*)word1, (char*)word1 + std::strlen(word1), (char*)word2);
  std::cout << word1 << " " << word2 << std::endl;
  return 0;
}
