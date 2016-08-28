#pragma warning(disable: 4996)

#ifndef __ORDER_H
#define __ORDER_H

#include "Table.h"
#include "Employee.h"

class Order
{
	Employee& maker;
	Table& table;
	char** food;
	char** drinks;

public:
	Order(const Employee& maker, const Table& table, char **food, char **drinks);
	Order(const Order& other);
	const Order& operator=(const Order& other);
	~Order();
};

#endif // !__ORDER_H
