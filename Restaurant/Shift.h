#pragma warning(disable: 4996)

#ifndef __SHIFT_H
#define __SHIFT_H

#include "Employee.h"
#include "Reservation.h"

class Shift
{
	Employee* employees;
	Reservation* reservations;
public:
	Shift();
	Shift(const Shift& other);
	const Shift& operator=(const Shift& other);
	~Shift();
	
	// Employee array operators
	const Shift& operator+=(Employee& e);
	const Shift& operator-=(Employee& e);
	const Employee& operator[](int index);

	// reservations array operator
	const Shift& operator+=(Reservation& e);
	const Shift& operator-=(Reservation& e);

	void addEmployee(Employee& e);
	void removeEmployee(Employee& e);

	void addReservation(Reservation& r);
	void removeReservation(Reservation& r);
};

#endif // !__SHIFT_H