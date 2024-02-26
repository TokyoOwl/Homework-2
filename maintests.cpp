#include<vector>
#include<cassert>
#include"mainfunctions.h"
using namespace std;
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
