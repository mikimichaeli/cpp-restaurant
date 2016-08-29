#pragma warning(disable: 4996)

#ifndef __TABLE_H
#define __TABLE_H

#include "Area.h"
#include "Order.h"

class Table 
{
	static int ID_GENERATOR;
	int id;
	int size;
	bool isInUse;
	Area area;
	Order* orders;

public:
	Table(int size=4 , Area area=Area::Inside);

	int getId(){return this->id;};
	int getSize(){return this->size;};
	void setSize(int size);
	bool getIsInUse(){return this->isInUse;};
	void setIsInUse(bool inUse);
	Area getArea(){return this->area;};
	void setArea(Area area);
	Order* getOrders(){return this->orders;};

	void addOrder(Order order);
	int getBill() const;
	~Table();
	friend ostream& operator<<(ostream& os, const Table& table);
	
};

#endif // !__TABLE_H