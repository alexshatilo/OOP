// OOP_Laboratory4.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include "transport.h"
#include "gruz.h"
#include "pass.h"
#include "voen.h"
#include "locale"
#include <iostream>

using namespace std;

Transport *Transport::head = NULL;

int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "Russian");
	Air transport("��������");
	transport.add();

	Voen voen("��-5", 1000);
	voen.add();
	
	Pass pass("��������", 80);
	pass.add();

	Gruz gruz("��-105", 8900);
	gruz.add();
	transport.show();
	return 0;
}

