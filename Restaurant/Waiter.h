#pragma warning(disable: 4996)

#ifndef __WAITER_H
#define __WAITER_H

#include "Employee.h"

class Waiter : public Employee
{
public:
	Waiter(const Employee& base);
	virtual ostream& toOs(ostream& os) const override;
};

#endif // !__WAITER_H
