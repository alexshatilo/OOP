// OOP_Laboratory3.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "transport.h"
#include "gruz.h"
#include "pass.h"
#include "voen.h"
#include "locale"
#include <iostream>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "Russian");
	Transport a;
	a.setname("Самолет");
	a.getname();
	cout << endl;
	Gruz b;
	b.setname("ИС-5");
	b.getname();
	b.setkolg(1800000);
	b.getkolg();
	cout << endl;
	Pass c;
	c.setname("ИЛ-8");
	c.getname();
	c.setkolm(160);
	c.getkolm();
	cout << endl;
	Voen d;
	d.setname("СУ-5");
	d.getname();
	d.setweight(15000);
	d.getweight();
	cout << endl;
	return 0;
}

