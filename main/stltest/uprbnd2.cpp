#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <algorithm>
#include <iostream>
#include <cstring>

#ifdef MAIN 
#define uprbnd2_test main
#endif
static bool char_str_less(const char* a_, const char* b_)
{
  return std::strcmp(a_, b_) < 0 ? 1 : 0;
}
#endif
int uprbnd2_test(int, char**)
{
  std::cout<<"Results of uprbnd2_test:"<<std::endl;

  const char* str [] = { "a", "a", "b", "b", "q", "w", "z" };

  const unsigned strCt = sizeof(str)/sizeof(str[0]);
  // DEC C++ generates incorrect template instatiation code 
  // for "d" so must cast 
  std::cout
    << "d can be inserted at index: "
    << (std::upper_bound((const char**)str,  (const char**)str + strCt,
                         (const char *)"d", char_str_less) - str)
    << std::endl;
  return 0;
}
