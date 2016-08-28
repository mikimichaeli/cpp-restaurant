#pragma warning(disable: 4996)

#ifndef __TABLE_H
#define __TABLE_H

#include "Area.h"
#include "Order.h"
#include <iostream>
using namespace std;

class Table 
{
	static int ID_GENERATOR;
	int id;
	int size;
	bool isInUse;
	Area area;
	Order* orders;

public:
	Table(int size, Area area);
	void addOrder(Order order);
	~Table();
	friend ostream& operator<<(ostream& os, const Table& table);
};

#endif // !__TABLE_H
