#include "stdafx.h"
#include "voen.h"
#include <iostream>

using namespace std;

Voen::Voen(void)
{
	cout << "���������� ����������� �������� ��������" << endl;
}

void Voen::setweight(int weight)
{
	this->weight = weight;
}

void Voen::getweight()
{
	cout << "��� ��������(��): " << this->weight << endl;
}

Voen::~Voen(void)
{
	cout << "���������� ���������� �������� ��������" << endl;
}