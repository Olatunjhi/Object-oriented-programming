#ifndef FATHERCLASS_H
#define FATHERCLASS_H

#include <iostream>
using namespace std;

class fatherclass
{
	public:
		fatherclass(int fatherAge, string fatherName);
		void display();

	protected:
		int age;
		string name;

	private:
};

#endif /* FATHERCLASS_H */
