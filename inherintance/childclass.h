#ifndef CHILDCLASS_H
#define CHILDCLASS_H
#include "motherclass.h"
#include "fatherclass.h"
#include <iostream>
using namespace std;

class childclass:public motherclass,public fatherclass
{
	public:
		childclass(int motherAge, string motherName, int fatherAge, string fatherName);
		void display();

	protected:

	private:
};

#endif /* CHILDCLASS_H */
