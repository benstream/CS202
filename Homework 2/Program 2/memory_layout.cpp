/*
Benjamin Stream
HW2 memory_layout.cpp
CS202
*/
#include <iostream>

void printPointer(int& i) {
    int* iptr = &i;
    // the unary * operator dereferences the pointer
    std::cout << "i = " << *iptr << "\n";
    std::cout << "& i = " << iptr << "\n" << std::endl;
}

void createStack(){
    std::cout << "STACK\n";
    int s1 = 1, s2 = 1, s3 = 1;
    printPointer(s1);
    printPointer(s2);
    printPointer(s3);

}

void createStatic() {
    static int s1 = 1, s2 = 1, s3 = 1;
    std::cout << "STATIC\n";
    printPointer(s1);
    printPointer(s2);
    printPointer(s3);
}


int main() {

    createStack(); // Looks like decreasing, maybe create a function to evaluate for me
    createStatic(); //Look like increase

}