#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <iostream>
#include <slist>

#ifdef MAIN 
#define slist1_test main
#endif
#endif

int slist1_test(int, char**)
{
  std::cout<<"Results of slist1_test:"<<std::endl;
char array [] = { 'x', 'l', 'x', 't', 's', 's' };
  std::ostream_iterator<char> o(std::cout,"");
  slist<char> str(array, array + 6);
  std::slist<char>::iterator i;
  std::cout << "original: ";
  std::copy(str.begin(), str.end(),o);
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
