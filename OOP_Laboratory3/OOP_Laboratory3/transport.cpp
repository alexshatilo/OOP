#include "stdafx.h"
#include "transport.h"
#include <iostream>

using namespace std;

Transport::Transport(void)
{
	cout << "���������� ����������� ����������" << endl;
}

void Transport::setname(char *name)
{
	this->name = name;
}

void Transport::getname()
{
	cout << "�������� ����������: " << this->name << endl;
}

Transport::~Transport(void)
{
	cout << "���������� ���������� ����������" << endl;
}