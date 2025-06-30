#include "prg01.h"


int Person::getPhno()
{
	return phno;
}

string Person::getName()
{
	return name;
}

string Person::getAddress()
{
	return address;
}

void Person::setAddress(string address)
{
	this->address = address;
}

void Person::setName(string)
{
	this->name = name;
}

void Person::setPhno(int)
{
	this->phno = phno;
}
