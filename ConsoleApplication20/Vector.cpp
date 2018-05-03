#include "stdafx.h"
#include "Vector.h"
#include <iostream>

using namespace std;

Vector::Vector()
{
	vector = new MyString*[size] {NULL};
	check = 0;
	len = size;
}

void Vector::add(const MyString string)
{
	//��������� ������� ������
	if (vector != NULL)
	{	//�������� ������
		vector[check] = new MyString(string);
		//������� ����������� ����
		check++;
		//��������� �� �������� �� �����
		if (check == len)
		{
			//������� ������ ��� �����������
			MyString *temp;
			temp = new MyString[len];
			//���� ��� ����������� ������ � ��������� ������
			for (int i = 0; i < len; i++)
				temp[i] = *vector[i];
			//������� ������ �� ������� ��������
			for (int i = 0; i < len; i++)
				delete vector[i];
			//������� ��� ������
			delete[] vector;
			//����������� ������ �������
			len *= 2;
			vector = new MyString*[len] {NULL};
			//�������� ������ �� ���������� ������� (temp)
			for (int i = 0; i < check; i++)
			{
				vector[i] = new MyString(temp[i]);
			}
			delete[] temp;
		}
	}

	else
		cout << "Error No Memmory" << endl;
}

void Vector::Sort()
{
	MyString temp;
	for (int i = 0; i <check; i++)
	{
		for (int  j = check-1; j >i; j--)
		{
			if (*vector[j] < *vector[j - 1])
			{
				temp = *vector[j];
				*vector[j] = *vector[j-1];
				*vector[j - 1] = temp;
			}
		}
	}
}

void Vector::toString()
{
	if (vector != NULL)
		for (int i = 0; i < len; i++)
		{
			if (vector[i] != NULL)
			{
				cout << i << " - ";
				vector[i]->toString();
			}
		}
}
Vector::~Vector()
{
	for (int i = 0; i < size; i++)
	{
		delete vector[i];
	}
	delete[] vector;
}
