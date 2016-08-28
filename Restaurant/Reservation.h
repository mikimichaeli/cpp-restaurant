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

	Table& operator=(const Table& table) const;
};

#endif // !__RESERVATION_H
