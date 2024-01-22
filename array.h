#ifndef ARRAY_H
#define ARRAY_H
#include <iostream>
using namespace std;

class Array 
{
private:
    int* data;
    size_t size;

public:
    Array();

    Array(size_t size);

    Array(const Array& other);

    ~Array();

    Array& operator=(const Array& other);

    int& operator[](size_t index);

    void operator()(int increment);

    operator int() const;

    operator char* () const;

    void print() const;
};

#endif 
