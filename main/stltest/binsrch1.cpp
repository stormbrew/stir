#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <iostream>
#include <algorithm>

#ifdef MAIN 
#define binsrch1_test main
#endif
#endif
int binsrch1_test(int, char**)
{
  std::cout<<"Results of binsrch1_test:"<<std::endl;
  int vector[100];
  for(int i = 0; i < 100; i++)
    vector[i] = i;
  if(std::binary_search(vector, vector + 100, 42))
    std::cout << "found 42" << std::endl;
  else
    std::cout << "did not find 42" << std::endl;
  return 0;
}
