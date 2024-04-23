#include <iostream>
#include <string>
#include <random>
#include <map>
using namespace std;


class Udochka
{
private:
	string name;
	int price;
	int value;
public:
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
	int valueForPoymat; // <- вот это(valueForPoymat) - нужная сила удочки --------------
	string rare;//																		|
	Riba()//																			|
	{//																					|
		name = "Адун";//																|
		weight = 14;//																	|
		dlina = 8;//																	|
		valueForPoymat = 8;//															|
		rare = "pashalko";//															|
	}//																					|
	Riba(string _name, int _weight, int _dlina, int _valueForPoymat, string _rare)//	|
	{//																					|
		name = _name;//																	|
		weight = _weight;//																|
		dlina = _dlina;//																|
		valueForPoymat = _valueForPoymat;//												|
		rare = _rare;//																	|
	}//																					|
};//																					|
class Ribak//																			|
{//																						|
private://																				|
	string name;//																		|
	int lvl;//																			|
	int balance;//																		|
public://																				|
	Ribak(string _name, int _lvl, int _balance)//										|
	{//																					|
		name = _name;//																	|
		lvl = _lvl;//																	|
		balance = _balance;//															|
	}//																					|
};//																					|
//																						|
//																						|
int main()//																			|
{//																						|
																					//	|
	setlocale(LC_ALL, "RU");//															|
	cout << "рыбацкая бухта" << endl;//													|
	StartGame::createRibki();//								
	StartGame::zapolnitMagaz();
	//																					|
}//																						|
//	
// 
class StartGame
{
public:
	static void createRibki()//																	|
	{//																						|
		Riba ribas[12];//													 ↓--------------
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
	}

	static void zapolnitMagaz()
	{
		Udochka udochki[5];
		udochki[0] = Udochka("ловитель параши всякой", 150, 9);
		udochki[1] = Udochka("перемотанная изолентой крепкая удочка", 250, 15);
		udochki[2] = Udochka("дефолт удочка", 250, 15);
		udochki[3] = Udochka("дефолт удочка", 250, 15);
		udochki[4] = Udochka("дефолт удочка", 250, 15);
		udochki[5] = Udochka("дефолт удочка", 250, 15);
	}
};

void createRibak()
{
	string _name;
	int _lvl = 1;
	int _balance = 100;

	cout << "введите имя рыбака: ";
	cin >> _name;

	Ribak ribak(_name, _lvl, _balance);
	cout << "добро пожаловать, " + _name + "!, ваш баланс: " + to_string(_balance) + ", ваш уровень: " + to_string(_lvl) << endl;
}


class Magaz
{
private:
	
};

//для рыбалки:
/*
* для вылова рыбы value удочки должна быть больше valueForPoymat рыбы
* за каждые 100гр рыбы дается 30 * длину рыбы голды
*/

//для меню:
/*
* сделай просмотр статов игрока(имени, баланса, лвла, удочки)
*/