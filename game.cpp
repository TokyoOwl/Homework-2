#include<iostream>
#include"game.h"
using namespace std;
int main()
{
	test_game();
	cout << "Test game: OK\n";
	cout << "Welcome to the Brain Games!\nMay I have your name ? ";
	get_name();
	cout << "\n Hello," << Name << "!";
	cout << "\nAnswer 'yes' if the number is even, otherwise answer 'no'.\n";
	for (int i = 0; i < 3; i++)
	{
		cout << "Question: "<< questions[i] <<"\nYour answer: ";
		get_answ();
		if (is_rigth(questions[i], Answer) == true)
		{
			cout << "Correct!\n";
		}
		else
		{
			cout << "'" << Answer << "' is wrong anwser :(. Correct answer was " << "'" << Right << "'.\n Let's try again, " << Name << "!";
			return 0;
		}
	}
	cout << "Congratulations, " << Name << "!";
	return 0;
}