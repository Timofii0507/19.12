#include "fraction.h"
#include <iostream>


Fraction::Fraction() : numerator(0), denominator(1) {}


Fraction::Fraction(int num, int den) : numerator(num), denominator(den) 
{
    int gcd = findGCD(numerator, denominator);
    numerator /= gcd;
    denominator /= gcd;
}

int Fraction::getNumerator() const 
{
    return numerator;
}

int Fraction::getDenominator() const 
{
    return denominator;
}

Fraction Fraction::operator+(const Fraction& other) const 
{
    int resultNumerator = numerator * other.denominator + other.numerator * denominator;
    int resultDenominator = denominator * other.denominator;
    int gcd = findGCD(resultNumerator, resultDenominator);
    return Fraction(resultNumerator / gcd, resultDenominator / gcd);
}

Fraction Fraction::operator-(const Fraction& other) const 
{
    int resultNumerator = numerator * other.denominator - other.numerator * denominator;
    int resultDenominator = denominator * other.denominator;
    int gcd = findGCD(resultNumerator, resultDenominator);
    return Fraction(resultNumerator / gcd, resultDenominator / gcd);
}

Fraction Fraction::operator*(const Fraction& other) const 
{
    int resultNumerator = numerator * other.numerator;
    int resultDenominator = denominator * other.denominator;
    int gcd = findGCD(resultNumerator, resultDenominator);
    return Fraction(resultNumerator / gcd, resultDenominator / gcd);
}

Fraction Fraction::operator/(const Fraction& other) const 
{
    int resultNumerator = numerator * other.denominator;
    int resultDenominator = denominator * other.numerator;
    int gcd = findGCD(resultNumerator, resultDenominator);
    return Fraction(resultNumerator / gcd, resultDenominator / gcd);
}

int Fraction::findGCD(int a, int b) const 
{
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
