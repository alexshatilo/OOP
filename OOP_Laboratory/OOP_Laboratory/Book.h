#pragma once
#include "stdafx.h"
#include <iostream>

using namespace std;

class Book
{
private:
	int id;
	char *name;
	char *author;
	char *publish;
	int year;
	int number;
	int price;
	char *type;

public:
	Book();
	Book(int, char*, char*, char*, int, int, int, char*);
	Book(const Book &);
	~Book();

	void setId(int);
	void setName(char*);
	void setAuthor(char*);
	void setPublish(char*);
	void setYear(int);
	void setNumber(int);
	void setPrice(int);
	void setType(char*);

	int getId();
	char* getName();
	char* getAuthor();
	char* getPublish();
	int getYear();
	int getNumber();
	int getPrice();
	char* getType();

	void Print();
};