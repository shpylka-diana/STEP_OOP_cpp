#include "Human.h"
#include "Flat.h"
#include "Building.h"
#include <iostream>

int main()
{
	int action;
	string address;
	string number;
	int quantity_ap;
	int quantity_house;

	string name;
	string last_name;
	string patronymic;
	int humen_number;

	Building building("First strit", 49);
	Flat flat("21", 17);
	Human human("Nastya", "Polyshiuk", "Dmitrievna", 3);


	system("pause");
}
