#pragma warning(disable: 4996)

#ifndef __RESERVATION_H
#define __RESERVATION_H

#include "Area.h"

class Reservation {
	Person& maker;
	int numOfPersons;
	bool isSmoking;
	Area area;

public:
	Reservation(const Person& maker, int numOfPersons, bool isSmoking, Area area);

};

#endif // !__RESERVATION_H
