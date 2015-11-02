// OOP_Laboratory7(2).cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include "book.h"

using namespace std;

template<class T>
class Matrica
{
	int rows, cols;
	T **value;
public:
	Matrica(int Rows, int Cols);
	~Matrica();
	void Fill();
	void Display();
	bool operator < (Matrica &x);
	void operator >= (Matrica &x);
	bool operator == (Matrica &x);
	void operator * (Matrica &x);
};

template<class T>
Matrica<T>::Matrica(int ROWS, int COLS)
{
	rows = ROWS;
	cols = COLS;
	value = new T *[rows];
	for (int i = 0; i<rows; i++)
	{
		value[i] = new T[cols];
		for (int j = 0; j<cols; j++)
		{
			value[i][j] = 0;
		}
	}
}

template<class T>
Matrica<T>::~Matrica()
{
	for (int i = 0; i<rows; i++)
	{
		delete value[i];
	}
	delete[] value;
}

template<class T>
void Matrica<T>::Fill()
{
	for (int i = 0; i<rows; i++)
	{
		for (int j = 0; j<cols; j++)
		{
			value[i][j] = (int)rand();
		}
	}
}

template<class T>
void Matrica<T>::Display()
{
	for (int i = 0; i<rows; i++)
	{
		for (int j = 0; j<cols; j++)
		{
			cout << value[i][j] << "  ";
		}
		cout << endl;
	}
}

template<class T>
bool Matrica<T>::operator < (Matrica& x)
{
	return (this->rows<x.rows && this->cols<x.cols);
}

template<class T>
void Matrica<T>::operator >= (Matrica& x)
{
	for (int i = 0; i < x.rows; i++)
	{
		for (int j = 0; j < x.cols; j++)
		{
			value[i][j] = 10000;
		}
	}
}

template<class T>
bool Matrica<T>::operator == (Matrica& x)
{
	for (int j = 0; j<x.cols; j++)
	{
		if (this->value[0][j] == x.value[0][j]) return false;
	}
}

template<class T>
void Matrica<T>::operator * (Matrica& x)
{
	for (int i = 0; i < x.rows; i++)
	{
		for (int j = 0; j < x.cols; j++)
		{
			x.value[i][j] = 0 - x.value[i][j];
		}
	}
}

int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "Russian");
	int Row1, Col1;
	cout << "������� ���������� ��������: ";
	cin >> Row1;
	cout << "������� ���������� �����: ";
	cin >> Col1;
	Matrica<Book> Matrix1(Row1, Col1);
	Matrix1.Fill();
	Matrix1.Display();
	int Row2, Col2;
	cout << "������� ���������� ��������: ";
	cin >> Row2;
	cout << "������� ���������� �����: ";
	cin >> Col2;
	Matrica<Book> Matrix2(Row2, Col2);
	Matrix2.Fill();
	Matrix2.Display();
	cout << "----------��������� ������ �� ���������� ����� � ��������----------" << endl;
	if(Matrix1 < Matrix2) cout << "������ ������� ������ ������" << endl;
	else cout << "������ ������� ������(�����) ������" << endl;
	cout << "----------���������� ������ � ���������� ����----------" << endl;
	Matrix2 >= Matrix2;
	Matrix2.Display();
	cout << "----------��������� ������ �� ������� ��������----------" << endl;
	if (Matrix1 == Matrix2) cout << "������ ������� ������ ������� ����� ������� �������� ������ �������" << endl;
	else cout << "������ ������� ������ ������� �� ����� ������� �������� ������ �������" << endl;
	/*cout << "----------�������� ���� ��������� �������----------" << endl;
	Matrix1*Matrix1;
	Matrix1.Display();*/
	system("pause");
	return 0;
}

