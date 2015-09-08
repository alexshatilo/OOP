// OOP_Laboratory.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
#include <locale>
#include <windows.h>
#include "Book.h"

using namespace std;

void bookauthor(Book b[], int size, char aut[20])
{
	cout << "������ ���� ��������� ������:" << endl;
	for (int i = 0; i < size; i++)
	if (strcmp(aut, b[i].getAuthor()) == 0) b[i].Print();
}

void bookpublish(Book b[], int size, char pub[20])
{
	cout << "������ ���� ��������� ������������:" << endl;
	for (int i = 0; i < size; i++)
	if (strcmp(pub, b[i].getPublish()) == 0) b[i].Print();
}

void bookyear(Book b[], int size, int yea)
{
	cout << "������ ���� ����� ��������� ����:" << endl;
	for (int i = 0; i < size; i++)
	if (b[i].getYear()>yea) b[i].Print();
}

int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	/*Book *aq = new Book(1, "1", "1", "1", 1111, 111, 100000, "�������");
	aq->Print();
	Book *b = new Book(*aq);
	b->Print();*/
	const int SIZE = 5;
	Book book[SIZE];
	char a[20];
	char p[20];
	int y;
	book[0] = Book(1, "������", "������", "�������", 1998, 230, 100000, "�������");
	book[1] = Book(2, "�����", "�������", "����", 1928, 500, 200000, "������");
	book[2] = Book(3, "����", "������", "���", 2005, 150, 110000, "�������");
	book[3] = Book(4, "�����", "�������", "�������", 2000, 100, 90000, "�������");
	book[4] = Book(5, "�����", "������", "����", 1999, 341, 120000, "�������");
	cout << "----------------------------------" << endl;
	cout << "������� ������:" << endl;
	gets_s(a);
	bookauthor(book, SIZE, a);
	cout << "----------------------------------" << endl;
	cout << "������� ������������:" << endl;
	gets_s(p);
	bookpublish(book, SIZE, p);
	cout << "----------------------------------" << endl;
	cout << "������� ���:" << endl;
	cin >> y;
	bookyear(book, SIZE, y);
	return 0;
}

