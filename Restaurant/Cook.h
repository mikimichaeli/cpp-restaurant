#pragma warning(disable: 4996)

#ifndef __COOK_H
#define __COOK_H

#include "Employee.h"
#include "Order.h"

class Cook : virtual public Employee
{
public:
	Cook(const Employee& base);
	virtual ostream& toOs(ostream& os) const override;
	void makeFood(const Order& order) const;
};

#endif // !__COOK_H
