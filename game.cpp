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
	cout << "���� ����: OK\n";
	cout << "����� ���������� �� ���������������� ����!\n��� � ���� � ��� ����������? ";
	get_name();
	cout << "\n������, " << Name << "!";
	cout << "\n��������� 'yes' ���� ����� ������, ��������� 'no' ���� ���.\n";
	for (int i = 0; i < 3; i++)
	{
		int q = rand_int(0, 100);
		cout << "�����: "<< q <<"\n������? - ";
		get_answ();
		if (is_rigth(q, Answer) == true)
		{
			cout << "�����!\n";
		}
		else
		{
			cout << "'" << Answer << "' ������������ �����, ��������� ����� " << "'" << Right << "'.\n���������� ��� ���, " << Name << "!";
			return 0;
		}
	}
	cout << "����������, " << Name << "!";
	return 0;
}