#include "string.h"
#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout << "������ �����: ";
    char inputString[100];
    cin.getline(inputString, sizeof(inputString));
    String str1(inputString);
    cout << "������ ������ ��� ��������� �������: ";
    int index;
    cin >> index;
    cout << "������ �� ������� " << index <<  ": " << str1[index] << endl;
    cout << "������ ������ ��� ����������� ���� �������: ";
    char ch;
    cin >> ch;
    cout << "������ ������� '" << ch << "' � �����: " << str1(ch) << endl;
    cout << "������� ����� : " << static_cast<int>(str1) << endl;
    return 0;
}