#include "stdafx.h"
#include "pass.h"
#include <iostream>
#include <iomanip>

using namespace std;

Pass::Pass(void)
{
	cout << "���������� ����������� ��� ���������� ������������� ��������" << endl;
}

Pass::Pass(char *Name, int Kolm) : Transport(Name)
{
	kolm = Kolm;
	cout << "���������� ����������� c ����������� ������������� ��������" << endl;
}

void Pass::setKolm(int kolm)
{
	this->kolm = kolm;
}

void Pass::print()
{
	cout << "�������� ����������: " << this->getName() << endl;
	cout << "���������� ����(����): " << this->getKolm() << endl;
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
	cout << "���������� ���������� ������������� ��������" << endl;
}