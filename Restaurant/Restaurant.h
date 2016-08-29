#pragma warning(disable: 4996)

#ifndef __RESTAURANT_H
#define __RESTAURANT_H

#define MAX_TABLES_CAPACITY 40
#define MAX_WORKERS 50
#define MAX_SHIFTS 3650
#include "Employee.h"
#include "Manager.h"
#include "Waiter.h"
#include "Cook.h"
#include "Hostess.h"
#include "Chef.h"
#include "Table.h"
#include "Shift.h"

class Restaurant
{
private:
	char *name;
	char *addres;
	char *phone;
	Manager restaurantManager;
	Employee* employees[MAX_WORKERS];
	Table* tables[MAX_TABLES_CAPACITY]; 
	Shift* shifts[MAX_SHIFTS];

public:
	Restaurant(char *name, char *adress, char *phone);
	void addEmployee(Employee& employee);
	void removeEmployee(Employee& employee);
	void addTable(Table& table);
	void removeTable(Table& table);
	void addShift(Shift& shift);

	char* getName() const { return this->name; }
	char* getAddress() const { return this->addres; }
	char* getPhone() const { return this->phone; }
	Employee** getEmployees(){return this->employees;};
	Table** getTables(){return this->tables;};
	Shift** getShifts(){return this->shifts;};
	void setEmployees(Employee** employees);
	void setTables(Table** tables);
	void setShifts(Shift** shifts);

		// Employee array operators
	Restaurant& operator+=(const Employee& employee) const;
	Restaurant& operator-=(const Employee& employee) const;

	// Table array operators
	Restaurant& operator+=(const Table& table) const;
	Restaurant& operator-=(const Table& table) const;

	// adds shift
	Restaurant& operator+=(const Shift& shift) const;
	
};
#endif // !__RESTAURANT_H
