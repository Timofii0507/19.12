#include <iostream>
#include <locale>  
#include "fraction.h"
#include <Windows.h>

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int num1, den1, num2, den2;

    cout << "Введіть чисельник та знаменник першого дробу (чисельник знаменник): ";
    cin >> num1 >> den1;

    cout << "Введіть чисельник та знаменник другого дробу (чисельник знаменник): ";
    cin >> num2 >> den2;

    Fraction a(num1, den1);
    Fraction b(num2, den2);

    Fraction result = a + b;
    cout << "Сума: " << result.getNumerator();
    if (result.getDenominator() != 1) 
    {
        cout << "/" << result.getDenominator();
    }
    cout << endl;

    result = a - b;
    cout << "Різниця: " << result.getNumerator();
    if (result.getDenominator() != 1) 
    {
        cout << "/" << result.getDenominator();
    }
    cout << endl;

    result = a * b;
    cout << "Добуток: " << result.getNumerator();
    if (result.getDenominator() != 1) 
    {
        cout << "/" << result.getDenominator();
    }
    cout << endl;

    result = a / b;
    cout << "Частка: ";
    if (result.getDenominator() != 1) 
    {
        cout << result.getNumerator() << "/" << result.getDenominator();
    }
    else 
    {
        cout << result.getNumerator();
    }
    cout << endl;

    return 0;
}