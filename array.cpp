#include "array.h"
#include <cstring>

Array::Array() : data(nullptr), size(0) {}

Array::Array(size_t size) : size(size) 
{
    data = new int[size];
    cout << "Введіть " << size << " елементів масиву:" << endl;
    for (size_t i = 0; i < size; ++i) 
    {
        cout << "Елемент " << i << ": ";
        cin >> data[i];
    }
}

Array::Array(const Array& other) : size(other.size) 
{
    data = new int[size];
    std::memcpy(data, other.data, size * sizeof(int));
}

Array::~Array()
{
    delete[] data;
}

Array& Array::operator=(const Array& other) 
{
    if (this != &other) 
    {
        delete[] data;
        size = other.size;
        data = new int[size];
        memcpy(data, other.data, size * sizeof(int));
    }
    return *this;
}

int& Array::operator[](size_t index) 
{
    return data[index];
}

void Array::operator()(int increment) 
{
    for (size_t i = 0; i < size; ++i) 
    {
        data[i] += increment;
    }
}

Array::operator int() const 
{
    int sum = 0;
    for (size_t i = 0; i < size; ++i) 
    {
        sum += data[i];
    }
    return sum;
}

Array::operator char* () const 
{
    char* result = new char[size * 12 + 1]; 
    result[0] = '\0';
    for (size_t i = 0; i < size; ++i) 
    {
        char temp[12];
        snprintf(temp, sizeof(temp), "%d ", data[i]);
        strcat_s(result, size * 12 + 1, temp);
    }
    return result;
}

void Array::print() const
{
    cout << "Масив: ";
    for (size_t i = 0; i < size; ++i) 
    {
        cout << data[i] << " ";
    }
    cout << endl;
}
