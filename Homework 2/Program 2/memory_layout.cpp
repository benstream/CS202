/*
Benjamin Stream
HW2 memory_layout.cpp
CS202
*/
#include <iostream>

void memory_layout(const int &i,const int &j,const int &k) {
    if (&i > &k && &j < &k) // if i>k and j>k ::i>j
    {
        std::cout << "The addresses seem to be increasing\n";
    }
    else if (&i < &k && &j > &k) // if k>i and k>j ::k>i
    {
        std::cout << "The addresses seem to be increasing\n";
    }
    else
    {
        std::cout << "There seems to be no order detect\n";
    }


}



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
    memory_layout(s1, s2, s3);
}

void createStatic() {
    static int s1 = 1, s2 = 1, s3 = 1;
    std::cout << "STATIC\n";
    printPointer(s1);
    printPointer(s2);
    printPointer(s3);
    memory_layout(s1, s2, s3);
}

void createFreeS() {
    int* s = new int[1,1,1];
    std::cout << "FREE STORAGE\n";
    printPointer(s[0]);
    printPointer(s[1]);
    printPointer(s[2]);
    memory_layout(s[0], s[1], s[2]);
}

int main() {

    createStack(); // Looks like decreasing, maybe create a function to evaluate for me
    createStatic(); //Look like increase
    createFreeS(); //hmmm hard to tell on this one
}