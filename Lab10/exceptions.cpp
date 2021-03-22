#include <iostream>
#include "classname.h"
using std::cin;
using std::cout;
using std::endl;

void functionC() {
    //Throwing Error
    throw std::runtime_error("On purpose error on functionC?????");
}

void functionB() {
     Lab2 a;
    cout << "Starting functionB()" << endl;
    functionC(); // Error comes in here
    cout << "Ending functionB()" << endl;
}

void functionA() {
    try {functionB();}
    
    catch(std::exception & e) {
        cout << "Caught an exception: " << e.what() << endl;
    }
    
    
}
int main() {
    cout << "Starting main()" << endl;
    functionA();
    cout << "Ended normally." << endl;
    return 0;
}