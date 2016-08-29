#pragma warning(disable: 4996)

#ifndef __CHEF_H
#define __CHEF_H

#include "Cook.h"
#include "Manager.h"

class Chef : public Cook, public Manager
{
public:
	Chef(const Employee&);
	virtual ostream& toOs(ostream& os) const override;
	void addSpecialDish(ostream& os);
};

#endif // !__CHEF_H
