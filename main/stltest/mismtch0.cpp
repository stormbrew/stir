#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <algorithm>
#include <iostream>

#ifdef MAIN 
#define mismtch0_test main
#endif
#endif
int mismtch0_test(int, char**)
{
  std::cout<<"Results of mismtch0_test:"<<std::endl;
int n1[5] = { 1, 2, 3, 4, 5 };
int n2[5] = { 1, 2, 3, 4, 5 };
int n3[5] = { 1, 2, 3, 2, 1 };

  std::pair <int*, int*> result = std::mismatch((int*)n1, (int*)n1 + 5, (int*)n2);
  if(result.first ==(n1 + 5) && result.second ==(n2 + 5))
    std::cout << "n1 and n2 are the same" << std::endl;
  else
    std::cout << "Mismatch at offset: " <<(result.first - n1) << std::endl;
  result = std::mismatch((int*)n1, (int*)n1 + 5, (int*)n3);
  if(result.first ==(n1 + 5) && result.second ==(n3 + 5))
    std::cout << "n1 and n3 are the same" << std::endl;
  else
    std::cout << "Mismatch at offset: " <<(result.first - n1) << std::endl;
  return 0;
}
