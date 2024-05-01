#include <iostream>
#include <string>
#include "Game.h"


#ifndef STARTGAME_H
#define STARTGAME_H

using namespace std;

class Ribak
{
private:
	string name;
	int lvl;
	int balance;
	Udochka udochka;
public:
	Ribak() : name(""), lvl(0), balance(0) {} // Конструктор по умолчанию

	Ribak(string _name, int _lvl, int _balance, Udochka udochka) : name(_name), lvl(_lvl), balance(_balance) {}

};

class StartGame
{
private:
	Ribak ribak;
	string name;
	int lvl;
	int balance;
public:
	StartGame() { // Redacted by Funtik

		cout << "введите имя рыбака: ";
		cin >> name;
		lvl = 1;
		balance = 100;
		Ribak ribak(name, lvl, balance, Game::udochki[0]);
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
#endif