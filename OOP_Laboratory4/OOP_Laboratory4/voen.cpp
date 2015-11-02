#include "stdafx.h"
#include "voen.h"
#include <iostream>
#include <iomanip>

using namespace std;

Voen::Voen(void)
{
	cout << "���������� ����������� ��� ���������� �������� ��������" << endl;
}

Voen::Voen(char *Name, int Weight) : Air(Name)
{
	weight = Weight;
	cout << "���������� ����������� c ����������� �������� ��������" << endl;
}

void Voen::setWeight(int weight)
{
	this->weight = weight;
}

void Voen::print()
{
	cout << "�������� ����������: " << this->getName() << endl;
	cout << "��� ��������(��): " << this->getWeight() << endl;
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
	cout << "���������� ���������� �������� ��������" << endl;
}