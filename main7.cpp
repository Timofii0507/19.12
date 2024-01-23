#include "string.h"
#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout << "Введіть рядок: ";
    char inputString[100];
    cin.getline(inputString, sizeof(inputString));
    String str1(inputString);
    cout << "Введіть індекс для отримання символу: ";
    int index;
    cin >> index;
    cout << "Символ на позиції " << index <<  ": " << str1[index] << endl;
    cout << "Введіть символ для знаходження його індексу: ";
    char ch;
    cin >> ch;
    cout << "Індекс символу '" << ch << "' в рядку: " << str1(ch) << endl;
    cout << "Довжина рядка : " << static_cast<int>(str1) << endl;
    return 0;
}