#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <iostream>
#include <algorithm>
#include "unary.h"

// using namespace std;
#ifdef MAIN 
#define ucompos1_test main
#endif
#endif

int ucompos1_test(int, char**)
{
  std::cout<<"Results of ucompos1_test:"<<std::endl;

int input [3] = { -1, -4, -16 };

  int output [3];
  std::transform((int*)input, (int*)input + 3, (int*)output, 
	    //	    compose1(square_root(), negate<int>()));
  	    unary_compose<square_root, negate<int> >(square_root(), negate<int>()));
  for(int i = 0; i < 3; i++)
    std::cout << output[i] << std::endl;
  return 0;
}
