#pragma warning(disable: 4996)

#ifndef __WAITER_H
#define __WAITER_H

#include "Employee.h"
#include "Table.h"

class Waiter : public Employee
{
	Waiter(const Waiter& other);
	const Waiter& operator=(const Waiter& other);

public:
	Waiter(const Employee& base);
	virtual ostream& toOs(ostream& os) const override;
	void takeOrder(const Table& other) const;
	void bringFood(const Table& other) const;
	void takeMoney(const Table& other, int bill) const;
};

#endif // !__WAITER_H
