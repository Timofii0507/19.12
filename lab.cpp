#include "lab.h"
#include <iostream>

Date::Date(int d, int m, int y) : day(d), month(m), year(y) {}

int Date::operator-(const Date& other) const 
{
    return (year - other.year) * 360 + (month - other.month) * 30 + (day - other.day);
}

Date Date::operator+(int days) const 
{
    int totalDays = year * 360 + month * 30 + day + days;
    int newYear = totalDays / 360;
    int newMonth = (totalDays % 360) / 30;
    int newDay = (totalDays % 360) % 30;
    return Date(newDay, newMonth, newYear);
}

void Date::display() const
{
    cout << day << "." << month << "." << year << endl;
}