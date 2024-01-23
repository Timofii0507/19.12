#ifndef FRACTION_H
#define FRACTION_H
using namespace std;

class Fraction 
{
private:
    int numerator;
    int denominator;
    int findGCD(int a, int b) const;

public:
    Fraction();
    Fraction(int num, int den);
    int getNumerator() const;
    int getDenominator() const;
    Fraction operator+(const Fraction& other) const;
    Fraction operator-(const Fraction& other) const;
    Fraction operator*(const Fraction& other) const;
    Fraction operator/(const Fraction& other) const;
};

#endif 
