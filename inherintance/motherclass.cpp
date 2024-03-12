#include "motherclass.h"

motherclass::motherclass(int motherAge, string motherName)
{
	this->age = motherAge;
	this->name = motherName;
}

void motherclass::display()
{
	cout << "The age of mother is : " << age << endl;
	cout << "The name of mother is : " << name << endl; 
}
