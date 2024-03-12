#ifndef MOTHERCLASS_H
#define MOTHERCLASS_H

#include <iostream>
using namespace std;

class motherclass
{
	public:
		motherclass(int motherAge, string motherName);
		void display();

	protected:
		int age;
		string name;

	private:

};

#endif /* MOTHERCLASS_H */
