#pragma warning(disable: 4996)

#ifndef __HOSTESS_H
#define __HOSTESS_H

#include "Employee.h"
#include "Reservation.h"

class Hostess : public Employee
{
public:
	Hostess(const Employee& base);
	virtual ostream& toOs(ostream& os) const override;
	Reservation takeReservation() const;
	void assignTable(const Reservation& reservation) const;

};

#endif // !__HOSTESS_H
