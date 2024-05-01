#include <string>
#include <iostream>

#ifndef GAME_H
#define GAME_H


using namespace std;

class Udochka
{
public:
	string name;
	int price;
	int value;
	Udochka()
	{
		name			= "���� ������";
		price			= 0;
		value			= 0;
	}
	Udochka(string _name, int _price, int _value)
	{
		name			= _name;
		price			= _price;
		value			= _value;
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
		name			= "����";
		weight			= 14;
		dlina			= 8;
		valueForPoymat	= 8;
		rare			= "pashalko";
	}
	Riba(string _name, int _weight, int _dlina, int _valueForPoymat, string _rare)
	{
		name			= _name;
		weight			= _weight;
		dlina			= _dlina;
		valueForPoymat	= _valueForPoymat;
		rare			= _rare;
	}
};

class Game
{
public:
	static constexpr size_t UDOCHKI_COUNT = 6;
	static Udochka udochki[UDOCHKI_COUNT];
	static constexpr size_t RIBAS_COUNT = 12;
	static Riba	ribas[RIBAS_COUNT];


	static void init()
	{
		udochki[0]		= Udochka("�������� ������ ������", 150, 9);
		udochki[1]		= Udochka("������������ ��������� ������� ������", 250, 15);
		udochki[2]		= Udochka("������ ��������� ������� �����", 250, 22);
		udochki[3]		= Udochka("��������� ������ ����������� �������� �������", 450, 32);
		udochki[4]		= Udochka("������������������� ������", 600, 41);
		udochki[5]		= Udochka("����� ������ ������", 1000, 56);

		ribas[0]		= Riba("������", (rand() % 500 + 100), (rand() % 500 + 10), 0, "common");
		ribas[1]		= Riba("���", (rand() % 500 + 100), (rand() % 500 + 10), 0, "common");
		ribas[2]		= Riba("���", (rand() % 500 + 100), (rand() % 500 + 10), 10, "uncommon");
		ribas[3]		= Riba("���", (rand() % 500 + 100)/*rand() % (���� ����� - ��� ����� + 1) + (��� �����)*/, (rand() % 500 + 10), 10, "uncommon");
		ribas[4]		= Riba("����", (rand() % 500 + 100), (rand() % 500 + 10), 20, "uncommon");
		ribas[5]		= Riba("���� ��������", (rand() % 500 + 100), (rand() % 500 + 10), 20, "rare");
		ribas[6]		= Riba("���� ������", (rand() % 500 + 100), (rand() % 500 + 10), 20, "rare");
		ribas[7]		= Riba("hs,f xkty", (rand() % 900 + 100), (rand() % 1200 + 600), 30, "epic");
		ribas[8]		= Riba("������", (rand() % 2500 + 2000), (rand() % 2500 + 2000), 40, "legendary");
		ribas[9]		= Riba("����", (rand() % 2500 + 2000), (rand() % 2500 + 2000), 40, "legendary");
		ribas[10]		= Riba("����", (rand() % 2500 + 2000), (rand() % 2500 + 2000), 40, "legendary");
		ribas[11]		= Riba("����������� ���", (rand() % 2500 + 2000), (rand() % 2500 + 2000), 50, "legendary");
	}
};
#endif