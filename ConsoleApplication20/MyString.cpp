#include "stdafx.h"
#include "MyString.h"
#include <string>
#include<iostream>

using namespace std;


MyString::MyString()
{
	Mychar = NULL;

}

void MyString::toString()
{
	if (Mychar != NULL)
		cout << Mychar << endl;
}


MyString::~MyString()
{

	delete[] Mychar;
}

MyString::MyString(const char * abc) :MyString()
{
	int size = strlen(abc) + 1;
	Mychar = new char[size];
	strcpy_s(Mychar, size, abc);
}

MyString::MyString(const MyString & obj) :MyString()
{
	int size = strlen(obj.Mychar) + 1;
	Mychar = new char[size];
	strcpy_s(Mychar, size, obj.Mychar);
}

MyString & MyString::operator=(MyString & obj)
{
	if (Mychar != NULL)
		delete[] Mychar;
	int size = strlen(obj.Mychar) + 1;
	Mychar = new char[size];
	strcpy_s(Mychar, size, obj.Mychar);
	return *this;
}

bool MyString::operator<(MyString & obj) const 
{
	if (strcmp(Mychar, obj.Mychar)<0)
	{
		return true;
	}
	return false;
}

void MyString::operator+(MyString & obj)
{
	int size = strlen(Mychar) + 1;
	char *temp = new char[size];
	strcpy_s(temp, size, Mychar);
	if (Mychar != NULL)
		delete[] Mychar;
	size += strlen(obj.Mychar);
	Mychar = new char[size];
	strcpy_s(Mychar, strlen(temp) + 1, temp); // strlen(temp) + 1 - кол-во копируемых элементов
	strcat_s(Mychar, size, obj.Mychar);
}

void MyString::copy(const char *abc)
{
	if (Mychar != NULL)
		delete[] Mychar;
	int size = strlen(abc) + 1;
	Mychar = new char[size];
	strcpy_s(Mychar, size, abc);
}
