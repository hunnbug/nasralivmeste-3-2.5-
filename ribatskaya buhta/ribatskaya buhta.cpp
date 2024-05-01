#include <iostream>
#include <string>
#include <random>
#include "Game.h"
#include "StartGame.h"

using namespace std;


class Magaz
{
public:
	void ShowMagaz()
	{
		cout << "магаз:" << endl;
		for (int i = 0; i < Game::UDOCHKI_COUNT; i++)
		{
			cout << "имя удочки: " + Game::udochki[i].name << endl;
		}
	}
};
static void menu(StartGame game) {
	int choose;
	system("cls");
	cout << "|-------------------------------------------------------------------------------------------------|" << endl;
	cout << "|Вы приходите в маленький рыбацкий городок, тут довольно много народу для обычного дня.           |" << endl;
	cout << "|Люди на рынке суетятся и торговля идёт довольно оживлённо.                                       |" << endl;
	cout << "|-------------------------------------------------------------------------------------------------|" << endl;
	cout << "|Куда отправитесь?" << endl;
	cout << "|	1. Узнать характеристики" << endl;
	cout << "|	2. Пойти в магазин" << endl;
	cout << "|	3. Поррррррррррррррррррррыбачить?" << endl;
	cout << "|	?. Прокачка статов" << endl;
	cout << "|	5. Выход" << endl;
	cout << "|-------------------------------------------------------------------------------------------------|" << endl;


	cin >> choose;
	while (true)
	{
		switch (choose)
		{
		case 1:
			cout << "Имя: " << game.getName() << endl;
			cout << "Уровень: " << game.getLevel() << endl;
			cout << "Баланс: " << game.getBalance() << endl;
			cout << " " << endl;
			cout << "Для выхода введите 0" << endl;
			cin >> choose;
			if (choose == 0) {
				menu(game);
			}
		case 2:

		case 3:
			Rubalka::rybalka;
		case 4:

		case 5:

		default:
			break;
		}
	}

}

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
			else{
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



int main()
{
	setlocale(LC_ALL, "RU");

	char trash;
	cout << "От студии nasralivmeste-3-2.5-" << endl;
	cout << "-------------------------------" << endl;
	cout << "3 фрика энтертеймент" << endl;
	cout << "-------------------------------" << endl;
	cout << " " << endl;
	cout << " " << endl;
	cout << "Рыбатская бухта: новое начало." << endl;
	cout << " " << endl;
	cout << " " << endl;
	cout << "-------------------------------" << endl;
	cout << "Введите любой символ" << endl;
	cin >> trash;

	Game::init();
	StartGame game;
	system("cls");
	menu(game);
}

