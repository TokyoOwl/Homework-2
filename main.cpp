#include "tests.h"
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	test_math();
	cout << "Tests for math funcs: OK\n";
	test_logic();
	cout << "Tests for logic funcs: OK\n";
	test_map();
	cout << "Tests for func map: OK\n";
	test_filter();
	cout << "Tests for func filter: OK\n";
	return 0;
}