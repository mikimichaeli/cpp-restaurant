#pragma warning(disable: 4996)

#ifndef __RESTAURANT_H
#define __RESTAURANT_H

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
	static const int MAX_TABLES_CAPACITY = 40;
	static const int MAX_WORKERS = 50;
	static const int MAX_SHIFTS = 3650;

	char *name;
	char *addres;
	char *phone;
	Manager restaurantManager;
	Employee** employees;
	Table** tables; 
	Shift** shifts;
	int currentEmployees, currentShifts, currentTables;

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
	Employee** getEmployees() const { return this->employees; };
	Table** getTables() const { return this->tables; };
	Shift** getShifts() const { return this->shifts; };
	int getCurrentEmployeesAmount() const { return this->currentEmployees; }
	int getCurrentShiftsAmount() const { return this->currentShifts; }
	int getCurrentTablesAmount() const { return this->currentTables; }
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
