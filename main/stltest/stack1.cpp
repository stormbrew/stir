#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <iostream>
#include <algorithm>
#include <stack>
#include <deque>

#ifdef MAIN 
#define stack1_test main
#endif
#endif
int stack1_test(int, char**)
{
  std::cout<<"Results of stack1_test:"<<std::endl;
  std::stack<int, std::deque<int> > s;
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
