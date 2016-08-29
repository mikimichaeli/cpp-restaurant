#include <iostream>
#include "Restaurant.h"

using namespace std;

void main()
{
	Employee* restaurantManager = new Manager(Employee(Person("Gogo Karovlakir", "HaYeoosh 15 Tel-Aviv", "052-3828312", 35), 15000, 5));
	Employee* shiftManager = new Manager(Employee(Person("Haled Haled", "AniLo MaaminShe AnigarBe 1 Petach-Tikva", "054-0000123", 35), 3500, 2));
	Employee* waiter1 = new Waiter(Employee(Person("Momo Eskimolimon", "Arlozorov 33 Tel-Aviv", "050-1231112", 25), 5000, 0.5));
	Employee* waiter2 = new Waiter(Employee(Person("David Hameleh", "Dizengoff 131 Tel-Aviv", "054-6969696", 25), 5000, 1.2));
	Employee* cook1 = new Cook(Employee(Person("Shaul Cohen", "Ben-Yeuda 1 Tel-Aviv", "050-1234567", 22), 5000, 1));
	Employee* cook2 = new Cook(Employee(Person("Moshe Levi", "Bazel 23 Tel-Aviv", "052-9800981", 39), 3500, 2));
	Employee* hostess1 = new Hostess(Employee(Person("Yafit Bar-Zohar", "Bugrashov 41 Tel-Aviv", "054-1212121", 35), 3500, 2));
	Employee* chef = new Chef(Employee(Person("McLavin'", "Sokolov 112 Tel-Aviv", "052-3828312", 35), 3500, 2));
	Table* tables = new Table[10];
	Employee* allEmployees[] = {restaurantManager, shiftManager, waiter1, waiter2, cook1, cook2, hostess1, chef};
	Restaurant* r = new Restaurant("Kalifa", "Mivtza Kadesh 38 Tel-Aviv", "03-6666666");
	r->setEmployees(allEmployees);
	r->setTables(tables);
	int choice = 0;
	while(choice!=3)
	{
		choice = mainMenu();
		switch (choice)
			{
			case 1: 
				break;

			case 2:
				break;

	}
}

int mainMenu()
{
	int choice;
	cout << " Please Enter Your Choise:" << endl;
	cout << " 1. General Restaurant Managment" << endl;
	cout << " 2. Current Shift Managment" << endl;
	cout << " 3. Quit" << endl;
	cin >> choice;
	return choice;
}

int restaurantMenu()
{
	int choice;
	cout << " 1. Add New Employee" << endl;
	cout << " 2. Add New Table" << endl;
	cout << " 3. Start New Sift" << endl;
	cin >> choice;
	return choice;
}
int currentShiftMenu()
{
	int choice;
	cout << " 1. Add New Employee" << endl;
	cout << " 2. Get a New Reservation" << endl;
	cout << " 3. Handle a Table" << endl;
	cin >> choice;
	return choice;
}

int tableMenu()
{
	int choice;
	cout << " 1. Take Order" << endl;
	cout << " 2. Bring Food" << endl;
	cout << " 3. Bring Bill" << endl;
	cout << " 4. Take Bill" << endl;
	cin >> choice;
	return choice;
}
