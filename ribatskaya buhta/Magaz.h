#include <iostream>
#include <string>
#include "Game.h"

�������

#ifndef MAGAZ_H
#define MAGAZ_H

class Magaz
{
public:
	
	
	void ShowMagaz(Ribak ribak)
	{
		int vibor;
		cout << "�����:" << endl;
		for (int i = 0; i < Game::UDOCHKI_COUNT; i++)
		{
			cout << to_string(i + 1) + ". ��������: " + Game::udochki[i].name + " ����: " + to_string(Game::udochki[i].price) + " ��������: " + to_string(Game::udochki[i].value) << endl;
		}
		cout << "�������� ������: ";
		cin >> vibor;
		while (vibor < 0 || vibor >= Game::UDOCHKI_COUNT)
		{
			cout << "������������ ����. ��������� �����: ";
			cin >> vibor;
		}
		if (Game::udochki[vibor].price <= ribak.balance)
		{
			ribak.udochka = Game::udochki[vibor - 1];
			ribak.balance -= Game::udochki[vibor - 1].price;
		}
		else 
		{
			system("cls");
			cout << "������������ �����" << endl;
			ShowMagaz(ribak);
		}
	}
};
#endif
