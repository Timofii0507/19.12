#ifndef STRINGSET_H
#define STRINGSET_H

#include <string>
#include <iostream>

using namespace std;

class StringSet 
{
private:
    string str;

public:
    StringSet();
    StringSet(const string& s);
    StringSet operator*(const StringSet& other) const;
    string getString() const;
};

#endif 
