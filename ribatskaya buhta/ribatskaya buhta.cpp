#include <iostream>
#include <string>
#include <random>
#include "Game.h"
#include "Rubalka.h"
#include "Magaz.h"


перчики

static void menu(Ribak ribak, Rubalka rubalka) {
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
	cout << "|	4. Выход" << endl;
	cout << "|-------------------------------------------------------------------------------------------------|" << endl;


	cin >> choose;
	while (true)
	{
		switch (choose)
		{
		case 1:
			cout << "Имя: " << ribak.getName() << endl;
			cout << "Уровень: " << ribak.getLevel() << endl;
			cout << "Баланс: " << ribak.getBalance() << endl;
			cout << "Удочка: " << ribak.getUdochka().name << endl;
			cout << " " << endl;
			cout << "Для выхода введите 0" << endl;
			cin >> choose;
			if (choose == 0) {
				menu(ribak, rubalka);
			}
		case 2:
			Magaz magaz;
			magaz.ShowMagaz(ribak);
			break;
		case 3:
			rubalka.rybalka(ribak);
			break;
		case 4:
			return;
			break;
		default:
			похуй
		}
	}

}

int main()
{
	setlocale(LC_ALL, "RU");

	string trash;
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
	cout << "Введите имя:" << endl;
	cin >> trash;

	Game::init();
	Ribak ribak(trash, 1, 100, Game::udochki[0]);
	Rubalka rubalka(ribak.getUdochka(), Game::ribas);
	system("cls");
	menu(ribak, rubalka);
}

