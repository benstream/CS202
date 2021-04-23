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
	shop.push_back(Rocks);
	CHECK(shop.size() != shop.size() - 1); // ensures increasing size 
	shop.push_back(Cheese);
	CHECK(shop.size() != shop.size() - 1); // ensures increasing size 
	
}
//DELETE QUEUE
TEST_CASE() {


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