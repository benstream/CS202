/*
Benjamin Stream
Cs202 
value.cpp for HW2
*/

#include <iostream>
#include <list>
#include <catch2/catch.hpp> // Catch installed using VCPackage

#ifndef LINKED_LIST_H
#define LINKED_LIST_H
struct resources {
	std::string	ownerName;
	std::string storageType;
	std::string resourceType;
	int item1;
	int item2;
	int item3;

	resources(std::string oN,std::string sT, std::string rT, int i1, int i2, int i3) : ownerName(oN), storageType(sT),resourceType(rT),item1(i1),item2(i2),item3(i3){

	}


};

#endif // !LINKED_LIST_H