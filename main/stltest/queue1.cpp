#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <iostream>
#include <algorithm>
#include <queue>
#include <list>

#ifdef MAIN 
#define queue1_test main
#endif
#endif
int queue1_test(int, char**)
{
  std::cout<<"Results of queue1_test:"<<std::endl;
  std::queue<int, std::list<int> > q;
  q.push(42);
  q.push(101);
  q.push(69);
  while(!q.empty())
  {
    std::cout << q.front() << std::endl;
    q.pop();
  }
  return 0;
}
