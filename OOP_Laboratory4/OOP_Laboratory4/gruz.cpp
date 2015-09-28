#include "stdafx.h"
#include "gruz.h"
#include <iostream>
#include <iomanip>

using namespace std;

Gruz::Gruz(void)
{
	cout << "���������� ����������� ��� ���������� ��������� ��������" << endl;
}

Gruz::Gruz(char *Name, int Kolg) : Transport(Name)
{
	kolg = Kolg;
	cout << "���������� ����������� c ����������� ��������� ��������" << endl;
}

void Gruz::setKolg(int kolg)
{
	this->kolg = kolg;
}

void Gruz::print()
{
	cout << "�������� ����������: " << this->getName() << endl;
	cout << "���������� �����(��): " << this->getKolg() << endl;
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
	cout << "���������� ���������� ��������� ��������" << endl;
}