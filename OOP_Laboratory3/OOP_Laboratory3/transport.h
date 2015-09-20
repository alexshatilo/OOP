#pragma once

class Transport
{
	char *name;
public:
	Transport(void);
	void setname(char *name);
	void getname();
	~Transport(void);
};