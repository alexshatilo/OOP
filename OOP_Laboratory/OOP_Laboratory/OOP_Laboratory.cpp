// OOP_Laboratory.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <locale>
#include <windows.h>
#include "Book.h"

using namespace std;

void bookauthor(Book b[], int size, char aut[20])
{
	cout << "Список книг заданного автора:" << endl;
	for (int i = 0; i < size; i++)
	if (strcmp(aut, b[i].getAuthor()) == 0) b[i].Print();
}

void bookpublish(Book b[], int size, char pub[20])
{
	cout << "Список книг заданного издательства:" << endl;
	for (int i = 0; i < size; i++)
	if (strcmp(pub, b[i].getPublish()) == 0) b[i].Print();
}

void bookyear(Book b[], int size, int yea)
{
	cout << "Список книг после заданного года:" << endl;
	for (int i = 0; i < size; i++)
	if (b[i].getYear()>yea) b[i].Print();
}

int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	/*Book *aq = new Book(1, "1", "1", "1", 1111, 111, 100000, "Твердый");
	aq->Print();
	Book *b = new Book(*aq);
	b->Print();*/
	const int SIZE = 5;
	Book book[SIZE];
	char a[20];
	char p[20];
	int y;
	book[0] = Book(1, "Пираты", "Иванов", "БелКниг", 1998, 230, 100000, "Твердый");
	book[1] = Book(2, "Север", "Сергеев", "СОЮЗ", 1928, 500, 200000, "Мягкий");
	book[2] = Book(3, "День", "Белкин", "БГУ", 2005, 150, 110000, "Средний");
	book[3] = Book(4, "Город", "Сидоров", "ЭВЕРЕСТ", 2000, 100, 90000, "Твердый");
	book[4] = Book(5, "Земля", "Белкин", "БГТУ", 1999, 341, 120000, "Твердый");
	cout << "----------------------------------" << endl;
	cout << "Введите автора:" << endl;
	gets_s(a);
	bookauthor(book, SIZE, a);
	cout << "----------------------------------" << endl;
	cout << "Введите издательство:" << endl;
	gets_s(p);
	bookpublish(book, SIZE, p);
	cout << "----------------------------------" << endl;
	cout << "Введите год:" << endl;
	cin >> y;
	bookyear(book, SIZE, y);
	return 0;
}

