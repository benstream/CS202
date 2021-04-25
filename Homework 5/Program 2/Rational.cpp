//
// Created by Chris Hartman on 2/18/21.
//

#include "Rational.h"
#include <numeric>

template <typename T>
Rational<T>::Rational() {
    std::cout << "Constructor!" << std::endl;
}

template <typename T>
Rational<T>::~Rational() {
    std::cout << "Destructor!" << std::endl;
}

template <typename T>
Rational<T>::Rational(T num,T den) : _numerator(num), _denominator(den) {
    reduce();
}

template <typename T>
std::ostream& operator<<(std::ostream& os, const Rational<T>& rhs) {
    os << rhs._numerator;
    if (rhs._denominator != 1)
        os << "/" << rhs._denominator;
    return os;
}
template <typename T>
Rational<T> operator+(const Rational<T>& lhs, const Rational<T>& rhs) { //canonical
    auto temp{ lhs };
    temp += rhs;
    return temp;
}
template <typename T>
Rational<T>& Rational<T>::operator+=(const Rational<T>& rhs) {
    // a/b + c/d = (ad+bc)/ad
    _numerator = _numerator * rhs._denominator + rhs._numerator * _denominator;
    _denominator *= rhs._denominator;
    reduce();
    return *this;
}
template <typename T>
void Rational<T>::reduce() {
    auto gcd = std::gcd(_numerator, _denominator);
    _numerator /= gcd;
    _denominator /= gcd;
    if (_denominator < 0) {
        _numerator *= -1;
        _denominator *= -1;
    }
}
template <typename T>
Rational<T> operator-(const Rational<T>& lhs) {
    return Rational<T>( -lhs._numerator, lhs._denominator);
}
template <typename T>
Rational<T>& Rational<T>::operator-=(const Rational<T>& rhs) { //Canonical
    *this = *this - rhs; //uses Rational<T>::operator- to define operator-=
    return *this;
}
template <typename T>
Rational<T>& Rational<T>::operator*=(const Rational<T>& rhs) {
    _numerator *= rhs._numerator;
    _denominator *= rhs._denominator;
    return *this;
}
template <typename T>
Rational<T>& Rational<T>::operator/=(const Rational<T>& rhs) {
    return *this *= {rhs._denominator, rhs._numerator};
}
template <typename T>
Rational<T> operator-(const Rational<T>& lhs, const Rational<T>& rhs) {
    return Rational<T>(lhs + -rhs);
}
template <typename T>
// pass lhs by value because we were going to copy it anyway
Rational<T> operator*(Rational<T> lhs, const Rational<T>& rhs) { //Canonical
    return Rational<T>(lhs *= rhs);
}
template <typename T>
// pass lhs by value because we were going to copy it anyway
Rational<T> operator/(Rational<T> lhs, const Rational<T>& rhs) { //Canonical
    return Rational<T>(lhs /= rhs);
}
template <typename T>
Rational<T>& Rational<T>::operator++() {//prefix ++
    return *this += 1;
}
template <typename T>
Rational<T> Rational<T>::operator++(int) {//postfix ++
    auto copy{ *this };
    ++(*this);
    return copy;
}
template <typename T>
Rational<T>& Rational<T>::operator--() {//prefix --
    return *this -= 1;
}
template <typename T>
Rational<T> Rational<T>::operator--(int) {//postfix --
    auto copy{ *this };
    --(*this);
    return copy;
}
template <typename T>
bool operator==(const Rational<T>& lhs, const Rational<T>& rhs) {
    return lhs._numerator == rhs._numerator && lhs._denominator == rhs._denominator;
}
template <typename T>
bool operator<(const Rational<T>& lhs, const Rational<T>& rhs) {
    return lhs._numerator * rhs._denominator < rhs._numerator* lhs._denominator;
}
template <typename T>
bool operator!=(const Rational<T>& lhs, const Rational<T>& rhs) {//canonical
    return !(rhs == lhs);
}
template <typename T>
bool operator>(const Rational<T>& lhs, const Rational<T>& rhs) {//canonical
    return (rhs < lhs);
}
template <typename T>
bool operator<=(const Rational<T>& lhs, const Rational<T>& rhs) {//canonical
    return !(rhs > lhs);
}
template <typename T>
bool operator>=(const Rational<T>& lhs, const Rational<T>& rhs) {//canonical
    return !(rhs < lhs);
}