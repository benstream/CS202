#include <iostream>
#include <vector>
#include <memory>

#ifndef CLASSNAME_H_
#define CLASSNAME_H_

using std::cout;
using std::endl;
using std::vector;




class Lab8
{
public:
	Lab8(); // default constructor
	Lab8(const Lab8& origin); //constructor copy
	Lab8(int a); //second constructor
	~Lab8();// destructor

	void byValue(Lab8 Lab8); // pass by value

	void reference(Lab8& _cats); // pass by reference

	void referenceToConst(const Lab8& Lab8); // reference to const

	static int count();// Returns count



private:
	int _cats = 1;
	static int _counter;

};








#endif