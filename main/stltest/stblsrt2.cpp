#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <algorithm>
#include <iostream>
#include <cstring>

#ifdef MAIN 
#define stblsrt2_test main
#endif
static bool string_less(const char* a_, const char* b_)
{
  return std::strcmp(a_, b_) < 0 ? 1 : 0;
}
#endif
int stblsrt2_test(int, char**)
{
  std::cout<<"Results of stblsrt2_test:"<<std::endl;

  const char* letters[6] = {"bb", "aa", "ll", "dd", "qq", "cc" };

  std::stable_sort(letters, letters + 6, string_less);
  for(int i = 0; i < 6; i++)
    std::cout << letters[i] << ' ';
  std::cout << std::endl;
  return 0;
}
