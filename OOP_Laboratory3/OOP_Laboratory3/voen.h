#pragma once

#include "transport.h"

class Voen:
	public Transport
{
	int weight;
public:
	Voen(void);
	void setweight(int weight);
	void getweight();
	~Voen(void);
};