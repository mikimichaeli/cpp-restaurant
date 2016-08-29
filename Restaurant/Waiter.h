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
	void takeOrder(const Table& table) const;
	void bringFood(const Table& table) const;
	void takeMoney(const Table& table, int bill) const;
};

#endif // !__WAITER_H
