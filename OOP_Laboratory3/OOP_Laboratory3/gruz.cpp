#include "stdafx.h"
#include "gruz.h"
#include <iostream>

using namespace std;

Gruz::Gruz(void)
{
	cout << "���������� ����������� ��������� ����������" << endl;
}

void Gruz::setkolg(int kolg)
{
	this->kolg = kolg;
}

void Gruz::getkolg()
{
	cout << "���������� ������������ �����(��): " << this->kolg << endl;
}

Gruz::~Gruz(void)
{
	cout << "���������� ���������� ��������� ����������" << endl;
}