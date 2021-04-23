/*
Benjamin Stream
HW2 memory_layout.cpp
CS202
*/
#include <iostream>

void memory_layout(const int& i, const int& j, const int& k) {
	if (&i > &k && &j > &k) // if i>k and j>k ::i>j
	{
		std::cout << "The addresses seem to be decreasing\n";
	}
	else if (&k > &i && &j > &i) // if k>i and j>i ::k>i
	{
		std::cout << "The addresses seem to be increasing\n";
	}
	else
	{
		std::cout << "There seems to be no order detected\n";
	}
}

void printPointer(int& i) {
	int* iptr = &i;
	// the unary * operator dereferences the pointer
	std::cout << "i = " << *iptr << "\n";
	std::cout << "&i = " << iptr << "\n";
}

void createStack() {
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
	int* s = new int[3];
	s[0] = 1;
	s[1] = 1;
	s[2] = 1;
	std::cout << "FREE STORAGE\n";
	printPointer(s[0]);
	printPointer(s[1]);
	printPointer(s[2]);
	memory_layout(s[0], s[1], s[2]);
}

int main() {
	createStack();
	createStatic();
	createFreeS();
}