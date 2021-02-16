#include "classes.h"

Happy::Happy()
{
	cout << "calling default constructor" << endl;
}

Happy::Happy(int x) :_fish(x)
{
	cout << "calling default constructor" << endl;
	
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

int Happy::operator+(const Happy& f,Happy f2) {
	return 0;
}


