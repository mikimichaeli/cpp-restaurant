#pragma warning(disable: 4996)

#ifndef __PERSON_H
#define __PERSON_H

#include <iostream>
using namespace std;

class Person
{
	char *name;
	char *addres;
	char *phone;
	int age;

protected:
	Person(const Person& other);
	const Person& operator=(const Person& other);

public:
	Person(char *name, char *address, char *phone, int age);
	virtual ~Person();
	virtual bool operator==(const Person& other);

	friend ostream& operator<<(ostream& os, const Person& person);
	virtual ostream& toOs(ostream& os) const;

	char* getName() const { return this->name; }
	char* getAddress() const { return this->addres; }
	char* getPhone() const { return this->phone; }
	int getAge() const { return this->age; }
};
#endif // !__PERSON_H
