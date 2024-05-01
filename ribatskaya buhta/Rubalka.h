#include <iostream>
#include <random>
#include "Game.h"

#ifndef RUBALKA_H
#define RUBALKA_H
class Rubalka
{
private:
	static Riba spisokRib[Game::RIBAS_COUNT];
	static Udochka udochka;
public:

	Rubalka() {}
	Rubalka(Udochka _udochka, Riba _spisokRib[])
	{
		udochka = _udochka;
		for (int i = 0; i < Game::RIBAS_COUNT; i++)
		{
			spisokRib[i] = _spisokRib[i];
		}
	}


	static bool raschet(Riba riba) {
		if (udochka.value >= riba.valueForPoymat) {
			cout << "Рыба успешно поймана";
			return true;
		}
		else {
			cout << "Сорвалась";
			return false;
		}
	}

	static void rybalka() {
		Riba pole[3][3];

		cout << "Выберите 1 поле(от 1 до 9)";
		cout << "1  2  3\n4  5  6\n7  8  9" << endl;
		int choice; cin >> choice;
		unsigned int randomn_riba;
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				randomn_riba = rand() % 12;
				pole[i][j] = spisokRib[randomn_riba];
			}
		}

		switch (choice)
		{
		case 1:
			//короче сюда передаешь поле, которое соответствует цифре(например здесь первое поле - 0 строка 1 столбец, ну и так далее)
			if (raschet(pole[0][0])) {
				cout << "попал";
				break;
			}
			else {
				cout << "мимо";
				break;
			}
		case 2:
			if (raschet(pole[0][1])) {
				cout << "попал";
				break;
			}
			else {
				cout << "мимо";
				break;
			}
		case 3:
			if (raschet(pole[0][2])) {
				cout << "попал";
				break;
			}
			else {
				cout << "мимо";
				break;
			}
		case 4:
			if (raschet(pole[1][0])) {
				cout << "попал";
				break;
			}
			else {
				cout << "мимо";
				break;
			}
		case 5:
			if (raschet(pole[1][1])) {
				cout << "попал";
				break;
			}
			else {
				cout << "мимо";
				break;
			}
		case 6:
			if (raschet(pole[1][2])) {
				cout << "попал";
				break;
			}
			else {
				cout << "мимо";
				break;
			}
		case 7:
			if (raschet(pole[2][0])) {
				cout << "попал";
				break;
			}
			else {
				cout << "мимо";
				break;
			}

		case 8:
			if (raschet(pole[2][1])) {
				cout << "попал";
				break;
			}
			else {
				cout << "мимо";
				break;
			}
		case 9:
			if (raschet(pole[2][2])) {
				cout << "попал";
				break;
			}
			else {
				cout << "мимо";
				break;
			}
		default:
			break;
		}

	}
};
#endif