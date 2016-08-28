#pragma warning(disable: 4996)

#ifndef __DISH_H
#define __DISH_H

class Dish
{
	char *name;
	int price;

public:
	Dish(char *name, int price);
	Dish(const Dish& other);
	const Dish& operator=(const Dish& other);
	~Dish();
};

#endif // !__DISH_H
