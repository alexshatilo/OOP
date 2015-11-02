#pragma once
#include "air.h"

class Pass:
	public Air
{
	int kolm;
public:
	Pass(void);
	Pass(char *, int);
	void setKolm(int Kolm);
	int getKolm()
	{
		return kolm;
	}
	void print(void);
	void show(void);
	~Pass(void);
};