#include <tuple>
#include <cstdio>

int run_tuple()
{
	std::tr1::tuple<int, int> x = std::tr1::make_tuple(1, 2);
	std::tr1::tuple<float, float> y = x;
	std::pair<int, int> z = std::make_pair(3, 4);

	std::tr1::tuple<int, int> a, b;
	a = b = x;

	std::tr1::tuple<int, int, int, int, int, int, int, int, int, int> p =
		std::tr1::make_tuple(1, 2, 3, 4, 5, 6, 7, 8, 9, 10);

	int q, r;
	std::tr1::tie(q, std::tr1::ignore, r) = std::tr1::make_tuple(1, 2, 3);

	std::printf("x = (%d, %d)\n", std::tr1::get<0>(x), std::tr1::get<1>(x));
	std::printf("y = (%f, %f)\n", std::tr1::get<0>(y), std::tr1::get<1>(y));
	std::printf("z = (%d, %d)\n", std::tr1::get<0>(z), std::tr1::get<1>(z));
	std::printf("(q, r) = (%d, %d)\n", q, r);
	std::printf("p = (%d, %d, %d, %d, %d, %d, %d, %d, %d, %d)\n",
		std::tr1::get<0>(p), std::tr1::get<1>(p), std::tr1::get<2>(p), std::tr1::get<3>(p),
		std::tr1::get<4>(p), std::tr1::get<5>(p), std::tr1::get<6>(p), std::tr1::get<7>(p),
		std::tr1::get<8>(p), std::tr1::get<9>(p));

	return 0;
}
