#pragma warning(disable: 4996)

#ifndef __RESTAURANT_H
#define __RESTAURANT_H

#include "Employee.h"
#include "Table.h"
#include "Shift.h"
class Restaurant
{
private:

	static const int MAX_CAPACITY = 250;

	char *name;
	char *addres;
	char *phone;
	int currentCapacity;
	Employee* employees;
	Table* tables; 
	Shift* shifts;

public:
	char* getName();

	Employee& operator+=(const Employee& employee) const;
	Employee& operator-=(const Employee& employee) const;
	Table& operator+=(const Table& table) const;
	Table& operator-=(const Table& table) const;
	Shift& operator+=(const Shift& shift) const;

	void addEmployee(Employee& employee);
	void removeEmployee(Employee& employee);
	void addTable(Table& table);
	void removeTable(Table& table);
	void addShift(Shift& shift);

};
#endif // !__RESTAURANT_H
