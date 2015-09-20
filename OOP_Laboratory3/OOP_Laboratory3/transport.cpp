#include "stdafx.h"
#include "transport.h"
#include <iostream>

using namespace std;

Transport::Transport(void)
{
	cout << "Вызывается конструктор транспорта" << endl;
}

void Transport::setname(char *name)
{
	this->name = name;
}

void Transport::getname()
{
	cout << "Название транспорта: " << this->name << endl;
}

Transport::~Transport(void)
{
	cout << "Вызывается деструктор транспорта" << endl;
}