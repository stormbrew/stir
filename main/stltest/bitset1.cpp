#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <iostream>
#include <bitset>
#include <algorithm>

#ifdef MAIN 
#define bitset1_test main
#endif
#endif
int bitset1_test(int, char**)
{
  std::cout<<"Results of bitset1_test:"<<std::endl;
  std::bitset<13U> b1(0xFFFF);
  std::bitset<13U> b2(0x1111);
  std::cout << "b1 size = " << b1.size() << std::endl;
  std::cout << "b1 = "<<b1<<std::endl;
  std::cout << "b2 size = " << b2.size() << std::endl;
  std::cout << "b2 = "<<b2<<std::endl;
  b1 = b1^(b2<<2);
  std::cout << "b1 = "<<b1<<std::endl;
  return 0;
}
