#pragma warning(disable: 4996)

#ifndef __MANAGER_H
#define __MANAGER_H

#include "Employee.h"
#include "Dish.h"
#include "Table.h"

class Manager : virtual public Employee
{

public:
	Manager(const Employee& base);
	void sendHome(const Employee& employee) const;
	void indulgeTable(Table& table, Dish indulge) ;
	void cancelDish(Order& order) ;
	void assignToTable(const Employee& e, const Table& t) const;
	virtual ostream& toOs(ostream& os) const override;
};

#endif // !__EMPLOYEE_H
