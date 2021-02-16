#include "classname.h"

int Lab8::_counter = 0;

Lab8::Lab8()
{
	cout << "calling default constructor" << endl;
	_counter++;
}
Lab8::Lab8(const Lab8& origin)
{
	cout << "calling copy constructors" << endl;
	_counter++;
}

Lab8::Lab8(int a) : _cats(a)
{
	cout << "calling second constructor" << endl;
	_counter++;
}

Lab8::~Lab8()
{
	cout << "calling destructor" << endl;
	_counter--;
}

void Lab8::byValue(Lab8 Lab8)
{
	cout << "passed by value" << endl;
	_counter++;
}

void Lab8::reference(Lab8& Lab8)
{
	cout << "passed by reference" << endl;
	_counter++;

}

void Lab8::referenceToConst(const Lab8& newValue) {
	cout << "passed by reference to constant" << endl;
	_counter++;
}

int Lab8::count()
{
	return _counter;
}
