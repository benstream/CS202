#ifndef EXAMPLE_CLASS_HPP
#define EXAMPLE_CLASS_HPP

#include <iostream>
#include <string>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

class Class {
private:
    string _name = "Eric";
public:
    Class();
    Class(const Class&);
    Class(const string& name);
    ~Class();
    std::string getName() const;
    void setName(const string& name);
};

#endif // EXAMPLE_FOO_HPP