#pragma warning(disable: 4996)

#ifndef __MENU_H
#define __MENU_H

#include "Dish.h"

class Menu
{
	static const int MAX_CAPACITY = 25;
	int currentCapacity;
	Dish* dishes;

public:
	Menu();
	~Menu();
	
	// get dish by index, throw error if ondex out of bounds
	const Dish& operator[](int index) const throw (const char*);
	// add dish, throw error if out of capacity
	const Dish& operator+=(const Dish& dish) throw (const char*);
	// remove dish, throw error if no items
	const Dish& operator-=(const Dish& dish) throw (const char*);

	// add to end of the dishes list with prefix operator
	const Dish& operator++();
	// add to end of the dishes list with postfix operator
	Dish operator++(int);

	// remove last item in the dishes list with prefix operator
	const Dish& operator--();
	// remove last item in the dishes list with post operator
	Dish operator--(int);


	int getCapacity() const { return this->currentCapacity; }

};

#endif // !__MENU_H
