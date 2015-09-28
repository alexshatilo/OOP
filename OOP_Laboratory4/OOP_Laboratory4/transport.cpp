#include "stdafx.h"
#include "transport.h"
#include <iostream>
#include <iomanip>

using namespace std;

Transport::Transport(void)
{
	cout << "���������� ����������� ��� ���������� ����������" << endl;
}

Transport::Transport(char *Name) : Samolet(Name)
{
	cout << "���������� ����������� c ����������� ����������" << endl;
}

void Transport::setName(char *Name)
{
	this->name = Name;
}

const char* Transport::getName() const
{
	return name;
}

Transport::~Transport(void)
{
	cout << "���������� ���������� ����������" << endl;
}

void Transport::print(void)
{
	cout << "�������� ����������: " << this->getName() << endl;
}

void Transport::show(void)
{
	Samolet *p = head;
	while (p)
	{
		p->print();
		cout << endl;
		p = p->next;
	}
}

void Transport::add()
{
	if (!head)
	{
		head = this;
		this->next = NULL;
	}
	else
	{
		Samolet *q = head;
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
