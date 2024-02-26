#include<vector>
using namespace std;
vector<int> numbers, numbers_square, numbers_sum, numbers_even, numbers_prime;
auto square = [](int x) -> int {return x * x; };
auto sum = [](int x) -> int {return x + x; };
auto is_even = [](int x) -> bool {if (x % 2 == 0) { return true; } else { return false; }};
auto is_prime = [](int x) ->bool {for (int i = 2; i < x; i++)if (x % i == 0)return false; return true; };
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