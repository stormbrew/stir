extern int run_string();
extern int run_vector();
extern int run_memory();
extern int run_type_traits();
extern int run_functional();
extern int run_locale();
extern int run_tuple();

int main()
{
	run_string();
	run_vector();
	run_memory();
	run_type_traits();
	run_functional();
	run_tuple();
//	run_locale();
	return 0;
}
