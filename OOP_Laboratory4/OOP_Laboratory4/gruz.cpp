#include "stdafx.h"
#include "gruz.h"
#include <iostream>
#include <iomanip>

using namespace std;

Gruz::Gruz(void)
{
	cout << "Вызывается конструктор без параметров грузового самолета" << endl;
}

Gruz::Gruz(char *Name, int Kolg) : Transport(Name)
{
	kolg = Kolg;
	cout << "Вызывается конструктор c параметрами грузового самолета" << endl;
}

void Gruz::setKolg(int kolg)
{
	this->kolg = kolg;
}

void Gruz::print()
{
	cout << "Название транспорта: " << this->getName() << endl;
	cout << "Количество груза(кг): " << this->getKolg() << endl;
}

void Gruz::show()
{
	Samolet *p = head;
	while (p)
	{
		p->print();
		p = p->next;
	}
}

Gruz::~Gruz(void)
{
	cout << "Вызывается деструктор грузового самолета" << endl;
}