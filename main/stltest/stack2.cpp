#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <iostream>
#include <algorithm>
#include <stack>
#include <list>

#ifdef MAIN 
#define stack2_test main
#endif
#endif
int stack2_test(int, char**)
{
  std::cout<<"Results of stack2_test:"<<std::endl;
  std::stack<int, std::list<int> > s;
  s.push(42);
  s.push(101);
  s.push(69);
  while(!s.empty())
  {
    std::cout << s.top() << std::endl;
    s.pop();
  }
  return 0;
}
