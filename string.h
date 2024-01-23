#ifndef STRING_H
#define STRING_H

#include <iostream>

class String 
{
private:
    char* data;
    int length;

public:
    String();
    String(const char* str);
    String(const String& other);
    ~String();

    String& operator=(const String& other);
    char& operator[](int index);
    int operator()(char ch) const;
    operator int() const;
    int getLength() const;
};

#endif 
