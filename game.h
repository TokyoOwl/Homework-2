#include<iostream>
#include<string>
#include<vector>
#include<cassert>
using namespace std;
string Name;
string Answer;
string Right;
void get_name()
{
	cin >> Name;
}
void get_answ()
{
	cin >> Answer;
}
vector<int> questions = { 7, 20, 8 };
bool is_even(int x) {
	if (x % 2 == 0) return true;
	else return false;
}
static bool is_rigth(int x, string answer)
{
	if (answer == "yes") {
		if (is_even(x) == true) {
			return true;
		}
		else {
			Right = "no";
			return false;
		}
	}
	else if (answer == "no") {
		if (is_even(x) == true) {
			Right = "yes";
			return false;
		}
		else {
			return true;
		}
	}
	else
	{
		cout << "Invalid answer\n";
		return 0;
	}
}
static void test_game()
{
	assert(is_rigth(3, "yes") == false);
	assert(is_rigth(10, "yes") == true);
	assert(is_rigth(3, "no") == true);
	assert(is_rigth(10, "no") == false);
}
