#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <iostream>
#include <list>

#ifdef MAIN 
#define list1_test main
#endif
#endif
int list1_test(int, char**)
{
  std::cout<<"Results of list1_test:"<<std::endl;
int array1 [] = { 9, 16, 36 };
int array2 [] = { 1, 4 };

  std::list<int> l1(array1, array1 + 3);
  std::list<int> l2(array2, array2 + 2);
  std::list<int>::iterator i1 = l1.begin();
  l1.splice(i1, l2);
  std::list<int>::iterator i2 = l1.begin();
  while(i2 != l1.end())
    std::cout << *i2++ << std::endl;
  return 0;
}
