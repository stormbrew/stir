#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <iostream>
#include <algorithm>
#include <deque>
#include <queue>

#ifdef MAIN 
#define pqueue1_test main
#endif
#endif
int pqueue1_test(int, char**)
{
  std::cout<<"Results of pqueue1_test:"<<std::endl;
  std::priority_queue<int, std::deque<int>, std::less<int> > q;
  q.push(42);
  q.push(101);
  q.push(69);
  while(!q.empty())
  {
    std::cout << q.top() << std::endl;
    q.pop();
  }
  return 0;
}
