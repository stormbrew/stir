#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <iostream>
#include <vector>

#ifdef MAIN 
#define bvec1_test main
#endif
#endif

int bvec1_test(int, char**)
{
  bool ii[3]= {1,0,1};
  std::cout<<"Results of bvec1_test:"<<std::endl;
  std::vector<bool> b(3);
  int i;
  for(i = 0; i < b.size(); i++)
    std::cout << b[i];
  std::cout << std::endl;
  b[0] = b[2] = 1;
  for(i = 0; i < b.size(); i++)
    std::cout << b[i];
  std::cout << std::endl;
  b.insert(b.begin(),(bool*)ii, ii+2);
  for(i = 0; i < b.size(); i++)
    std::cout << b[i];
  std::cout << std::endl;
  return 0;
}
