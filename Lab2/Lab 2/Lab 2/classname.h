#include <iostream>
#include <vector>
#ifndef CLASSNAME_H_
#define CLASSNAME_H_

using std::cout;
using std::endl;
using std::vector;



class Lab2
{
public:
	Lab2(); // default constructor
	Lab2(const Lab2 &origin); //constructor copy
	Lab2(int a); //second constructor
	~Lab2();// destructor
	
	void byValue(Lab2 Lab2); // pass by value
	
	void reference(Lab2& _cats); // pass by reference

	void referenceToConst(const Lab2& Lab2); // reference to const



private:
	//int const labValue = 12;
	int _cats =1;

};








#endif