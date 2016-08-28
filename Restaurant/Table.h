#pragma warning(disable: 4996)

#ifndef __TABLE_H
#define __TABLE_H

#include "Area.h"

class Table 
{
	static int ID_GENERATOR;
	int id;
	int size;
	Area area;

public:
	Table(int size, Area area);
};

#endif // !__TABLE_H
