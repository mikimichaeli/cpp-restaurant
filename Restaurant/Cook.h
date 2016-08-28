#pragma warning(disable: 4996)

#ifndef __COOK_H
#define __COOK_H

#include "Employee.h"

class Cook : public Employee
{
public:
	Cook(const Employee& base);
};

#endif // !__COOK_H
