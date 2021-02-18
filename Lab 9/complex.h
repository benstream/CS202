#ifndef Lab9Complex
#define Lab9Complex
#include <iostream>

//rhs is imaginary
//lhs is real

class Complex {
	friend std::ostream& operator<<(std::ostream&, const Complex& rhs);
	friend Complex operator+(const Complex& lhs, const Complex& rhs);

public:
	Complex(double real, double imag = 0);
	Complex& operator+=(const Complex& rhs);

private:
	double _real;
	double _imag;
};







#endif//Lab9Complex