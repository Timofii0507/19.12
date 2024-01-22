#include "StringSet.h"
#include <algorithm>

StringSet::StringSet() {}

StringSet::StringSet(const std::string& s) : str(s) {}

StringSet StringSet::operator*(const StringSet& other) const 
{
    string result;
    for (char ch : str) 
    {
        if (other.str.find(ch) != string::npos) 
        {
            result += ch;
        }
    }
    return StringSet(result);
}

std::string StringSet::getString() const 
{
    return str;
}
