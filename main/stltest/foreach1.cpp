#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <vector>
#include <algorithm>
#include <iostream>

#include "fadapter.h"

#ifdef MAIN 
#define foreach1_test main
#endif
#endif
static void print_sqr(int a_)
{
  std::cout << a_ * a_ << " ";
}
int foreach1_test(int, char**)
{
  std::cout<<"Results of foreach1_test:"<<std::endl;

  std::vector <int> v1(10);
  for(int i = 0; i < v1.size(); i++)
    v1[i] = i;
  std::for_each(v1.begin(), v1.end(), ptr_proc(print_sqr) );
  std::cout << std::endl;
  return 0;
}
