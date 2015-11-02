#include "stdafx.h"
#include "air.h"
#include <iostream>
#include <iomanip>

using namespace std;

Air::Air(void)
{
	cout << "���������� ����������� ��� ���������� ����������" << endl;
}

Air::Air(char *Name) : Transport(Name)
{
	cout << "���������� ����������� c ����������� ����������" << endl;
}

void Air::setName(char *Name)
{
	this->name = Name;
}

const char* Air::getName() const
{
	return name;
}

Air::~Air(void)
{
	cout << "���������� ���������� ����������" << endl;
}

void Air::print(void)
{
	cout << "�������� ����������: " << this->getName() << endl;
}

void Air::show(void)
{
	Transport *p = head;
	while (p)
	{
		p->print();
		cout << endl;
		p = p->next;
	}
}

void Air::add()
{
	if (!head)
	{
		head = this;
		this->next = NULL;
	}
	else
	{
		Transport *q = head;
		if (q->next == NULL)
		{
			q->next = this;
			this->next = NULL;
		}
		else
		{
			while (q->next != NULL)
			{
				q = q->next;
			};
			q->next = this;
			this->next = NULL;
		}
	}
}
