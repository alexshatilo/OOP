#pragma once
#include "air.h"

class Gruz:
	public Air
{
	int kolg;
public:
	Gruz(void);
	Gruz(char *, int);
	void setKolg(int kolg);
	int getKolg()
	{
		return kolg;
	}
	void print(void);
	void show(void);
	~Gruz(void);
};

