#pragma once

class Samolet
{
protected:
	char *name;
	static Samolet *head;
public:
	Samolet *next;
	Samolet(void){};
	Samolet(char *Name){ name = Name; };
	virtual void setName( char *Name) = 0;
	virtual const char* getName()const = 0;
	virtual void print(void) = 0;
	virtual void add() = 0;
	virtual ~Samolet(void){};
};