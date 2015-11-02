#pragma once

class Transport
{
protected:
	char *name;
	static Transport *head;
public:
	Transport *next;
	Transport(void){};
	Transport(char *Name){ name = Name; };
	virtual void setName( char *Name) = 0;
	virtual const char* getName()const = 0;
	virtual void print(void) = 0;
	virtual void add() = 0;
	virtual ~Transport(void){};
};