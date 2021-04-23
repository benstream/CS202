/*
Benjamin Stream
linked_list.cpp
CS202 Homework 2
*/
#define CATCH_CONFIG_MAIN
#include "linked_list.h"
#include<algorithm>

std::list<resources> shop;
resources Rocks("Ben", "Chest", "Rocks", 20, 40, 50);
resources Sticks("Jack", "Drum", "Sticks", 65, 20, 18);
resources Cheese("Charles", "Drawer", "Cheese", 279, 34, 76);
resources Rugs("Rugster", "Racks", "Rugs", 8, 10, 43);
resources Legos("John", "Shelving", "Legos", 20, 40, 50);


	/*shop.push_back(Stick);
	shop.push_back(Rugs);
	shop.push_back(Legos);
	shop.push_back(Rocks);
	shop.push_back(Cheese);*/

//QUEUE 
TEST_CASE("ADDING TO QUEUE") {
	int takeiSize = shop.size();
	shop.push_back(Rocks);
	CHECK(takeiSize != shop.size()); // ensures increasing size 
	shop.push_back(Cheese);
	CHECK(takeiSize != shop.size() - 1); // ensures increasing size 
	
}
//DELETE QUEUE
TEST_CASE() {
	int takeiSize = shop.size();
	shop.pop_front();
	CHECK(takeiSize == shop.size() + 1); // ensures decreasing size
	std::list<resources>::iterator it = shop.begin();
	std::advance(it, 0);
	CHECK(it->ownerName != Rocks.ownerName); // ensures the first element added is removed from queue
}

//FIRST IN LAST OUT
TEST_CASE() {
	

}
// STACK LAST IN FIRST OUT
TEST_CASE() {


}

//INSERT AND FIND
TEST_CASE() {


}

//PRINT
TEST_CASE() {


}