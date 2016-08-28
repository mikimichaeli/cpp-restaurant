#pragma warning(disable: 4996)

#ifndef __RESTAURANT_H
#define __RESTAURANT_H

class Restaurant
{
	char *name;
	char *addres;
	char *phone;
	int maxCapacity;
	Employee* employees;
	Table* tables; 
	Shift* shift;
};
#endif // !__RESTAURANT_H
