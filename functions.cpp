#include<vector>
#include"functions.h"
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
vector<int> fill_numbers(vector<int> numbers)
{
	for (int i = 0; i < 10; i++)
		numbers.push_back(i);
	return numbers;
}
vector<int>  square_numbers(vector<int> numbers, vector<int> numbers_square)
{
	for (int i = 0; i < size(numbers); i++)
		numbers_square.push_back(square(numbers[i]));
	return numbers_square;
}
vector<int>  sum_numbers(vector<int> numbers, vector<int> numbers_sum)
{
	for (int i = 0; i < size(numbers); i++)
		numbers_sum.push_back(sum(numbers[i]));
	return numbers_sum;
}
vector<int>  even_numbers(vector<int> numbers, vector<int> numbers_even)
{
	for (int i = 0; i < size(numbers); i++)
		numbers_even.push_back((numbers[i]));
	return numbers_even;
}
vector<int>  prime_numbers(vector<int> numbers, vector<int> numbers_prime)
{
	for (int i = 0; i < size(numbers); i++)
		numbers_prime.push_back((numbers[i]));
	return numbers_prime;
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
