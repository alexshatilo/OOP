#pragma once
#include "transport.h"

class Air:
	public Transport
{
public:
	Air *next;
	Air(void);
	Air(char *);
	virtual void setName(char *Name);
	virtual const char* getName()const;
	void print(void);
	static void show();
	virtual void add();
	virtual ~Air(void);
};

