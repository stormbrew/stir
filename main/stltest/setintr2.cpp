#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <algorithm>
#include <functional>
#include <iostream>
#include <cstring>

#ifdef MAIN 
#define setintr2_test main
#endif
#endif
int setintr2_test(int, char**)
{
  std::cout<<"Results of setintr2_test:"<<std::endl;
  const char* word1 = "ABCDEFGHIJKLMNO";
  const char* word2 = "LMNOPQRSTUVWXYZ";

  std::ostream_iterator <char> iter(std::cout, " ");
  std::cout << "word1: ";
  std::copy(word1, word1 + std::strlen(word1), iter);
  std::cout << "\nword2: ";
  std::copy(word2, word2 + std::strlen(word2), iter);
  std::cout << std::endl;
  std::set_intersection(word1, word1 + std::strlen(word1),
                    word2, word2 + std::strlen(word2),
                    iter,
                    std::less<char>());
  std::cout << std::endl;
  return 0;
}
