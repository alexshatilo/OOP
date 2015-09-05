// OOP_Laboratory.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <locale>
#include <windows.h>
#include "Book.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Book book[5];
	char a[20];
	char p[20];
	int y;
	book[1] = Book(1, "Пираты", "Иванов", "БелКниг", 1998, 230, 100000, "Твердый");
	book[2] = Book(2, "Север", "Сергеев", "СОЮЗ", 1928, 500, 200000, "Мягкий");
	book[3] = Book(3, "День", "Белкин", "БГУ", 2005, 150, 110000, "Средний");
	book[4] = Book(4, "Город", "Сидоров", "ЭВЕРЕСТ", 2000, 100, 90000, "Твердый");
	book[5] = Book(5, "Земля", "Белкин", "БГТУ", 1999, 341, 120000, "Твердый");
	cout << "----------------------------------" << endl;
	cout << "Введите автора:" << endl;
	gets_s(a);
	cout << "Список книг заданного автора:" << endl;
	for (int i = 1; i <= 5; i++)
		book[i].bookauthor(a);
	cout << "----------------------------------" << endl;
	cout << "Введите издательство:" << endl;
	gets_s(p);
	cout << "Список книг заданного издательства:" << endl;
	for (int i = 1; i <= 5; i++)
		book[i].bookpublish(p);
	cout << "----------------------------------" << endl;
	cout << "Введите год:" << endl;
	cin >> y;
	cout << "Список книг после заданного года:" << endl;
	for (int i = 1; i <= 5; i++)
		book[i].bookyear(y);
	return 0;
}

