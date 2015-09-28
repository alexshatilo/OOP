#pragma once
#include "samolet.h"

class Transport:
	public Samolet
{
public:
	Transport *next;
	Transport(void);
	Transport(char *);
	virtual void setName(char *Name);
	virtual const char* getName()const;
	void print(void);
	static void show();
	virtual void add();
	virtual ~Transport(void);
};

