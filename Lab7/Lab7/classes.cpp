#include "classes.h"

Happy::Happy()
{
	cout << "calling default constructor" << endl;
}

Happy::Happy(const Happy&)
{
	cout << "Copy Constructor" << endl;
}

Happy::Happy(int z) :_fish(z)
{
	cout << "Assinging Int to _fish" << endl;
}

Happy::~Happy()
{
	cout << "calling destructor" << endl;
}

int Happy::getData()
{
	return _fish;
}


ostream& operator<<(ostream& os, const Happy& f) {
	return os << f._fish;
}

ostream& operator+(const Happy& f, const Happy& f2)
{
	return f._fish + f2._fish;
}




