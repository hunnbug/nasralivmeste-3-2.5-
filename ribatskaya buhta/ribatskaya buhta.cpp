#include <iostream>
#include <string>
#include <random>
#include <map>

using namespace std;

class Udochka
{
public:
	string name;
	int price;
	int value;
	Udochka()
	{
		name = "тест удочка";
		price = 0;
		value = 0;
	}
	Udochka(string _name, int _price, int _value)
	{
		name = _name;
		price = _price;
		value = _value;
	}
};

class Riba
{
public:
	string name;
	int weight;
	int dlina;
	int valueForPoymat;
	string rare;																		
	Riba()																			
	{																					
		name = "Адун";																
		weight = 14;																	
		dlina = 8;																	
		valueForPoymat = 8;															
		rare = "pashalko";															
	}																					
	Riba(string _name, int _weight, int _dlina, int _valueForPoymat, string _rare)	
	{																					
		name = _name;																	
		weight = _weight;																
		dlina = _dlina;																
		valueForPoymat = _valueForPoymat;												
		rare = _rare;																	
	}																					
};																					
class Ribak																			
{																					
private:																				
	string name;																		
	int lvl;																			
	int balance;
public:
	Ribak() : name(""), lvl(0), balance(0) {} // Конструктор по умолчанию

	Ribak(string _name, int _lvl, int _balance) : name(_name), lvl(_lvl), balance(_balance) {}
	
};	

class StartGame
{
private:
	Riba ribas[12];
	Udochka udochki[6];
	Ribak ribak;
	string name;
	int lvl;
	int balance;
public:
	StartGame() { // Redacted by Funtik
		ribas[0] = Riba("карась", (rand() % 500 + 100), (rand() % 500 + 10), 0, "common");
		ribas[1] = Riba("сом", (rand() % 500 + 100), (rand() % 500 + 10), 0, "common");
		ribas[2] = Riba("язь", (rand() % 500 + 100), (rand() % 500 + 10), 10, "uncommon");
		ribas[3] = Riba("карась", (rand() % 500 + 100)/*rand() % (макс число - мин число + 1) + (мин число)*/, (rand() % 500 + 10), 10, "uncommon");
		ribas[4] = Riba("жмур", (rand() % 500 + 100), (rand() % 500 + 10), 20, "uncommon");
		ribas[5] = Riba("рыба овальный", (rand() % 500 + 100), (rand() % 500 + 10), 20, "rare");
		ribas[6] = Riba("рыба фьлодА", (rand() % 500 + 100), (rand() % 500 + 10), 20, "rare");
		ribas[7] = Riba("hs,f xkty", (rand() % 900 + 100), (rand() % 1200 + 600), 30, "epic");
		ribas[8] = Riba("Феликс", (rand() % 2500 + 2000), (rand() % 2500 + 2000), 40, "legendary");
		ribas[9] = Riba("Рома", (rand() % 2500 + 2000), (rand() % 2500 + 2000), 40, "legendary");
		ribas[10] = Riba("Миша", (rand() % 2500 + 2000), (rand() % 2500 + 2000), 40, "legendary");
		ribas[11] = Riba("здоровенный язь", (rand() % 2500 + 2000), (rand() % 2500 + 2000), 50, "legendary");
		// Не дай бог вы эту механику не сделаете или запорите твари.
//-----------------------------------------------------------------------------------------------------------------------------------------------------
		static Udochka udochki[6];
		udochki[0] = Udochka("ловитель параши всякой", 150, 9);
		udochki[1] = Udochka("перемотанная изолентой крепкая удочка", 250, 15);
		udochki[2] = Udochka("удочка смазанная свинным жиром", 250, 22);
		udochki[3] = Udochka("секретная удочка покрашенная розовойц краской", 450, 32);
		udochki[4] = Udochka("цельнометаллическая удочка", 600, 41);
		udochki[5] = Udochka("самая крутая удочка", 1000, 56);
		// теперь даже можно к полям класса обратиться
//-----------------------------------------------------------------------------------------------------------------------------------------------------
		int lvl = 1;
		int balance = 100;
		cout << "введите имя рыбака: ";
		cin >> name;
		Ribak ribak(name, lvl, balance);
		system("cls");


	}
	string getName() const {
		return name;
	}

	int getLevel() const {
		return lvl;
	}

	int getBalance() const {
		return balance;
	}
};



static void menu() {

	StartGame game;

	int choose;
	cout << "|-------------------------------------------------------------------------------------------------|" << endl;
	cout << "|Вы приходите в маленький рыбацкий городок, тут довольно много народу для обычного дня.           |" << endl;
	cout << "|Люди на рынке суетятся и торговля идёт довольно оживлённо.                                       |" << endl; 
	cout << "|-------------------------------------------------------------------------------------------------|" << endl;
	cout << "|Куда отправитесь?" << endl;
	cout << "|	1. Узнать характеристики" << endl;
	cout << "|	2. Пойти в магазин" << endl;
	cout << "|	3. Поррррррррррррррррррррыбачить?" << endl;
	cout << "|	?. Прокачка статов" << endl; // <------- Думаем надо ли это? (можно сделать в магазе, но магаз будет мега нагружен, в консоли не удобно ориентироваться.
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
				menu();
			}
		case 2:

		case 3:

		case 4:

		case 5:

		default:
			break;
		}
	}
	
}
										
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
	system("cls");
	menu();
	
}			

//короче это все полная хуета, я завтра переделаю эту залупу








//для рыбалки:
/*
* для вылова рыбы value удочки должна быть больше valueForPoymat рыбы
* за каждые 100гр рыбы дается 30 голды
*/

//для меню:
/*
* сделай просмотр статов игрока(имени, баланса, лвла, удочки)
*/