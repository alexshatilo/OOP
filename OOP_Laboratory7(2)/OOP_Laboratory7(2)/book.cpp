#include "stdafx.h"
#include <iostream>
#include "book.h"

Book::Book(void)
{

}

Book::Book(int)
{

}

Book::Book(char* NAME, int COST)
{
	name = NAME;
	cost = COST;
}

Book::~Book(void)
{

}

void Book::setName(char* NAME)
{
	name = NAME;
}

char* Book::getName()
{
	return this->name;
}

void Book::setCost(int COST)
{
	cost = COST;
}

int Book::getCost()
{
	return this->cost;
}

bool Book::operator == (Book &x)
{
	return this->cost != x.cost;
}

void Book::operator = (int x)
{
	this->cost = x;
}

