#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <iostream>
#include <list>

#ifdef MAIN 
#define list2_test main
#endif
#endif
int list2_test(int, char**)
{
  std::cout<<"Results of list2_test:"<<std::endl;
int array1 [] = { 1, 16 };
int array2 [] = { 4, 9 };

  std::list<int> l1(array1, array1 + 2);
  std::list<int> l2(array2, array2 + 2);
  std::list<int>::iterator i = l1.begin();
  i++;
  l1.splice(i, l2, l2.begin(), l2.end());
  i = l1.begin();
  while(i != l1.end())
    std::cout << *i++ << std::endl;
  return 0;
}
