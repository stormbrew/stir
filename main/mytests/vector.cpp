#include <vector>
#include <string>
#include <algorithm>
#include <cstdio>

struct test_no_default
{
	test_no_default(const test_no_default &t) {}
	test_no_default(int i) {}

private:
	test_no_default();
};

int compile_vector()
{
	std::vector<test_no_default> x;

	x.push_back(test_no_default(1));
	x.insert(x.begin(), test_no_default(2));

	return 0;
}

struct igen
{
	int mN;
	igen() : mN(0) {}
	igen(const igen &gen) : mN(gen.mN) {}
	int operator()()
	{
		return mN++;
	}
};

int run_vector()
{
	std::vector<int> z(100);
	std::generate(z.begin(), z.end(), igen());

	std::printf("vector test: %p, %p\n", &*z.begin(), &*z.end());
	for (std::vector<int>::iterator it = z.begin(); it != z.end(); it++)
	{
		std::printf("%d\n", *it);
	}

	std::vector<std::string> y;
	std::back_insert_iterator<std::vector<std::string> > back(y);
	back++ = "hello";
	back++ = "mcfly";

	std::insert_iterator<std::vector<std::string> > ins(y, y.begin() + 1);
	ins++ = "(stupid)";

	for (std::vector<std::string>::iterator it = y.begin(); it != y.end(); it++)
	{
		std::printf("%s\n", it->c_str());
	}

	std::vector<std::string>::iterator eit = std::find(y.begin(), y.end(), "(stupid)");
	if (eit != y.end())
		y.erase(eit);
	eit = std::find(y.begin(), y.end(), "blah");
	if (eit != y.end())
		y.erase(eit);

	for (std::vector<std::string>::iterator it = y.begin(); it != y.end(); it++)
	{
		std::printf("%s\n", it->c_str());
	}

	return 0;
}
