#include "stdafx.h"
#include "voen.h"
#include <iostream>
#include <iomanip>

using namespace std;

Voen::Voen(void)
{
	cout << "Вызывается конструктор без параметров военного самолета" << endl;
}

Voen::Voen(char *Name, int Weight) : Air(Name)
{
	weight = Weight;
	cout << "Вызывается конструктор c параметрами военного самолета" << endl;
}

void Voen::setWeight(int weight)
{
	this->weight = weight;
}

void Voen::print()
{
	cout << "Название транспорта: " << this->getName() << endl;
	cout << "Вес самолета(кг): " << this->getWeight() << endl;
}

void Voen::show()
{
	Transport *p = head;
	while (p)
	{
		p->print();
		p = p->next;
	}
}

Voen::~Voen(void)
{
	cout << "Вызывается деструктор военного самолета" << endl;
}