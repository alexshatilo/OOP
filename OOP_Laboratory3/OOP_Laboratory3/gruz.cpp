#include "stdafx.h"
#include "gruz.h"
#include <iostream>

using namespace std;

Gruz::Gruz(void)
{
	cout << "Вызывается конструктор грузового транспорта" << endl;
}

void Gruz::setkolg(int kolg)
{
	this->kolg = kolg;
}

void Gruz::getkolg()
{
	cout << "Количество перевозимого груза(кг): " << this->kolg << endl;
}

Gruz::~Gruz(void)
{
	cout << "Вызывается деструктор грузового транспорта" << endl;
}