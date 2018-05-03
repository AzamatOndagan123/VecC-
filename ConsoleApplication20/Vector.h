#pragma once
#include "MyString.h"

class Vector
{
private:
	//������� ������ ����������
	MyString **vector;
	//������ ������ ���������� ������
	const int size = 5;
	//���������� ��� �������� ����������� ����
	int check;
	//�������������� ���������� ��� ���������� �������
	int len;
public:
	//����������� �� ���������
	Vector();
	//
	void add(const MyString string);
	//����� ���������� ������
	void Sort();
	void toString();
	//���������� �� ���������
	~Vector();
};

