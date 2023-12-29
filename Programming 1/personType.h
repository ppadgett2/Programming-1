#pragma once
#ifndef PERSON_TYPE_H
#define PERSON_TYPE_H

#include <string>
#include <iostream>

using namespace std;

class personType 
{
public:
	void print() const;
	void setLastName(string last);
	void setFirstName(string first);
	void setMiddleName(string middle);

	bool isFirstName(string first) const;
	bool isLastName(string last) const;

	string getFirstName() const;
	string getMiddleName() const;
	string getLastName() const;

	personType(string first = "", string middle = "", string last = "");

private:
	string firstName;
	string middleName;
	string lastName;
};

#endif