#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <iostream>
#include <list>

#ifdef MAIN 
#define list3_test main
#endif
#endif
int list3_test(int, char**)
{
  std::cout<<"Results of list3_test:"<<std::endl;
char array [] = { 'x', 'l', 'x', 't', 's', 's' };

  std::list<char> str(array, array + 6);
  std::list<char>::iterator i;
  std::cout << "original: ";
  for(i = str.begin(); i != str.end(); i++)
    std::cout << *i;
  std::cout << std::endl;
  std::cout << "reversed: ";
  str.reverse();
  for(i = str.begin(); i != str.end(); i++)
    std::cout << *i;
  std::cout << std::endl;
  std::cout << "removed: ";
  str.remove('x');
  for(i = str.begin(); i != str.end(); i++)
    std::cout << *i;
  std::cout << std::endl;
  std::cout << "uniqued: ";
  str.unique();
  for(i = str.begin(); i != str.end(); i++)
    std::cout << *i;
  std::cout << std::endl;
  std::cout << "sorted: ";
  str.sort();
  for(i = str.begin(); i != str.end(); i++)
    std::cout << *i;
  std::cout << std::endl;
  return 0;
}
