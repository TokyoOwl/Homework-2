#include<vector>
#include<cassert>
using namespace std;
int square(int);
int sum(int x);
bool is_even(int);
bool is_prime(int);
vector<int> fill_numbers(vector<int>);
vector<int> square_numbers(vector<int>, vector<int>);
vector<int> sum_numbers(vector<int>, vector<int>);
vector<int> even_numbers(vector<int>, vector<int>);
vector<int> prime_numbers(vector<int>, vector<int>);
vector<int> map(vector<int>, int(*)(int));
vector<int> filter(vector<int>, bool(*)(int));
