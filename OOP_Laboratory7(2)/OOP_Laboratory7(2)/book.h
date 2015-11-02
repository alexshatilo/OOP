#pragma once

class Book
{
protected:
	char* name;
	int cost;
public:
	Book(int);
	Book(void);
	Book(char*, int);
	bool operator == (Book &x);
	void operator = (int x);
	friend std::ostream& operator<<(std::ostream &stream, const Book &value) { return stream << value.cost; }
	void setName(char*);
	void setCost(int);
	int getCost();
	char* getName();
	~Book(void);
};