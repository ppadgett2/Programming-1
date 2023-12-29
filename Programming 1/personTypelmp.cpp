#include <iostream>
#include <string>
#include "personType.h"

using namespace std;

void personType::print() const
{
	cout << firstName << " " << middleName << " " << lastName;
}

// Sets
void personType::setFirstName(string first)
{
	firstName = first;
}
void personType::setMiddleName(string middle)
{
	middleName = middle;
}
void personType::setLastName(string last)
{
	lastName = last;
}

// Gets
string personType::getFirstName() const
{
	return firstName;
}
string personType::getMiddleName() const
{
	return middleName;
}
string personType::getLastName() const
{
	return lastName;
}


bool personType::isFirstName(string first) const
{
	if (firstName == first) return true;
	return false;
}

bool personType::isLastName(string last) const
{
	if (lastName == last) return true;
	return false;
}

// constructor
personType::personType(string first, string middle, string last)
{
	firstName = first;
	middleName = middle;
	lastName = last;
}