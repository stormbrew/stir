#include <functional>
#include <vector>
#include <algorithm>

int compile_functional()
{
	bool eq = std::bind1st(std::equal_to<int>(), 1)(2);
	return eq;
}

struct A
{
	int x;
	A() : x(0) {}
	A(int y) : x(y) {}

	void X() { std::printf("hello there %d.\n", x); }
	bool Y(int a, int b, int c, int d) { std::printf("A(%d)::Y(%d, %d, %d, %d)\n", x,a,b,c,d); return true; }

	template <typename tList>
	struct result;
	template <typename tFunc>
	struct result<tFunc (int, int, int, int)>
	{
		typedef bool type;
	};
};

int run_functional()
{
	using std::tr1::hash;
	std::printf("f(blah) = %x\n", hash<std::string>()("blah"));
	std::printf("f(blooh) = %x\n", hash<std::string>()("blooh"));
	std::printf("f(32904) = %x\n", hash<int>()(32904));
	std::printf("f(32.904) = %x\n", hash<float>()(32.904));

	std::vector<A> blah;
	blah.push_back(1);
	blah.push_back(342);

	std::vector<int> blooh;
	std::transform(blah.begin(), blah.end(), std::back_inserter(blooh), std::tr1::mem_fn(&A::x));

	for (std::vector<int>::iterator it = blooh.begin(); it != blooh.end(); it++)
	{
		std::printf("blooh[%d] == %d\n", it - blooh.begin(), *it);
	}

	std::for_each(blah.begin(), blah.end(), std::tr1::mem_fn(&A::X));

	A flork;
	std::tr1::mem_fn(&A::Y)(flork, 1, 2, 3, 4);

	typedef bool (A::*tf)(int, int, int, int);

	std::tr1::result_of<A(int, int, int, int)>::type v = flork.Y(1, 2, 3, 4);
	std::printf("v = %d\n", v);

	return 0;
}
