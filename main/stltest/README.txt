Modified by Pete Forman <pete.forman@westgeo.com>

Last updated : 1999-10-22

1) No direct use of STLport
2) All Standard headers, #include <foo> or <cfoo> rather than <foo.h>
3) <algo.h> becomes <algorithm> or <numeric> or <functional>
4) <function.h> becomes <functional>
5) Explicit std namespace, e.g. std::cout rather than cout.
   accumulate adjacent_difference adjacent_find advance allocator
   back_inserter back_insert_iterator binary_negate binary_search
   bind1st bind2nd binder2nd bitset cin copy copy_backward count
   count_if cout deque divides endl equal equal_range equal_to fill
   fill_n find find_if for_each front_inserter front_insert_iterator
   generate generate_n greater greater_equal hash_set includes
   inner_product inplace_merge inserter insert_iterator ios
   istream_iterator iter_swap less less_equal lexicographical_compare
   list logical_and logical_not logical_or lower_bound make_heap
   make_pair map max max_element merge min minus min_element mismatch
   modulus multimap multiplies multiset negate next_permutation not1
   not2 not_equal_to nth_element ostream ostream_iterator pair
   partial_sort partial_sort_copy partial_sum partition plus
   pointer_to_binary_function pointer_to_unary_function pop_heap
   prev_permutation priority_queue ptr_fun push_heap queue rand
   random_shuffle raw_storage_iterator remove remove_copy
   remove_copy_if remove_if replace replace_copy replace_copy_if
   replace_if reverse reverse_copy rotate rotate_copy search set
   set_difference set_intersection set_symmetric_difference set_union
   slist sort sort_heap stable_partition stable_sort stack strcmp
   string strlen swap swap_ranges transform unary_negate unique
   unique_copy upper_bound vector

6) Replace __STLPORT_STD or STLPORT with std

7) The expected result of incl1 is wrong

7) alg2, alg3, count0, count1, countif2, func1, logicnot fail on
   SC5.0, count() and count_if() take 4 args, Standard says 3.
   bvec1.cpp fails on SC5.0, fails to convert bool* to InputIterator.
   mset4 multiset::equal_range does not return pair<const_iterator,
   const_iterator>
   mset5 problem with pointer_to_binary_function<>
   rawiter does not properly default the 2nd arg of allocator::allocate.
   bitset is missing operator^ and ostream operator<<
8) find1 fails to compile on VAC++4.0, cannot do sizeof(int[])
   bvec1 gives incorrect result
   incl1 gives correct result, test is wrong
9) bcompos1 bcompos2 hmap1 hmmap1 hmset1 hset2 slist1 ucompos1
   ucompos2 use SGI STL features that are not in the Standard.

*) Get exactly the same compliance on SC 5.0 when using STLport 3.2.1.
   This implies that the compiler itself is the limiting factor.

10) These tests fail on xlC 3.6.4 + STLport 3.2.1:
    copy2 copy3 copy4 eqlrnge1 eqlrnge2 gener2 genern2 inplmrg2
    inrprod1 inrprod2
    nextprm2
    replace1
    iterswp1
    mset5
    mset4
    prevprm1
    partsum1
    pheap2


11) There are 234 tests called from stl_test.cpp of which 9 are
    non-Standard, so there are 225 Standard tests.

----------------------------------------------------------------------------

Test suite for SGI STL implementation

Boris P. Fomitchev <fbp@metabyte.com>

Last updated : Nov 14, 1997

----------------------------------------------------------------------------

Preface

One of the problems one is faced when deciding whether using STL or not is
the question of portability and reliability. It's not a rare case when
compiler begins to crash when template constructs get too complex. While
it's not possible to predict such effects on arbitrary code, it is often
useful to test basic STL compatibility of the compiler. That's what this
testsuite is for. It don't use too complex construct with STL items. But it
do instantiate about every item to see if it works properly.

----------------------------------------------------------------------------

Genesis

This testsuite is derived from Cygnus Solutions STL testsuite, which is
based on ObjectSpace STL examples. The changes that have been made mostly
involve restructuring. You can run a single short test for particular STL
construct , or try to compile them all and link to single executable. You
may also test if your compiler can handle extremely long source files by
compiling a single source including all others.

----------------------------------------------------------------------------

Platforms

Makefiles for gcc, SUNPro, Borland, Visual C++ compilers are provided with
the suite. Look for .mak files in the distribution. It should be not
difficult to adjust one of them to your compiler.

----------------------------------------------------------------------------

Trying it out

After unpacking, edit appropriate makefile to fit your compiler and include
directories . After you've done, try "make check". This target is output
(stl_test.out) of single executable containing all the tests. Compare it
with stl_test.exp output (or stl_test.rand.exp, see below). 
There should be no differences. If some test fails
to compile, you may try "make test_name.out" to produce single test
executable and run it.

----------------------------------------------------------------------------

Expected differences

As many tests use pseudo-random generators, you may get differences
in test output. 
Basically, there are 2 random generator scemes used :
via rand() function : expected result in stl_test.rand.exp
via lrand48() function : expected result in stl_test.exp.

System-dependent notices:
 If you are using STLport on OS390 machine, you should compare with stl_test.ibm390.exp.

 Linux libc uses different random generator which doesn't match any of the above. Be prepared.
 
map1_test : some compilers don't zero-initialize data when builtin-type default constructor called, thus you may see some garbage instead of 0 in the output. 
