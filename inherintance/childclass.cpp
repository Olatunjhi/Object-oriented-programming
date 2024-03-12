#include "childclass.h"

childclass::childclass(int motherAge, string motherName, int fatherAge, string fatherName)
	:motherclass(motherAge, motherName), fatherclass(fatherAge, fatherName)
{

}

void childclass::display()
{
	motherclass::display();
	fatherclass::display();
}
