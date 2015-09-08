#include "stdafx.h"
#include <iostream>
#include "Book.h"

Book::Book()
{
	cout << "����� ������������ ��� ����������" << endl;
	id = 0;
	name = "0";
	author = "0";
	publish = "0";
	year = 0;
	number = 0;
	price = 0;
	type = "0";
}

Book::Book(int ID, char* NAME, char* AUTHOR, char* PUBLISH, int YEAR, int NUMBER, int PRICE, char* TYPE)
{
	cout << "����� ������������ c �����������" << endl;
	id = ID;
	//name = new char[strlen(NAME)+1];
	name = NAME;
	author = AUTHOR;
	publish = PUBLISH;
	year = YEAR;
	number = NUMBER;
	price = PRICE;
	type = TYPE;
}

Book::Book(const Book &b)
{
	cout << "����� ������������ �����������" << endl;
	id = b.id;
	name = b.name;
	author = b.author;
	publish = b.publish;
	year = b.year;
	number = b.number;
	price = b.price;
	type = b.type;
}

Book::~Book()
{
	cout << "����� �����������" << endl;
}

void Book::setId(int ID)
{
	id = ID;
}

void Book::setName(char* NAME)
{
	name=NAME;
}

void Book::setAuthor(char* AUTHOR)
{
	author = AUTHOR;
}

void Book::setPublish(char* PUBLISH)
{
	publish = PUBLISH;
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
	type = TYPE;
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
	cout << "�����: " << id << endl;
	cout << "��������: " << name << endl;
	cout << "�����: " << author << endl;
	cout << "������������: " << publish << endl;
	cout << "��� �������: " << year << endl;
	cout << "�������: " << number << endl;
	cout << "����: " << price << endl;
	cout << "��� ���������: " << type << endl;
}

