#include "complex.h"

Complex::Complex(double real, double imag) : _real(real), _imag(imag)
{

}

std::ostream& operator<<(std::ostream& os, const Complex& rhs)
{
	return os << rhs._real << "+" << rhs._imag << "i";
}

Complex operator+(const Complex &lhs, const Complex &rhs)
{
	auto temp{ lhs };
	temp += rhs;
	return temp;
}

Complex& Complex::operator+=(const Complex& rhs)
{
	_real += rhs._real;
	_imag += rhs._imag;
	return *this;
}

