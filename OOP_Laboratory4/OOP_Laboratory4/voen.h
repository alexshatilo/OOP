#pragma once
#include "air.h"

class Voen:
	public Air
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

