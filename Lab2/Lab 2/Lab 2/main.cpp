// Lab 2 Benjamin Stream
// 1/21/20
// CS202 UAF

#include "classname.h"

int const anything = 203;


int main(int argc, const char** argv)
{
/*
	//LAB 2
	vector<Lab2> listofElements;
	listofElements.reserve(5);
	Lab2 constructor;
	listofElements.push_back(1);
	Lab2 constructorCopy = constructor;
	listofElements.push_back(1);
	Lab2 refTest(2);
	listofElements.push_back(1);
	constructor.referenceToConst(2);
	listofElements.push_back(1);
	constructor.byValue(12);
	listofElements.push_back(1);
	constructor.reference(refTest);
	//listofElements.push_back(1);

	cout << "# of Elements in this list: " << listofElements.size() << endl;
	
	*/

	cout << "Creating a raw pointer by copying an object." << endl;
	Lab2* Lab3 = new Lab2();
	cout << "Creating a unique_ptr to object" << endl;
	auto uPtr1 = std::make_unique <Lab2>(54);
	uPtr1


}