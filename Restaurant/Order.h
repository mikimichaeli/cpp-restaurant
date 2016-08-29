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
	Employee& getMaker(){return this->maker;};
	Dish* getDishes(){return this->dishes;};
	Order& operator+=(const Dish& dishes) const;//add dish to order
	friend ostream& operator<<(ostream& os, const Order& order);

};

#endif // !__ORDER_H
