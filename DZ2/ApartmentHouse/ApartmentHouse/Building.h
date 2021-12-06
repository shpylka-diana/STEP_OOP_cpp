#pragma once
#include "Human.h"
#include "Flat.h"
class Building
{
        private:
            Flat flats[100];
        string address;
        Flat* flat;
        int size_h;
    public:

        Building();
        Building(string address, int size);
        void ShowBuilding();
        void setFlat(Flat newFlat, int nomer_uilding);
        void showThisFlat(int idex);
};

  