#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <algorithm>
#include <iostream>
#include <cstring>

#ifdef MAIN 
#define mismtch2_test main
#endif
bool str_equal(const char* a_, const char* b_)
{
  return std::strcmp(a_, b_) == 0 ? 1 : 0;
}
#endif
int mismtch2_test(int, char**)
{
  std::cout<<"Results of mismtch2_test:"<<std::endl;

const unsigned size = 5;
char* n1[size] = { "Brett", "Graham", "Jack", "Mike", "Todd" };

  char* n2[size];
  std::copy(n1, n1 + 5, (char**)n2);
  std::pair <char**, char**> result = std::mismatch((char**)n1, (char**)n1 + size, (char**)n2, str_equal);
  if(result.first == n1 + size && result.second == n2 + size)
    std::cout << "n1 and n2 are the same" << std::endl;
  else
    std::cout << "mismatch at index: " <<(result.first - n1) << std::endl;
  n2[2] = "QED";
  result = std::mismatch((char**)n1, (char**)n1 + size, (char**)n2, str_equal);
  if(result.first == n2 + size && result.second == n2 + size)
    std::cout << "n1 and n2 are the same" << std::endl;
  else
    std::cout << "mismatch at index: " <<(result.first - n1) << std::endl;
  return 0;
}
