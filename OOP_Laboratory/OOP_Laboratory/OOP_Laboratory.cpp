// OOP_Laboratory.cpp: ���������� ����� ����� ��� ����������� ����������.
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
	book[1] = Book(1, "������", "������", "�������", 1998, 230, 100000, "�������");
	book[2] = Book(2, "�����", "�������", "����", 1928, 500, 200000, "������");
	book[3] = Book(3, "����", "������", "���", 2005, 150, 110000, "�������");
	book[4] = Book(4, "�����", "�������", "�������", 2000, 100, 90000, "�������");
	book[5] = Book(5, "�����", "������", "����", 1999, 341, 120000, "�������");
	cout << "----------------------------------" << endl;
	cout << "������� ������:" << endl;
	gets_s(a);
	cout << "������ ���� ��������� ������:" << endl;
	for (int i = 1; i <= 5; i++)
		book[i].bookauthor(a);
	cout << "----------------------------------" << endl;
	cout << "������� ������������:" << endl;
	gets_s(p);
	cout << "������ ���� ��������� ������������:" << endl;
	for (int i = 1; i <= 5; i++)
		book[i].bookpublish(p);
	cout << "----------------------------------" << endl;
	cout << "������� ���:" << endl;
	cin >> y;
	cout << "������ ���� ����� ��������� ����:" << endl;
	for (int i = 1; i <= 5; i++)
		book[i].bookyear(y);
	return 0;
}

