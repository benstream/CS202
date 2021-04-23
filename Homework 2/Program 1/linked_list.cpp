/*
Benjamin Stream
linked_list.cpp
CS202 Homework 2
*/
#define CATCH_CONFIG_MAIN
#include "linked_list.h"
#include<algorithm>

std::list<resources> shop;
resources Rocks("Ben", "Chest", "Rocks", 5, 40, 50);
resources Sticks("Jack", "Drum", "Sticks", 10, 20, 18);
resources Cheese("Charles", "Drawer", "Cheese", 279, 34, 76);
resources Rugs("Rugster", "Racks", "Rugs", 0, 10, 43);
resources Legos("John", "Shelving", "Legos", 1, 40, 50);
resources monopoly("Mr.PennyBags", "Vaults", "Money", 999, 999, 999);

	/*shop.push_back(Stick);
	shop.push_back(Rugs);
	shop.push_back(Legos);
	shop.push_back(Rocks);
	shop.push_back(Cheese);*/

void printList(std::list<resources> shop) {
	std::cout << "Printing List" << std::endl;
	for (auto i : shop) {
		std::cout << i.ownerName << " in the " << i.resourceType << " industry. " << "Inventory:" << " " << i.item1 << " " << i.item2 <<" "<<i.item3<< std::endl;
		if (shop.size() == 0) std::cout<< "Empty Container"<<std::endl;
	}
}



//QUEUE 
TEST_CASE("ADDING TO QUEUE") {
	int takeiSize = shop.size();
	shop.push_back(Rocks);
	CHECK(takeiSize != shop.size()); // ensures increasing size 
	shop.push_back(Cheese);
	CHECK(takeiSize != shop.size() - 1); // ensures increasing size 
	shop.push_back(Sticks);
	CHECK(takeiSize != shop.size() - 2);
	shop.push_back(Rugs);
	shop.push_back(Legos);
	printList(shop);
}
//DELETE QUEUE
TEST_CASE("DELETING THE QUEUE") {

	int takeiSize = shop.size();
	shop.pop_front();
	CHECK(takeiSize == shop.size() + 1); // ensures decreasing size
	std::list<resources>::iterator it = shop.begin();
	std::advance(it, 0);
	CHECK(it->ownerName != Rocks.ownerName); // ensures the first element added is removed from queue
	printList(shop);
}

//FIRST IN FIRST OUT
TEST_CASE("FIRST IN FIRST OUT") {

	int takeiSize = shop.size();
	std::string takeiName = shop.front().ownerName;

	resources temp = shop.front();
	shop.push_back(temp);
	CHECK(temp.ownerName == shop.back().ownerName); //checks to see if front value = last value
	CHECK(takeiSize != shop.size()); // ensures increasing size (pushes front to back)
	shop.pop_front();
	CHECK(takeiSize == shop.size()); // ensure you have the same size that you started with
	CHECK(takeiName!= shop.front().ownerName); // ensures the first element added is removed from the top
	printList(shop);
}
// STACK LAST IN FIRST OUT
TEST_CASE("LAST IN FIRST OUT") {
	int takeiSize = shop.size();
	std::string takeiName = shop.front().ownerName;
	resources temp = shop.front();
	shop.pop_back(); //Removes last value
	CHECK(takeiSize == shop.size() + 1); // Size should decrease by one from pop_back
	shop.push_back(temp); //Pushes temp to the back of the list 
	CHECK(temp.ownerName == shop.back().ownerName); //checks to see if front value = last value
	CHECK(takeiSize == shop.size()); // ensure you have the same size that you started with
	printList(shop);
}

//INSERT AND FIND
TEST_CASE() {

		shop.sort([](resources& i, resources& j) {return i.ownerName < j.ownerName; });
		std::list<resources>::iterator it = std::find_if(shop.begin(), shop.end(), [](const resources& shop) {return shop.item1 == 0; }); //looks for 0 items, and money bags buys the buisness	
		shop.insert(it, monopoly);
		shop.erase(it);

	CHECK(shop.front().ownerName != "Ben"); 
}

//PRINT
TEST_CASE() {
	
	printList(shop);

}