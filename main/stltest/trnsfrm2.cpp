#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <algorithm>
#include <iostream>
#include <cstring>

#ifdef MAIN 
#define trnsfrm2_test main
#endif
static char map_char(char a_, int b_)
{
  return char(a_ + b_);
}
#endif
int trnsfrm2_test(int, char**)
{
  std::cout<<"Results of trnsfrm2_test:"<<std::endl;

#if defined (__MVS__)
int trans[] = {-11, 4, -6, -6, -18, 0, 18, -14, 6, 0, -1, -59};
#else
int trans[] = {-4, 4, -6, -6, -10, 0, 10, -6, 6, 0, -1, -77};
#endif
  char n[] = "Larry Mullen";
  const unsigned count = std::strlen(n);
  std::ostream_iterator <char> iter(std::cout);
  std::transform(n, n + count, trans, iter, map_char);
  std::cout << std::endl;
  return 0;
}
