#include<cassert>
#include"functions.h"
using namespace std;
vector<int> numbers = fill_numbers(numbers);
vector<int> numbers_square = square_numbers(numbers, numbers_square);
vector<int> numbers_sum = sum_numbers(numbers, numbers_sum);
vector<int> numbers_even = even_numbers(numbers, numbers_even);
vector<int> numbers_prime = prime_numbers(numbers, numbers_prime);

void test_math()
{
	assert(square(1) == 1);
	assert(sum(1) == 2);
}
void test_logic()
{
	assert(is_even(8) == true);
	assert(is_even(9) == false);
	assert(is_prime(7) == true);
	assert(is_prime(4) == false);
}
void test_map()
{
	assert(map(numbers, square) == numbers_square);
	assert(map(numbers, sum) == numbers_sum);
}
void test_filter()
{
	assert(filter(numbers, is_even) == numbers_even);
	assert(filter(numbers, is_prime) == numbers_prime);
}