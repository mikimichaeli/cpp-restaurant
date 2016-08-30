#pragma warning(disable: 4996)

#ifndef __SHIFT_H
#define __SHIFT_H

#include "Employee.h"
#include "Reservation.h"

class Shift
{
	char *date;
	Manager* shiftManager;
	Employee** employees;
	Reservation* reservations;
public:
	Shift(char *date);
	// the copy c'tor should copy all values except the date.
	Shift(const Shift& other);
	const Shift& operator=(const Shift& other);
	~Shift();

	bool isInShift(const Employee& employee) const;

	char* getDate() {return this->date;};
	void setDate(char* date);
	Manager* getShiftManager() { return this->shiftManager; };
	void setShiftManager(const Manager& manager);
	Employee** getEmployees() {	return this->employees; };
	Reservation* getReservations() { return this->reservations; };

	friend ostream& operator<<(ostream& os, const Shift& shift);
	// Employee array operators
	const Shift& operator+=(Employee& e);//validate that the employee is not allready in shift;
	const Shift& operator-=(Employee& e);
	const Employee& operator[](int index);

	Waiter** getAllWaiters();
	Cook** getAllCooks();
	Hostess** getAllHostesses();
	Manager** getAllManagers();
	Waiter* getFreeWaiter();
	// reservations array operator
	const Shift& operator+=(Reservation& e);
	const Shift& operator-=(Reservation& e);
	
	void addEmployee(Employee& e);
	void removeEmployee(Employee& e);

	void addReservation(Reservation& r);
	void removeReservation(Reservation& r);
};

#endif // !__SHIFT_H
