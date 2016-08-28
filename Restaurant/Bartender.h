#pragma warning(disable: 4996)

#ifndef __BARTENDER_H
#define __BARTENDER_H

#include "Employee.h"

class Bartender : public Employee
{
public:
	Bartender(const Employee& base);
};

#endif // !__BARTENDER_H
