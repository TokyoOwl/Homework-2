#include<vector>
#include<cassert>
using namespace std;
vector<int> numbers, numbers_square, numbers_sum, numbers_even, numbers_prime;
using namespace std;
int square(int x) {
	return x * x;
}
int sum(int x) {
	return x + x;
}
bool is_even(int x) {
	if (x % 2 == 0) { return true; }
	else { return false; }
}
bool is_prime(int x) {
	for (int i = 2; i < x; i++)
		if (x % i == 0)
			return false;
	return true;
}
void fill_numbers()
{
	for (int i = 0; i < 10; i++)
		numbers[i] = i;
}
void square_numbers()
{
	for (int i = 0; i < size(numbers); i++)
		numbers_square[i] = square(numbers[i]);
}
void sum_numbers()
{
	for (int i = 0; i < size(numbers); i++)
		numbers_sum[i] = sum(numbers[i]);
}
void even_numbers()
{
	for (int i = 0; i < size(numbers); i++)
		numbers_even[i] = is_even(numbers[i]);
}
void prime_numbers()
{
	for (int i = 0; i < size(numbers); i++)
		numbers_prime[i] = is_prime(numbers[i]);
}
vector<int> map(vector<int> numbers, int(*fun)(int))
{
	vector<int> result;
	for (int i = 0; i < size(numbers); i++)
	{
		result[i] = fun(numbers[i]);
	}
	return result;
}
vector<int> filter(vector<int> numbers, bool(*fun)(int))
{
	vector<int> result;
	for (int i = 0; i < size(numbers); i++)
	{
		if (fun(numbers[i]) == true)
			result[i] = numbers[i];
	}
	return result;
}

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
