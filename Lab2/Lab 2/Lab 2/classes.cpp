// Lab 2 Benjamin Stream
// 1/21/20
// CS202 UAF
#include "classname.h"

Lab2::Lab2() {
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

void byValue(Lab2 Lab2)
{
	cout << "passed by value" << endl;
}

void reference(Lab2& Lab2)
{
	cout << "passed by reference" << endl;
}

void referenceToConst(const Lab2& Lab2) {
	cout << "passed by reference to constant" << endl;
}

void returnByValue() {
	Lab2 Lab2;
	cout << "returned object from value" << endl;
	return lab2;
}


void 