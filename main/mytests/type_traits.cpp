#include <type_traits>
#include <type_compare>
#include <type_transform>
#include <cstdio>

class A {};
class B : public A {};

int run_type_traits()
{
	std::printf("%d,%d,%d,%d,%d,%d,%d,%d\n", 
		std::tr1::is_same<A, void*>::value,
		std::tr1::is_convertible<double, int>::value,
		std::tr1::is_convertible<A, B>::value,
		std::tr1::is_convertible<B, A>::value,
		std::tr1::is_base_of<A, B>::value,
		std::tr1::is_base_of<B, A>::value,
		std::tr1::is_base_of<A, void>::value,
		std::tr1::is_base_of<void, A>::value);

	std::printf("is_volatile<A&>? %d\n", std::tr1::is_volatile<A&>::value);

	std::printf("add_pointer(add_reference(A[10])) == A *? %d\n",
		std::tr1::is_same<
			std::tr1::add_pointer<std::tr1::add_reference<A[10]>::type>::type,
			A*>::value);
	return 0;
}
