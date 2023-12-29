// Name: Parker Padgett
// Assignment: Programming 1

#include<iostream>
#include<string>
#include"personType.h"

using namespace std;

int main() 
{
	personType student("Mary", "Beth", "Regan");

	student.print();
	cout << endl;

	// Checking to see if various names are what they should be
	if (student.isLastName("Beth"))
		cout << "Student's last name is Regan" << endl;
	else
		cout << "Student's last name is not Regan" << endl;

	if (student.isFirstName("Mary"))
		cout << "Student's first name is Mary" << endl;
	else
		cout << "Student's last name is not Mary" << endl;

	return 0;
}