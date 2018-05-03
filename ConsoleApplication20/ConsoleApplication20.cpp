// VectorString.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include "MyString.h"
#include "Vector.h"

using namespace std;

//class Point
//{
//private:
//	int x;
//	int y;
//public:
//	Point();
//	Point(int axis);
//	Point(int x, int y);
//
//	Point operator+ (const Point obj);
//	Point operator+ (const int step);
//	bool operator== (const Point obj) const;
//	bool operator< (const Point obj) const;
//
//	void toString() const;
//
//	~Point();
//};
//
//Point::Point() : x(0), y(0) {}
//
//Point::Point(int axis)
//{
//	this->x = this->y = axis;
//}
//
//Point::Point(int x, int y)
//{
//	this->x = x;
//	this->y = y;
//}
//
//Point Point::operator+(const Point obj)
//{
//	return Point(this->x + obj.x, this->y + obj.y);
//}
//
//Point Point::operator+(const int step)
//{
//	return Point(this->x + step, this->y + step);
//}
//
//bool Point::operator==(const Point obj) const
//{
//	if ((this->x == obj.x) && (this->y == obj.y))
//	{
//		return true;
//	}
//	return false;
//}
//
//bool Point::operator<(const Point obj) const
//{
//	if ((this->x < obj.x) && this->y < obj.y)
//		return true;
//	else
//		return false;
//}
//
//void Point::toString() const
//{
//	cout << "Point X = " << this->x << ", Y = " << this->y << endl;
//}
//
//Point::~Point()
//{
//}
//
//
int main() {

	/*Point first(10, 15), second(15, 20), third;

	third = first + second;
	third.toString();

	third = 0;
	third = first + 5;
	third.toString();

	if (first == second)
	{
		cout << "first == second" << endl;
	}
	else
	{
		cout << "first != second" << endl;
	}

	return 0;*/
	//	MyString my_String("VectorString.cpp : Defines the entry point for the console application");
	//
	////	my_String.copy("Test");
	//
	//	my_String = MyString("Test");
	//
	//	my_String.toString();

	Vector vec;
	vec.add(MyString("1"));
	vec.add(MyString("5"));
	vec.add(MyString("3"));
	vec.add(MyString("4"));
	vec.add(MyString("7"));
	vec.toString();
	cout << "---------------" << endl;
	vec.Sort();
	///////////
	cout << "---------------" << endl;
	vec.toString();


	return 0;
}

