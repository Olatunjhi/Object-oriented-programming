#include "childclass.h"

childclass::childclass()
{
	cout << " The age of my mother is : " << motherclass::age << endl;
	cout << "The age of my farther is : " <<fatherclass::age << endl;
}
