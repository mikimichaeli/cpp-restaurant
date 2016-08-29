pragma warning(disable: 4996)

#ifndef __BARTENDER_H
#define __BARTENDER_H

#include "Employee.h"
#include "Order.h"

class Bartender : public Employee
{
public:
	Bartender(const Employee& employee);
	virtual ostream& toOs(ostream& os) const override;
	void makeDrinks(const Order& order);
};

#endif // !__BARTENDER_H
