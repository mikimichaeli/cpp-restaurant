#pragma warning(disable: 4996)

#ifndef __EMPLOYEE_H
#define __EMPLOYEE_H

#include "Person.h"

class Employee : virtual public Person
{
	double seniority;
	int salary;
protected:
	Employee(const Employee& other);
	const Employee& operator=(const Employee& other);
public:
	Employee(const Person& base, double seniority, int salary);
	double getSeniority(){return this->seniority;};
	int getSalary(){return this->salary;};

	virtual ~Employee();
	virtual ostream& toOs(ostream& os) const override;
	void getPaid(ostream& os) const;
};

#endif // !__EMPLOYEE_H
