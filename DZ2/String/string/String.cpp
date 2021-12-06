#include "String.h"

String::String()
{
	this->longString;
	this->arbitaryString;
	this->c = new CopyConstructor[100];
}

string String::GetLongString()
{
	return string();
}

void String::SetLongString(string longString)
{

}

string String::GetArbitaryString()
{

	return string();
}

void String::SetArbitaryString(string arbitaryString)
{
}


String::String(const String& s)
{
	this->arbitaryString = s.arbitaryString;
	this->longString[80] = s.longString[80];
	this->c = new CopyConstructor[100];
	for (int i = 0; i < 100; i++)
		this->c[i] = s.c[i];
	cout << "Copy Constructor:\t" << endl;
}

string String::ToString()
{
	return string();
}

int String::Length()
{
	return 0;
}

char String::StarWith()
{
	return 0;
}

char String::EndWith()
{
	return 0;
}

bool String::Equal(const char*)
{
	return false;
}

char* String::GetStr()
{
	return nullptr;
}

char* String::SetStr()
{
	return nullptr;
}
