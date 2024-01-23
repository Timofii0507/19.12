#include <iostream>
#include <locale>  
#include "fraction.h"
#include <Windows.h>

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int num1, den1, num2, den2;

    cout << "������ ��������� �� ��������� ������� ����� (��������� ���������): ";
    cin >> num1 >> den1;

    cout << "������ ��������� �� ��������� ������� ����� (��������� ���������): ";
    cin >> num2 >> den2;

    Fraction a(num1, den1);
    Fraction b(num2, den2);

    Fraction result = a + b;
    cout << "����: " << result.getNumerator();
    if (result.getDenominator() != 1) 
    {
        cout << "/" << result.getDenominator();
    }
    cout << endl;

    result = a - b;
    cout << "г�����: " << result.getNumerator();
    if (result.getDenominator() != 1) 
    {
        cout << "/" << result.getDenominator();
    }
    cout << endl;

    result = a * b;
    cout << "�������: " << result.getNumerator();
    if (result.getDenominator() != 1) 
    {
        cout << "/" << result.getDenominator();
    }
    cout << endl;

    result = a / b;
    cout << "������: ";
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