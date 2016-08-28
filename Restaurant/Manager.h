#pragma warning(disable: 4996)

#ifndef __MANAGER_H
#define __MANAGER_H

#include "Employee.h"

class Manager : virtual public Employee
{

public:
	virtual ostream& toOs(ostream& os) const override;

	void sendHome(const Employee& employee) const;
	void indulgeTable(const Table& table, char *indulge) const;
	void cancelOrder(const Order& order) const;
	void assignToTable(const Employee& e, const Table& t) const;
};

#endif // !__EMPLOYEE_H
