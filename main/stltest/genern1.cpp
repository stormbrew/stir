#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <vector>
#include <algorithm>
#include <iostream>
#include <cstdlib>

#include "fadapter.h"

#ifdef MAIN 
#define genern1_test main
#endif
#endif


static int cxxrand() { return std::rand();}

int genern1_test(int, char**)
{
  std::cout<<"Results of genern1_test:"<<std::endl;

  std::vector <int> v1(10);

  std::generate_n(v1.begin(), v1.size(), ptr_gen(cxxrand));

  for(int i = 0; i < 10; i++)
    std::cout << v1[i] << ' ';
  std::cout << std::endl;

  return 0;
}
