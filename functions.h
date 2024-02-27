#include<vector>
#include<cassert>
namespace funcs 
{
	int square(int);
	int sum(int);
	bool is_even(int);
	bool is_prime(int);
	std::vector<int> fill_numbers(int, int);
	std::vector<int> square_numbers(std::vector<int>);
	std::vector<int> sum_numbers(std::vector<int>);
	std::vector<int> even_numbers(std::vector<int>);
	std::vector<int> prime_numbers(std::vector<int>);
	std::vector<int> map(std::vector<int>, int(*)(int));
	std::vector<int> filter(std::vector<int>, bool(*)(int));
}
