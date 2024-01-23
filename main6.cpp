#include <iostream>
#include "complex.h"
#include <Windows.h>

using namespace std;

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double realA, imaginaryA, realB, imaginaryB;
    cout << "������ ������� ������� ������������ ����� A: ";
    cin >> realA;
    cout << "������ ����� ������� ������������ ����� A: ";
    cin >> imaginaryA;
    cout << "������ ������� ������� ������������ ����� B: ";
    cin >> realB;
    cout << "������ ����� ������� ������������ ����� B: ";
    cin >> imaginaryB;

    Complex a(realA, imaginaryA);
    Complex b(realB, imaginaryB);

    Complex sum = a + b;
    Complex difference = a - b;
    Complex product = a * b;
    Complex quotient = a / b;

    cout << "����: " << sum.getReal() << " + " << sum.getImaginary() << "i" << endl;
    cout << "г�����: " << difference.getReal() << " + " << difference.getImaginary() << "i" << endl;
    cout << "�������: " << product.getReal() << " + " << product.getImaginary() << "i" << endl;
    cout << "������: " << quotient.getReal() << " + " << quotient.getImaginary() << "i" << endl;
    return 0;
}
