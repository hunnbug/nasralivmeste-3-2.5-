#include <iostream>
#include <string>
#include "Game.h"

перчики

#ifndef MAGAZ_H
#define MAGAZ_H

class Magaz
{
public:
	
	
	void ShowMagaz(Ribak ribak)
	{
		int vibor;
		cout << "магаз:" << endl;
		for (int i = 0; i < Game::UDOCHKI_COUNT; i++)
		{
			cout << to_string(i + 1) + ". название: " + Game::udochki[i].name + " цена: " + to_string(Game::udochki[i].price) + " мощность: " + to_string(Game::udochki[i].value) << endl;
		}
		cout << "выберите удочку: ";
		cin >> vibor;
		while (vibor < 0 || vibor >= Game::UDOCHKI_COUNT)
		{
			cout << "Некорректный ввод. Повторите выбор: ";
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
			cout << "недостаточно денег" << endl;
			ShowMagaz(ribak);
		}
	}
};
#endif
