#pragma warning(disable: 4996)

#ifndef __DISH_H
#define __DISH_H

class Dish
{
	char *name;
	int price;

public:
	Dish(char *name, int price=50);
	Dish(const Dish& other);

	char* getName(){return this->name;};
	int getPrice() {return this->price;};
	void setPrive(int price);
	void setName(char* name);
	const Dish& operator=(const Dish& other);
	~Dish();

};

#endif // !__DISH_H
