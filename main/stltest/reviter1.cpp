#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <iostream>
#include <vector>
#include <algorithm>

#ifdef MAIN 
#define reviter1_test main
#endif
#endif
int reviter1_test(int, char**)
{
  std::cout<<"Results of reviter1_test:"<<std::endl;
int array [] = { 1, 5, 2, 3 };

  std::vector<int> v(array, array + 4);
//  typedef reverse_iterator<typename vector<int>::iterator, int, 
//    typename vector<int>::reference, typename vector<int>::difference_type> reviter;
  typedef std::vector<int>::reverse_iterator reviter;
  reviter r(v.end());
  while(!(r ==v.rbegin()))
    std::cout << *r++ << std::endl;
  return 0;
}
