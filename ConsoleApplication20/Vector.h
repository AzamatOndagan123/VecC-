#pragma once
#include "MyString.h"

class Vector
{
private:
	//создаем массив указателей
	MyString **vector;
	//задаем размер выделенной памяти
	const int size = 5;
	//переменная для подсчета колличества слов
	int check;
	//дополнительная переменная для увелечения массива
	int len;
public:
	//конструктор по умолчанию
	Vector();
	//
	void add(const MyString string);
	//метод распечатки текста
	void Sort();
	void toString();
	//деструктор по умолчанию
	~Vector();
};

