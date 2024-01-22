#include "array.h"
#include <Windows.h>

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    size_t size;
    cout << "Введіть розмір масиву: ";
    cin >> size;
    Array arr(size);
    cout << "Початковий масив: ";
    arr.print();
    size_t index;
    cout << "Введіть індекс для виводу елемента: ";
    cin >> index;
    cout << "Елемент за індексом " << index << ": " << arr[index] << endl;
    int increment;
    cout << "Введіть число для збільшення елементів масиву: ";
    cin >> increment;
    arr(increment);
    cout << "Масив після збільшення на " << increment << ": ";
    arr.print();
    int sum = static_cast<int>(arr);
    cout << "Сума елементів масиву: " << sum << endl;
    char* strArray = static_cast<char*>(arr);
    cout << "Масив у вигляді рядка: " << strArray << endl;
    delete[] strArray;
    return 0;
}
