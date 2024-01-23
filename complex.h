#ifndef COMPLEX_H
#define COMPLEX_H

class Complex 
{
private:
    double real;
    double imaginary;

public:
    Complex();  
    Complex(double real, double imaginary); 

    Complex operator+(const Complex& other) const;
    Complex operator-(const Complex& other) const;
    Complex operator*(const Complex& other) const;
    Complex operator/(const Complex& other) const;

    double getReal() const;
    double getImaginary() const;
    void setReal(double real);
    void setImaginary(double imaginary);
};

#endif  
