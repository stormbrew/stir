#ifndef SINGLE
//  An adapted ObjectSpace example for use with SGI STL

#include <algorithm>
#include <iostream>
#include <cstring>

#ifdef MAIN 
#define search2_test main
#endif
static bool str_equal(const char* a_, const char* b_)
{
  return std::strcmp(a_, b_) == 0 ? 1 : 0;
}
#endif
int search2_test(int, char**)
{
  std::cout<<"Results of search2_test:"<<std::endl;

  const char* grades[] = { "A", "B", "C", "D", "F" };
  const char* letters[] = { "Q", "E", "D" };

  const unsigned gradeCount = sizeof(grades) / sizeof(grades[0]);
  const unsigned letterCount = sizeof(letters) / sizeof(letters[0]);
  std::ostream_iterator <const char*> iter(std::cout, " ");
  std::cout << "grades: ";
  std::copy(grades, grades + gradeCount, iter);
  std::cout << "\nletters:";
  std::copy(letters, letters + letterCount, iter);
  std::cout << std::endl;

  const char** location =
    std::search((const char**)grades, (const char**)grades + gradeCount,
            (const char**)letters, (const char**)letters + letterCount,
            str_equal);

  if(location == grades + gradeCount)
    std::cout << "letters not found in grades" << std::endl;
  else
    std::cout << "letters found in grades at offset: " << location - grades << std::endl;

  std::copy((const char**)grades + 1, (const char**)grades + 1 + letterCount, (const char**)letters);

  std::cout << "grades: ";
  std::copy(grades, grades + gradeCount, iter);
  std::cout << "\nletters:";
  std::copy(letters, letters + letterCount, iter);
  std::cout << std::endl;

  location = std::search((const char**)grades, (const char**)grades + gradeCount,
                     (const char**)letters, (const char**)letters + letterCount,
                     str_equal);

  if(location == grades + gradeCount)
    std::cout << "letters not found in grades" << std::endl;
  else
    std::cout
      << "letters found in grades at offset: " << location - grades << std::endl;
  return 0;
}
