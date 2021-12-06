#pragma once
#include <iostream>
#include <string>
#include <sstream>
#include "Flat.h"
#include "Building.h"
using namespace std;

class Human
{
private:
    string name;
    string last_name;
    string patronymic;
    int human_number;
public:

    Human();
    Human(string name, string last_name_, string patronymic, int human_number);
    string getname();
    string getlast_name();
    string getpatronymic();
    string gethumsn_number();
    void setname(string name);
    void setlast_name(string last_name);
    void setPatronymic(string patronymic);
    void sethuman_number(int human_number);
    void showHuman();
};

