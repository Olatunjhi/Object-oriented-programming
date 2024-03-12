#include "fatherclass.h"

fatherclass::fatherclass(int fatherAge, string fatherName)
{
	this->age = fatherAge;
	this->name = fatherName;
}

void fatherclass::display()
{
	cout << "The name of father is : " << age << endl;
	cout << "The age of father is : " << name << endl;
}

