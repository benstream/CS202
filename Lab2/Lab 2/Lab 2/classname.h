#pragma once
#include <iostream>
#include <vector>
#ifndef CLASSNAME_H_
#define CLASSNAME_H_

using std::cout;
using std::endl;


class Lab2
{
public:
	Lab2(); // default constructor
	Lab2(const Lab2 &origin); //constructor copy
	Lab2(int a); //second constructor
	~Lab2();// destructor

private:

	int _cats, _dogs;

};








#endif