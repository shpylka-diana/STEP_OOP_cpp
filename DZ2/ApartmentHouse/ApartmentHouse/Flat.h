#pragma once
#include "Human.h"
#include "Building.h"
class Flat
{
private:
    Human people[300];
    string number;
    Human* human;
    int size;
public:

    Flat();
    Flat(string number, int size);
    void ShowFlat();
    string getnumber();
    void setHuman(Human newHuman, int nomer);
    void showThisHuman(int id);

};
