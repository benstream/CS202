// Lab 2 Benjamin Stream
// 1/21/20
// CS202 UAF
#include "classname.h"



Lab2::Lab2() 
{
	cout << "calling default constructor" << endl;
}
Lab2::Lab2(const Lab2 &origin)
{
	cout << "calling copy constructors" << endl;
}

Lab2::Lab2(int a) : _cats(a)
{
	cout << "calling second constructor" << endl;
}

Lab2::~Lab2()
{
	cout << "calling destructor" << endl;
}

void Lab2::byValue(Lab2 Lab2)
{
	cout << "passed by value" << endl;
}

void Lab2::reference(Lab2& Lab2)
{
	cout << "passed by reference" << endl;

}

void Lab2::referenceToConst(const Lab2& newValue) {
	cout << "passed by reference to constant" << endl;
}



