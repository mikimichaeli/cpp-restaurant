#pragma warning(disable: 4996)

#ifndef __RESERVATION_H
#define __RESERVATION_H

#include "Area.h"
#include "Table.h"

class Reservation
{
	Person& maker;
	Table& table;
	int numOfPersons;
	bool isSmoking;
	Area area;

public:
	Reservation(const Person& maker, int numOfPersons, bool isSmoking, Area area);
	void assignTable(const Table& table);

	Person& getMaker(){return this->maker;};
	Table& getTable(){return this->table;};
	void setTable(const Table& table);
	int getNumOfPersons(){return this->numOfPersons;};
	void setNumOfPersons(int numOfPersons);
	bool getIsSmoking(){return this->isSmoking;};
	void setIsSmoking(bool IsSmoking);
	Area getArea(){return this->area;};
	void setArea(Area area);

	friend ostream& operator<<(ostream& os, const Reservation& res);
};

#endif // !__RESERVATION_H
