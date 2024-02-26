#include<iostream>
#include<windows.h>
#include"game.h"
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Rus");
	test_game();
	cout << "Тест игры: OK\n";
	cout << "Добро пожаловать на интеллектуальную игру!\nКак я могу к вам обращаться? ";
	get_name();
	cout << "\nПривет, " << Name << "!";
	cout << "\nОтвечайте 'yes' если число чётное, отвечайте 'no' если нет.\n";
	for (int i = 0; i < 3; i++)
	{
		int q = rand_int(0, 100);
		cout << "Число: "<< q <<"\nчётное? - ";
		get_answ();
		if (is_rigth(q, Answer) == true)
		{
			cout << "Верно!\n";
		}
		else
		{
			cout << "'" << Answer << "' неправильный ответ, правльный ответ " << "'" << Right << "'.\nПопробуйте ещё раз, " << Name << "!";
			return 0;
		}
	}
	cout << "Поздравляю, " << Name << "!";
	return 0;
}