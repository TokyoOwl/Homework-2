#include<windows.h>
#include"game_func.h"
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Rus");
	//test_game();
	//cout << "���� ����: OK\n";
	std::cout << "����� ���������� �� ���������������� ����!\n��� � ���� � ��� ����������? ";
	std::string name = game::get_name();
	std::cout << "\n������, " << name << "!";
	std::cout << "\n��������� 'yes' ���� ����� ������, ��������� 'no' ���� ���.\n";
	for (int i = 0; i < 3; i++)
	{
		int q = game::rand_int(0, 100);
		std::cout << "�����: "<< q <<"\n������? - ";
		std::string answ = game::get_answ();
		std::string right;
		if (game::is_rigth(q, answ) == true)
		{
			std::cout << "�����!\n";
		}
		else
		{
			if (answ == "yes")
				right = "no";
			else
				right = "yes";
			std::cout << "'" << answ << "' ������������ �����, ��������� ����� " << "'" << right << "'.\n���������� ��� ���, " << name << "!";
			return 0;
		}
	}
	std::cout << "����������, " << name << "!";
	return 0;
}