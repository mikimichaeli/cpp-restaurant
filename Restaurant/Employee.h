#pragma warning(disable: 4996)

#ifndef __EMPLOYEE_H
#define __EMPLOYEE_H

#include "Person.h"

class Employee : virtual public Person
{
	int seniority;
	int salary;
protected:
	Employee(const Employee& other);
	const Employee& operator=(const Employee& other);
public:
	Employee(const Person& base, int seniority, int salary);
	virtual ~Employee();
	virtual ostream& toOs(ostream& os) const override;
	void getPaid(ostream& os) const;
};

#endif // !__EMPLOYEE_H
