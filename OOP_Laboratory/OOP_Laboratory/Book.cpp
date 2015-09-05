#include "stdafx.h"
#include <iostream>
#include "Book.h"

Book::Book()
{
	cout << "Вызов конструктора без параметров" << endl;
	id = 0;
	strcpy_s(name, "0");
	strcpy_s(author, "0");
	strcpy_s(publish, "0");
	year = 0;
	number = 0;
	price = 0;
	strcpy_s(type, "0");
}

Book::Book(int ID, char* NAME, char* AUTHOR, char* PUBLISH, int YEAR, int NUMBER, int PRICE, char* TYPE)
{
	cout << "Вызов конструктора c параметрами" << endl;
	id = ID;
	strcpy_s(name, NAME);
	strcpy_s(author, AUTHOR);
	strcpy_s(publish, PUBLISH);
	year = YEAR;
	number = NUMBER;
	price = PRICE;
	strcpy_s(type, TYPE);
}

/*Book::Book(const Book &b)
{
cout << "Вызов конструктора копирования" << endl;
id = b.id;
strcpy_s(name, b.name);
strcpy_s(author, b.author);
strcpy_s(publish, b.publish);
year = b.year;
number = b.number;
price = b.price;
strcpy_s(type, b.type);
}*/

Book::~Book()
{
cout << "Вызов деструктора" << endl;
}

void Book::setId(int ID)
{
	id = ID;
}

void Book::setName(char* NAME)
{
	strcpy_s(name, NAME);
}

void Book::setAuthor(char* AUTHOR)
{
	strcpy_s(author, AUTHOR);
}

void Book::setPublish(char* PUBLISH)
{
	strcpy_s(publish, PUBLISH);
}

void Book::setYear(int Year)
{
	year = Year;
}

void Book::setNumber(int NUMBER)
{
	number = NUMBER;
}

void Book::setPrice(int PRICE)
{
	price = PRICE;
}

void Book::setType(char* TYPE)
{
	strcpy_s(type, TYPE);
}

int Book::getId(void)
{
	return id;
}

char* Book::getName(void)
{
	return name;
}

char* Book::getAuthor(void)
{
	return author;
}

char* Book::getPublish(void)
{
	return publish;
}

int Book::getYear(void)
{
	return year;
}

int Book::getNumber(void)
{
	return number;
}

int Book::getPrice(void)
{
	return price;
}

char* Book::getType(void)
{
	return type;
}

void Book::Print()
{
	cout << "Номер: " << id << endl;
	cout << "Название: " << name << endl;
	cout << "Автор: " << author << endl;
	cout << "Издательство: " << publish << endl;
	cout << "Год издания: " << year << endl;
	cout << "Страниц: " << number << endl;
	cout << "Цена: " << price << endl;
	cout << "Тип переплета: " << type << endl;
}

void Book::bookauthor(char aut[20])
{
	if (strcmp(aut, author) == 0) cout << name << endl;
}

void Book::bookpublish(char pub[20])
{
	if (strcmp(pub, publish) == 0) cout << name << endl;
}

void Book::bookyear(int yea)
{
	if (year > yea) cout << name << endl;
}