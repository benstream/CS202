// Lab 2 Benjamin Stream
// 1/21/20
// CS202 UAF

#include "classname.h"

int const anything = 203;


int main(int argc, const char** argv)
{
	vector<Lab2> listofElements;

	Lab2 constructor;
	listofElements.push_back(1);
	Lab2 constructorCopy = constructor;
	listofElements.push_back(1);
	Lab2 refTest(2);
	listofElements.push_back(1);
	constructor.referenceToConst(2);
	listofElements.push_back(1);
	//constructor.reference(anything);
	//listofElements.push_back(1);


	cout << "# of Elements in this list: " << listofElements.size() << endl;
}