// OOP_Laboratory4.cpp: определяет точку входа для консольного приложения.
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
	Air transport("Самолеты");
	transport.add();

	Voen voen("ИЛ-5", 1000);
	voen.add();
	
	Pass pass("Беларусь", 80);
	pass.add();

	Gruz gruz("СУ-105", 8900);
	gruz.add();
	transport.show();
	return 0;
}

