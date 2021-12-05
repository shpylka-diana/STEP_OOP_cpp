#pragma once
#include <iostream>
#include <string>
#include <sstream>
using namespace std;
class String
{
public:
	CopyConstructor* c;
	String();
	string GetLongString();
	void SetLongString(string longString);
	string GetArbitaryString();
	void SetArbitaryString(string arbitaryString);
	String(const String& s);
	string ToString();
	int Length();
	char StarWith();
	char EndWith();
	bool Equal(const char*);
	char* GetStr();
	char* SetStr();
private:
	string longString[80];
	string arbitaryString;
};
class CopyConstructor {

};

