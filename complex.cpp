#include "complex.h"
#include <iostream>

using namespace std;

Complex::Complex() : real(0.0), imaginary(0.0) {}

Complex::Complex(double real, double imaginary) : real(real), imaginary(imaginary) {}

Complex Complex::operator+(const Complex& other) const 
{
    return Complex(real + other.real, imaginary + other.imaginary);
}

Complex Complex::operator-(const Complex& other) const 
{
    return Complex(real - other.real, imaginary - other.imaginary);
}

Complex Complex::operator*(const Complex& other) const 
{
    double resultReal = (real * other.real) - (imaginary * other.imaginary);
    double resultImaginary = (real * other.imaginary) + (imaginary * other.real);
    return Complex(resultReal, resultImaginary);
}

Complex Complex::operator/(const Complex& other) const 
{
    double denominator = (other.real * other.real) + (other.imaginary * other.imaginary);
    double resultReal = ((real * other.real) + (imaginary * other.imaginary)) / denominator;
    double resultImaginary = ((imaginary * other.real) - (real * other.imaginary)) / denominator;
    return Complex(resultReal, resultImaginary);
}

double Complex::getReal() const 
{
    return real;
}

double Complex::getImaginary() const 
{
    return imaginary;
}

void Complex::setReal(double real) 
{
    this->real = real;
}

void Complex::setImaginary(double imaginary) 
{
    this->imaginary = imaginary;
}
