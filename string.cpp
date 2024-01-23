#include "string.h"
#include <cstring>

using namespace std;

String::String() : data(nullptr), length(0) {}

String::String(const char* str) : data(nullptr), length(0) 
{
    length = static_cast<int>(strlen(str));
    data = new char[length + 1];
    strcpy_s(data, length + 1, str);
}

String::String(const String& other) : data(nullptr), length(0) 
{
    length = other.length;
    data = new char[length + 1];
    strcpy_s(data, length + 1, other.data);
}

String::~String() 
{
    delete[] data;
}

String& String::operator=(const String& other) 
{
    if (this != &other) 
    {
        delete[] data;
        length = other.length;
        data = new char[length + 1];
        strcpy_s(data, length + 1, other.data);
    }
    return *this;
}

char& String::operator[](int index) 
{
    return data[index];
}

int String::operator()(char ch) const 
{
    for (int i = 0; i < length; ++i) 
    {
        if (data[i] == ch) {
            return i;
        }
    }
    return -1;
}

String::operator int() const 
{
    return length;
}

int String::getLength() const 
{
    return length;
}