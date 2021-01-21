// Lab 2 Benjamin Stream
// 1/21/20
// CS202 UAF
#include "classname.h"

Lab2::Lab2() {
	cout << "calling default constructor" << endl;
}
Lab2::Lab2(const Lab2 &)
{
	cout << "calling copy constructors" << endl;
}

Lab2::~Lab2()
{

	cout << "calling destructor" << endl;

}
