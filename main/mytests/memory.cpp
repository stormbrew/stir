#include <memory>
#include <cstdio>
#include <functional>

#include <stir/allocator_ptr.hpp>

class A
{};

class B : public A
{};

int compile_memory()
{
	std::auto_ptr<A> p = std::auto_ptr<A>(new B);

	std::allocator<A> alloc;
	typedef std::allocator<A>::pointer pointer_type;
	pointer_type z = alloc.allocate(5);

	std::raw_storage_iterator<pointer_type, B> it(z);
	for (int i = 0; i < 5; i++)
	{
		*it++ = B();
	}

	std::uninitialized_fill_n(z, 5, A());
	for (int i = 0; i < 5; i++)
	{
		alloc.destroy(z + i);
	}
	alloc.deallocate(z, 5);

	return 1;
}

void print_delete(int *ptr)
{
	std::printf("deleting %x\n", ptr);
	delete ptr;
}

class printer
{
public:
	printer() { std::printf("constructing %x\n", this); }
	printer(const printer &copy) { std::printf("copying %x from %x\n", this, &copy); }
	~printer() { std::printf("destroying %x\n", this); }
};

int run_memory()
{
	std::tr1::shared_ptr<int> x(new int, std::ptr_fun(::print_delete));
	std::printf("ptr: %x, %d\n", x.get(), x.use_count());

	std::tr1::shared_ptr<int> y(x);
	std::printf("ptr: %x, %d\n", y.get(), y.use_count());

	std::printf("x == y? %d\n", x == y);

	typedef std::pointer_to_unary_function<int*, void> delfunc;
	delfunc *myfunc = std::tr1::get_deleter<delfunc>(x);

	(*myfunc)(new int);

	std::tr1::weak_ptr<int> z(x);

	x.reset();

	std::printf("z expired? %d\n", z.expired());

	y.reset();

	std::printf("z expired? %d\n", z.expired());

	z.reset();

	stir::allocator_ptr<printer> ap(printer());
	stir::allocator_ptr<printer> ap2;

	ap2.reset(ap.release());

	ap.reset(printer());
	ap2.reset(printer());

	return x.use_count();
}
