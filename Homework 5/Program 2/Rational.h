//
// Created by Chris Hartman on 2/18/21.
//

#ifndef CS202CLASSEXAMPLE_RATIONAL_H
#define CS202CLASSEXAMPLE_RATIONAL_H
#include <iostream>

// class invariant:
// _denominator is always > 0
template <typename T>

class Rational {
	template <typename T>
	class Rational;
	friend std::ostream& operator<<(std::ostream&, const Rational<T>& rhs);
	template <typename U>
	friend Rational<U> operator+(const Rational<U>& lhs, const Rational<U>& rhs);
	template <typename U>
	friend Rational<U> operator-(const Rational<U>& lhs);
	template <typename U>
	friend bool operator==(const Rational<U>& lhs, const Rational<U>& rhs);
	template <typename U>
	friend bool operator<(const Rational<U>& lhs, const Rational<U>& rhs);

public:
	Rational(); //Constructor
	~Rational(); //Destructor
	Rational(T, T = 1); //NOLINT(google-explicit-constructor): Allow implicit conversion from int
	Rational& operator+=(const Rational<T>& rhs);
	Rational& operator-=(const Rational<T>& rhs);
	Rational& operator*=(const Rational<T>& rhs);
	Rational& operator/=(const Rational<T>& rhs);
	Rational& operator++();        //prefix ++
	Rational operator++(int); //postfix ++
	Rational& operator--();        //prefix --
	Rational operator--(int); //postfix --
private:
	void reduce();

	T _numerator;
	T _denominator;
};

template <typename T>
Rational<T> operator-(const Rational<T>& lhs, const Rational<T>& rhs);
template <typename T>
Rational<T> operator*(Rational<T> lhs, const Rational<T>& rhs);
template <typename T>
Rational<T> operator/(Rational<T> lhs, const Rational<T>& rhs);
template <typename T>
bool operator!=(const Rational<T>& lhs, const Rational<T>& rhs);
template <typename T>
bool operator>(const Rational<T>& lhs, const Rational<T>& rhs);
template <typename T>
bool operator<=(const Rational<T>& lhs, const Rational<T>& rhs);
template <typename T>
bool operator>=(const Rational<T>& lhs, const Rational<T>& rhs);

#endif//CS202CLASSEXAMPLE_RATIONAL_H