#include "stdafx.h"
#include "pass.h"
#include <iostream>

using namespace std;

Pass::Pass(void)
{
	cout << "Вызывается конструктор пассажирского транспорта" << endl;
}

void Pass::setkolm(int kolm)
{
	this->kolm = kolm;
}

void Pass::getkolm()
{
	cout << "Количество мест(штук): " << this->kolm << endl;
}

Pass::~Pass(void)
{
	cout << "Вызывается деструктор пассажирского транспорта" << endl;
}