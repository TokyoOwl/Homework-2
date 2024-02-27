#include<vector>
#include"functions.h"
namespace funcs 
{
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
	std::vector<int> fill_numbers(int begin, int end)
	{
		std::vector<int> result;
		for (int i = begin; i < end; i++)
			result.push_back(i);
		return result;
	}
	std::vector<int> square_numbers(std::vector<int> numbers)
	{
		std::vector<int> result;
		for (int i = 0; i < size(numbers); i++)
			result.push_back(square(numbers[i]));
		return result;
	}
	std::vector<int> sum_numbers(std::vector<int> numbers)
	{
		std::vector<int> result;
		for (int i = 0; i < size(numbers); i++)
			result.push_back(sum(numbers[i]));
		return result;
	}
	std::vector<int> even_numbers(std::vector<int> numbers)
	{
		std::vector<int> result;
		for (int i = 0; i < size(numbers); i++)
			if (is_even(numbers[i]))
				result.push_back(numbers[i]);
		return result;
	}
	std::vector<int> prime_numbers(std::vector<int> numbers)
	{
		std::vector<int> result;
		for (int i = 0; i < size(numbers); i++)
			if (is_prime(numbers[i]))
				result.push_back(numbers[i]);
		return result;
	}
	std::vector<int> map(std::vector<int> numbers, int(*fun)(int))
	{
		std::vector<int> result;
		for (int i = 0; i < size(numbers); i++)
		{
			result.push_back(fun(numbers[i]));
		}
		return result;
	}
	std::vector<int> filter(std::vector<int> numbers, bool(*fun)(int))
	{
		std::vector<int> result;
		for (int i = 0; i < size(numbers); i++)
		{
			if (fun(numbers[i]) == true)
				result.push_back((numbers[i]));
		}
		return result;
	}
}
