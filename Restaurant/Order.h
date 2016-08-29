#pragma warning(disable: 4996)

#ifndef __ORDER_H
#define __ORDER_H

#include "Employee.h"
#include "Dish.h"

class Order
{
	Employee& maker;
	Dish* dishes;

public:
	Order(const Employee& maker, Dish *food);
	Order(const Order& other);
	const Order& operator=(const Order& other);
	~Order();

	Order& operator+=(const Dish& dishes) const;
	friend ostream& operator<<(ostream& os, const Order& order);

};

#endif // !__ORDER_H
