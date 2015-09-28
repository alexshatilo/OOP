#include "stdafx.h"
#include "pass.h"
#include <iostream>
#include <iomanip>

using namespace std;

Pass::Pass(void)
{
	cout << "Вызывается конструктор без параметров пассажирского самолета" << endl;
}

Pass::Pass(char *Name, int Kolm) : Transport(Name)
{
	kolm = Kolm;
	cout << "Вызывается конструктор c параметрами пассажирского самолета" << endl;
}

void Pass::setKolm(int kolm)
{
	this->kolm = kolm;
}

void Pass::print()
{
	cout << "Название транспорта: " << this->getName() << endl;
	cout << "Количество мест(штук): " << this->getKolm() << endl;
}

void Pass::show()
{
	Samolet *p = head;
	while (p)
	{
		p->print();
		p = p->next;
	}
}

Pass::~Pass(void)
{
	cout << "Вызывается деструктор пассажирского самолета" << endl;
}