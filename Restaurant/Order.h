#pragma warning(disable: 4996)

#ifndef __ORDER_H
#define __ORDER_H

#include "Employee.h"

class Order
{
	Employee& maker;
	char* food;
	char* drinks;

public:
	Order(const Employee& maker, char *food, char *drinks);
	Order(const Order& other);
	const Order& operator=(const Order& other);
	~Order();

	friend ostream& operator<<(ostream& os, const Order& order);
};

#endif // !__ORDER_H
