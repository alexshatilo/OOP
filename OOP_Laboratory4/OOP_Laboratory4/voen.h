#pragma once
#include "transport.h"

class Voen:
	public Transport
{
	int weight;
public:
	Voen(void);
	Voen(char *, int);
	void setWeight(int weight);
	int getWeight()
	{
		return weight;
	}
	void print(void);
	void show(void);
	~Voen(void);
};

