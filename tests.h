#include<vector>
#include<cassert>
#include"test.h"
#include"vector.h"
using namespace std;


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