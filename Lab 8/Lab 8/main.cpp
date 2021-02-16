#include "classname.h"


void staticTest() {
	static int staticTestV = 17;
	cout << staticTestV << endl;
	staticTestV++;
}
int main(int argc, const char** argv)
{
	cout << "Total Count: " << Lab8::count() << endl;
	Lab8 b(2);
	Lab8 a(2);
	cout << "Total Count: " << Lab8::count() << endl;
	
	staticTest();
	staticTest();
	staticTest();
}