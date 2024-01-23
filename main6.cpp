#include <iostream>
#include "complex.h"
#include <Windows.h>

using namespace std;

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double realA, imaginaryA, realB, imaginaryB;
    cout << "¬вед≥ть реальну частину комплексного числа A: ";
    cin >> realA;
    cout << "¬вед≥ть у€вну частину комплексного числа A: ";
    cin >> imaginaryA;
    cout << "¬вед≥ть реальну частину комплексного числа B: ";
    cin >> realB;
    cout << "¬вед≥ть у€вну частину комплексного числа B: ";
    cin >> imaginaryB;

    Complex a(realA, imaginaryA);
    Complex b(realB, imaginaryB);

    Complex sum = a + b;
    Complex difference = a - b;
    Complex product = a * b;
    Complex quotient = a / b;

    cout << "—ума: " << sum.getReal() << " + " << sum.getImaginary() << "i" << endl;
    cout << "–≥зниц€: " << difference.getReal() << " + " << difference.getImaginary() << "i" << endl;
    cout << "ƒобуток: " << product.getReal() << " + " << product.getImaginary() << "i" << endl;
    cout << "„астка: " << quotient.getReal() << " + " << quotient.getImaginary() << "i" << endl;
    return 0;
}
