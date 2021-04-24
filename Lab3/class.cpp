#include "class.h"
#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::cin;
using std::vector;

Class::Class() :_name("default") {
    cout << "Constructed a Class named _default_ via default constructor." << endl;
}

Class::~Class() {
    cout << "Destroyed a Class named _" << _name << "_ via destructor." << endl;
}

Class::Class(const Class& origin) :_name("copyOf" + origin._name) {
    cout << "Constructed a Class named _" << _name << "_ via copy constructor." << endl;
}

Class::Class(const string& name) : _name(name) {
    cout << "Constructed a Class named _" << _name << "_ via (const std::string &) constructor." << endl;
}

std::string Class::getName() const {
    return _name;
}

void Class::setName(const std::string& name) {
    _name = name;
}