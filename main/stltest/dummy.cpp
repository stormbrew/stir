// Generate a dummy object file for a test.
// E.g. for slist1 test, compile this with -DFUNC_TEST=slist1_test

#include <iostream>

#define STRINGIZE_PHASE2(x) #x
#define STRINGIZE(x) STRINGIZE_PHASE2(x)

#define SPLICE_PHASE2(x, y) x##y
#define SPLICE(x, y) SPLICE_PHASE2(x, y)

#define FUNC_TEST SPLICE(FUNC, _test)

int FUNC_TEST(int, char**)
{
    std::cout<<"Skipping " STRINGIZE(FUNC_TEST) ":"<<std::endl;
    return 0;
}
