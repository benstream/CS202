#include "class.h"
#include <iostream>
#include <vector>
#include <memory>
using std::cout;
using std::endl;
using std::cin;
using std::vector;
using std::unique_ptr;
using std::shared_ptr;
using std::make_unique;
using std::make_shared;
using std::move;

// Pass an object by value
void objectByValue(Class bar) {
    cout << "Currently inside objectByValue." << endl;
    cout << "Name: " << bar.getName() << endl;
    cout << "Changing name to Benjamin." << endl;
    bar.setName("Benjamin");
    cout << "Still inside objectByValue, Class's name is now " << bar.getName() << endl;
}

// Pass an object by reference
void objectByReference(Class& bar) {
    cout << "Currently inside objectByReference." << endl;
    cout << "Class's name is " << bar.getName() << endl;
    cout << "Changing name to Benjamin." << endl;
    bar.setName("Benjamin");
}

// Pass an object by reference to const
void objectByReferenceToConst(Class const& bar) {
    cout << "Currently inside objectByReferenceToConst." << endl;
    cout << "Class's name is " << bar.getName() << endl;
}

// Return an object by value
Class returnObjectByValue() {
    cout << "Currently inside returnObjectByValue." << endl;
    Class bar("Bar");
    return bar;
}

int main(int argc, const char** argv) {
    // Create a raw pointer to a dynamically allocated object of your class.
    cout << "\n>> Creating raw pointer." << endl;
    Class* pointer = new Class("RawPointer");
    delete pointer;

    // Create a unique_ptr to an object of your class. 
    cout << "\n>> Creating unique_ptr." << endl;
    unique_ptr<Class> forwardAlphabet = make_unique<Class>("abcdefghijklmnopqrstuvwxyz");

    // Transfer ownership of that object to a different unique_ptr. 
    cout << "\n>> Transferring ownership to new unique_ptr." << endl;
    unique_ptr<Class> reverseAlphabet = std::move(forwardAlphabet);

    // Demonstrate the calling of a member function of your object through the unique_ptr.
    cout << "\n>> Calling a member function." << endl;
    reverseAlphabet->getName();

    // Make a shared_ptr to a dynamically allocated object of your class.
    cout << "\n>> Creating shared_ptr." << endl;
    shared_ptr<Class> ascendingOrder = make_shared<Class>("0123456789");

    // Make another shared_ptr that points at the same object. 
    cout << "\n>> Creating another shared_ptr to the same object." << endl;
    shared_ptr<Class> descendingOrder(ascendingOrder);

    return 0;
}