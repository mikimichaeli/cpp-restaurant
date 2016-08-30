#include <iostream>
#include "Restaurant.h"

using namespace std;

void main();
int mainMenu();
int generalRestaurantMenu();
int currentShiftMenu();
void handleATable(const Restaurant& res);
int tableMenu();
Employee *getEmployee();
Person *getPerson();
void handleManagmentChoice(Restaurant& res);
void handleShiftChoice(const Restaurant& res);
void addEmployeeToShift(const Restaurant& res);

void main()
{
	Restaurant* restaurant = new Restaurant("Kalifa", "Mivtza Kadesh 38 Tel-Aviv", "03-6666666");
	Menu restaurantMenu = restaurant->getMenu();
	restaurantMenu += Dish("Soup",30);
	restaurantMenu += Dish("Pasta");
	restaurantMenu += Dish("Steak");
	restaurantMenu += Dish("Chocolate Fudge",20);
	Manager* restaurantManager = new Manager(Employee(Person("Gogo Karovlakir", "HaYeoosh 15 Tel-Aviv", "052-3828312"), 15000, 5));
	Cook* cook1 = new Cook(*restaurantManager);
	Chef* chef = new Chef(*cook1, *restaurantManager);
	*restaurant += *chef;
	*restaurant += Manager(Employee(Person("Haled Haled", "AniLo MaaminShe AnigarBe 1 Petach-Tikva", "054-0000123"), 3500, 2));
	*restaurant += Waiter(Employee(Person("Momo Eskimolimon", "Arlozorov 33 Tel-Aviv", "050-1231112"), 5000, 0.5));
	*restaurant += Waiter(Employee(Person("David Hameleh", "Dizengoff 131 Tel-Aviv", "054-6969696"), 5000, 1.2));
	*restaurant += Cook(Employee(Person("Moshe Levi", "Bazel 23 Tel-Aviv", "052-9800981"), 3500,2));
	*restaurant += Hostess(Employee(Person("Yafit Bar-Zohar", "Bugrashov 41 Tel-Aviv", "054-1212121"), 3500, 2));

	int choice = 0;
	while(choice!=3)
	{
		choice = mainMenu();
		switch (choice)
		{
		case 1:
			handleManagmentChoice(*restaurant);
			break;
		case 2:
			handleShiftChoice(*restaurant);
			break;
		}
	}
}

int mainMenu()
{
	int choice;
	cout << " Please Enter Your Choice:" << endl;
	cout << " 1. General Restaurant Managment" << endl;
	cout << " 2. Current Shift Managment" << endl;
	cout << " 3. Quit" << endl;
	cin >> choice;
	return choice;
}


void handleManagmentChoice(Restaurant& res)
{
	int generalManagmentChoice = generalRestaurantMenu();
	Employee* employee;
	int choice = 0;
	while (choice != 4)
	{
		switch (generalManagmentChoice)
		{
		case 1:
			employee = getEmployee();
			res += *employee;
			break;
		case 2:
			// add new table
			break;
		case 3:
			// start new shift
			break;
		}
	}
}
int generalRestaurantMenu()
{
	int choice;
	cout << " 1. Add New Employee" << endl;
	cout << " 2. Add New Table" << endl;
	cout << " 3. Start New Shift" << endl;
	cout << " 4. Back To Main Menu" << endl;
	cin >> choice;
	return choice;
}

void handleShiftChoice(const Restaurant& res)
{
	int shiftManagmentChoice = 0;
	while (shiftManagmentChoice != 4)
	{
		shiftManagmentChoice = currentShiftMenu();
		switch (shiftManagmentChoice) {
		case 1:
			addEmployeeToShift(res);
			break;
		case 2:
			takeNewReservation(res);
			break;
		case 3:
			handleATable(res);
			break;
		}
	}
}
Employee *getEmployee()
{
	int salary;
	Person *person = getPerson();
	cout << " Enter the employees salary: " << endl;
	cin >> salary;
	return new Employee(*person, 0, salary);
}

Person *getPerson()
{
	char buffer[100];
	char *name, *address, *phone;
	int age;

	cout << "What is the person's name? -->";
	cin >> buffer;
	name = strdup(buffer);

	cout << "\n what is the person's address? -->";
	fflush(stdout);
	cin >> buffer;
	address = strdup(buffer);

	cout << "\n what is the person's phone number? -->";
	fflush(stdout);
	cin >> buffer;
	phone = strdup(buffer);
	
	Person *p = new Person(name, address, phone);

	return p;
}

int currentShiftMenu()
{
	int choice;
	cout << " 1. Add New Employee" << endl;
	cout << " 2. Get a New Reservation" << endl;
	cout << " 3. Handle a Table" << endl;
	cout << " 4. Back To Main Menu" << endl;

	cin >> choice;
	return choice;
}
void takeNewReservation(const Restaurant& res) {
	Shift& s = res.getCurrentShift();
	Reservation r = s.getAllHostesses()[0]->takeReservation(*getPerson());
	s.addReservation(r);
}
void addEmployeeToShift(const Restaurant& res)
{
	Shift& s = res.getCurrentShift();
	Employee **employees = res.getEmployees();
	int employeeNum;
	for (int i = 0; i < res.getCurrentEmployeesAmount(); i++)
	{
		cout << " Chooese employee to add:" << endl;
		if (!s.isInShift(*employees[i])) {
			cout << i + 1 << ". " << *employees[i] << endl;
		}
		cin >> employeeNum;
	}
	s.addEmployee(*employees[employeeNum - 1]);
}

void handleATable(const Restaurant& res)
{
	Shift& shift = res.getCurrentShift();
	cout << " Please choose which table you want to handle: " << endl;
	Table **tables = res.getTables();
	for (int i = 0; i < res.getCurrentTablesAmount(); i++)
	{
		if (tables[i]->getIsInUse()) {
			cout << i + 1 << ". " << *tables[i] << endl;
		}
	}
	int tableNum;
	cin >> tableNum;
	cout << "You chose table #" << tableNum << ". what do you want to do with it? " << endl;
	Table& table = *tables[tableNum - 1];
	int action = 0;
		while (action != 6) {
			action = tableMenu();
			Menu menu;
			switch (action) {
			case 1:
				table += shift.getFreeWaiter()->takeOrder(table);
				break;
			case 2:
				shift.getFreeWaiter()->bringFood(table);
				break;
			case 3:
				shift.getFreeWaiter()->bringBill(table);
				break;
			case 4:
				shift.getFreeWaiter()->takeMoney(table);
				break;
			case 5:
				menu = res.getMenu();
				cout << "Select a dish to indulge:" << endl;
				for (int i = 0; i < menu.getCapacity(); i++) {
					cout << i + 1 << ". " << menu[i] << endl;
				}
				cin >> action;
				shift.getShiftManager().indulgeTable(table, menu[action - 1]);
				break;
			default:
				cout << " Incorrect choice. going back to main menu." << endl;
			}
		}
}

int tableMenu()
{
	int choice;
	cout << " 1. Take Order" << endl;
	cout << " 2. Bring Food" << endl;
	cout << " 3. Bring Bill" << endl;
	cout << " 4. Take Bill" << endl;
	cout << " 5. Indulge" << endl;
	cout << " 6. Back To Previous Menu" << endl;
	cin >> choice;
	return choice;
}


