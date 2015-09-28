#pragma once
#include "transport.h"

class Pass:
	public Transport
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