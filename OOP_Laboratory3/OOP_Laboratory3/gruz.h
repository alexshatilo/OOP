#pragma once

#include "transport.h"

class Gruz:
	public Transport
{
	int kolg;
public:
	Gruz(void);
	void setkolg(int kolg);
	void getkolg();
	~Gruz(void);
};