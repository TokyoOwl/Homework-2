#include<iostream>
#include<string>
#include<vector>
using namespace std;
string Name;
string Answer;
string Right;
bool is_even(int x) {
	if (x % 2 == 0) return true;
	else return false;
}
vector<int> questions = { 7, 20, 8 };
void get_name()
{
	cin >> Name;
}
void get_answ()
{
	cin >> Answer;
}
bool is_rigth(int x)
{
	if (Answer == "yes") {
		if (is_even(x) == true) {
			return true;
		}
		else {
			Right = "no";
			cout << Right;
			return false;
		}
	}
	else if (Answer == "no") {
		if (is_even(x) == true) {
			Right = "yes";
			cout << Right;
			return false;
		}
		else {
			return true;
		}
	}
	else
	{
		cout << "Invalid answer\n";
	}
}