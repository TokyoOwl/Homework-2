#include<cassert>
#include<iostream>
#include"functions.h"
namespace test
{
	void test_math()
	{
		assert(funcs::square(1) == 1);
		assert(funcs::sum(1) == 2);
	}
	void test_logic()
	{
		assert(funcs::is_even(8) == true);
		assert(funcs::is_even(9) == false);
		assert(funcs::is_prime(7) == true);
		assert(funcs::is_prime(4) == false);
	}
	void test_map()
	{
		std::vector<int> numbers = funcs::fill_numbers(5, 30);
		assert(funcs::map(numbers, funcs::square) == funcs::square_numbers(numbers));
		assert(funcs::map(numbers, funcs::sum) == funcs::sum_numbers(numbers));
	}
	void test_filter()
	{
		std::vector<int> numbers = funcs::fill_numbers(2, 19);
		assert(funcs::filter(numbers, funcs::is_even) == funcs::even_numbers(numbers));
		assert(funcs::filter(numbers, funcs::is_prime) == funcs::prime_numbers(numbers));
	}
}