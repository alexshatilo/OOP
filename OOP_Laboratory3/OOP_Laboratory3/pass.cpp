#include "stdafx.h"
#include "pass.h"
#include <iostream>

using namespace std;

Pass::Pass(void)
{
	cout << "���������� ����������� ������������� ����������" << endl;
}

void Pass::setkolm(int kolm)
{
	this->kolm = kolm;
}

void Pass::getkolm()
{
	cout << "���������� ����(����): " << this->kolm << endl;
}

Pass::~Pass(void)
{
	cout << "���������� ���������� ������������� ����������" << endl;
}