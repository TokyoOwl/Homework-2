#include<cassert>
#include<vector>
using namespace std;
auto square = [](int x) -> int {return x * x; };
auto sum = [](int x) -> int {return x + x; };
auto is_even = [](int x) -> bool {if (x % 2 == 0) { return true; } else { return false; }};
auto is_prime = [](int x) ->bool {for (int i = 2; i < x; i++)if (x % i == 0)return false; return true; };
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