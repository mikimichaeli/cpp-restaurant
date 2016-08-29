#include <iostream>
#include "Restaurant.h"

using namespace std;

void main()
{
	Restaurant* r = new Restaurant("Kalifa","Mivtza Kadesh 38 Tel Aviv","03-6666666");
}

Restaurant* initRestaurant()
{
	Manager* restaurantManager = new Manager(Employee(Person("Gogo Karovlakir", "HaYeoosh 15 Tel-Aviv", "052-3828312", 35), 15000, 5));
	Employee* shiftManager = new Manager(Employee(Person("Haled Haled", "AniLo MaaminShe AnigarBe 1 Petach-Tikva", "054-0000123", 35), 3500, 2));
	Employee* waiter1 = new Waiter(Employee(Person("Momo Eskimolimon", "Arlozorov 33 Tel-Aviv", "050-1231112", 25), 5000, 0.5));
	Employee* waiter2 = new Waiter(Employee(Person("David Hameleh", "Dizengoff 131 Tel-Aviv", "054-6969696", 25), 5000, 1.2));
	Employee* cook1 = new Cook(Employee(Person("Shaul Cohen", "Ben-Yeuda 1 Tel-Aviv", "050-1234567", 22), 5000, 1));
	Employee* cook2 = new Cook(Employee(Person("Moshe Levi", "Bazel 23 Tel-Aviv", "052-9800981", 39), 3500, 2));
	Employee* hostess1 = new Hostess(Employee(Person("Yafit Bar-Zohar", "Bugrashov 41 Tel-Aviv", "054-1212121", 35), 3500, 2));
	Employee* chef = new Chef(Employee(Person("McLain'", "Sokolov 112 Tel-Aviv", "052-3828312", 35), 3500, 2));
}

int showMenu()
{
	int choice;
	cout << " 1. Hire employee" << endl;
	cout << " 2. Fire employee" << endl;
	cout << " 3. Accept patient" << endl;
	cout << " 4. Release patient" << endl;
	cout << " 5. Treat patient" << endl;
	cout << " 6. Promote interns" << endl; // Promite all interns that have enough hours to be attending
	cout << " 7. Infect employee" << endl;
	cout << " 8. Show all patients" << endl;
	cout << " 9. Show all departments" << endl;

	cin >> choice;
	return choice;
}