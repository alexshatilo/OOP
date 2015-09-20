#include "stdafx.h"
#include "voen.h"
#include <iostream>

using namespace std;

Voen::Voen(void)
{
	cout << "Вызывается конструктор военного самолета" << endl;
}

void Voen::setweight(int weight)
{
	this->weight = weight;
}

void Voen::getweight()
{
	cout << "Вес самолета(кг): " << this->weight << endl;
}

Voen::~Voen(void)
{
	cout << "Вызывается деструктор военного самолета" << endl;
}