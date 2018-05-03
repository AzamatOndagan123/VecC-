#pragma once
class MyString
{
private:
	char *Mychar;
public:
	MyString();
	MyString(const char  *abc);
	MyString(const MyString & obj);

	MyString & operator= (MyString &obj);
	bool operator<(MyString&obj) const;
	void operator+ (MyString &obj);
	void toString();
	~MyString();
	void copy(const char *abc);
};

