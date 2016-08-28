#pragma warning(disable: 4996)

#ifndef __HOSTESS_H
#define __HOSTESS_H

#include "Employee.h"

class Hostess : public Employee
{
public:
	Hostess(const Employee& base);

};

#endif // !__HOSTESS_H
