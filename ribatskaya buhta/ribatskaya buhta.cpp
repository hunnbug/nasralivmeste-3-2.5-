#include <iostream>
#include <string>
#include <random>
#include "Game.h"
#include "Rubalka.h"


перчики

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
static void menu(Ribak ribak) {
	int choose;
	system("cls");
	cout << "|-------------------------------------------------------------------------------------------------|" << endl;
	cout << "|Вы приходите в маленький рыбацкий городок, тут довольно много народу для обычного дня.           |" << endl;
	cout << "|Люди на рынке суетятся и торговля идёт довольно оживлённо.                                       |" << endl;
	cout << "|-------------------------------------------------------------------------------------------------|" << endl;
	cout << "|Куда отправитесь?"																				  << endl;
	cout << "|	1. Узнать характеристики"																		  << endl;
	cout << "|	2. Пойти в магазин"																				  << endl;
	cout << "|	3. Поррррррррррррррррррррыбачить?"																  << endl;
	cout << "|	?. Прокачка статов"																				  << endl;
	cout << "|	5. Выход"																						  << endl;
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
				menu(ribak);
			}
		case 2:

		case 3:

		case 4:

		case 5:

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
	menu(ribak);
}

