#include "array.h"
#include <Windows.h>

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    size_t size;
    cout << "������ ����� ������: ";
    cin >> size;
    Array arr(size);
    cout << "���������� �����: ";
    arr.print();
    size_t index;
    cout << "������ ������ ��� ������ ��������: ";
    cin >> index;
    cout << "������� �� �������� " << index << ": " << arr[index] << endl;
    int increment;
    cout << "������ ����� ��� ��������� �������� ������: ";
    cin >> increment;
    arr(increment);
    cout << "����� ���� ��������� �� " << increment << ": ";
    arr.print();
    int sum = static_cast<int>(arr);
    cout << "���� �������� ������: " << sum << endl;
    char* strArray = static_cast<char*>(arr);
    cout << "����� � ������ �����: " << strArray << endl;
    delete[] strArray;
    return 0;
}
