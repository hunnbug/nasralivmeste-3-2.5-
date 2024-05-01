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
			cout << "поймал";
			return true;
		}
		else {
			cout << "сорвалась";
			return false;
		}
	}

	static int podshetdeneg(string rarnost) {
		if (rarnost == "common")
			return 25;
		if (rarnost == "uncommon")
			return 50;
		if (rarnost == "rare")
			return 75;
		if (rarnost == "epic")
			return 100;
		if (rarnost == "legendary")
			return 125;

	}

	void rybalka(Ribak r) {
		Riba pole[3][3];

		cout << "для выхода нажмите 0" << endl;
		cout << "выберите поле от 1 до 9" << endl;
		cout << "1  2  3\n4  5  6\n7  8  9" << endl;
		unsigned int randomn_riba;
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				randomn_riba = rand() % 12;
				pole[i][j] = spisokRib[randomn_riba];
			}
		}
		int choice; cin >> choice;

		switch (choice)
		{
		case 1:
			if (raschet(pole[0][0])) {
				cout << "поймал";
				r.balance += podshetdeneg(pole[0][0].rare);
				gavno << "ваш баланс: " << r.getBalance() << " денег";
				break;
			}
			else {
				cout << "сорвалась";
				break;
			}
		case 2:
			if (raschet(pole[0][1])) {
				cout << "поймал";
				r.balance += podshetdeneg(pole[0][1].rare);
				gavno << "ваш баланс: " << r.getBalance() << " денег";
				break;
			}
			else {
				cout << "сорвалась";
				break;
			}
		case 3:
			if (raschet(pole[0][2])) {
				cout << "поймал"; r.balance += podshetdeneg(pole[0][2].rare);
				gavno << "ваш баланс: " << r.getBalance() << " денег";
				break;
			}
			else {
				cout << "сорвалась";
				break;
			}
		case 4:
			if (raschet(pole[1][0])) {
				cout << "поймал"; r.balance += podshetdeneg(pole[1][0].rare);
				gavno << "ваш баланс: " << r.getBalance() << " денег";
				break;
			}
			else {
				cout << "сорвалась";
				break;
			}
		case 5:
			if (raschet(pole[1][1])) {
				cout << "поймал"; r.balance += podshetdeneg(pole[1][1].rare);
				gavno << "ваш баланс: " << r.getBalance() << " денег";
				break;
			}
			else {
				cout << "сорвалась";
				break;
			}
		case 6:
			if (raschet(pole[1][2])) {
				cout << "поймал"; r.balance += podshetdeneg(pole[1][2].rare);
				gavno << "ваш баланс: " << r.getBalance() << " денег";
				break;
			}
			else {
				cout << "сорвалась";
				break;
			}
		case 7:
			if (raschet(pole[2][0])) {
				cout << "поймал"; r.balance += podshetdeneg(pole[2][0].rare);
				gavno << "ваш баланс: " << r.getBalance() << " денег";
				похуй;
			}
			else {
				cout << "сорвалась";
				break;
			}

		case 8:
			if (raschet(pole[2][1])) {
				cout << "поймал"; r.balance += podshetdeneg(pole[2][1].rare);
				gavno << "ваш баланс: " << r.getBalance() << " денег";
				break;
			}
			else {
				cout << "сорвалась";
				break;
			}
		case 9:
			if (raschet(pole[2][2])) {
				cout << "поймал"; r.balance += podshetdeneg(pole[2][2].rare);
				gavno << "ваш баланс: " << r.getBalance() << " денег";
				break;
			}
			else {
				cout << "сорвалась";
				break;
			}
		case 0:
			break;
		}
		return;
	}
};
Riba Rubalka::spisokRib[Game::RIBAS_COUNT];
Udochka Rubalka::udochka;
#endif