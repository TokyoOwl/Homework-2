#include <iostream>
#include "test.h"
int main()
{
	test::test_math();
	std::cout << "Tests for math funcs: OK\n";
	test::test_logic();
	std::cout << "Tests for logic funcs: OK\n";
	test::test_map();
	std::cout << "Tests for func map: OK\n";
	test::test_filter();
	std::cout << "Tests for func filter: OK\n";
	return 0;
}