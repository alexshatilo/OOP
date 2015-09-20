#pragma once

#include "transport.h"

class Pass:
	public Transport
{
	int kolm;
public:
	Pass(void);
	void setkolm(int kolm);
	void getkolm();
	~Pass(void);
};