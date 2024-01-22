#ifndef LAB_H
#define LAB_H
#include <iostream>

using namespace std;

class Date 
{
private:
    int day, month, year;

public:
    Date(int d, int m, int y);
    int operator-(const Date& other) const;
    Date operator+(int days) const;
    void display() const;
};

#endif