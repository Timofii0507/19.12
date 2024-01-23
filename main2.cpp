#include "StringSet.h"
#include <Windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    StringSet set1("sdqcg");
    StringSet set2("rgfas34");
    StringSet intersection = set1 * set2;

    cout << "Set 1: " << set1.getString() << endl;
    cout << "Set 2: " << set2.getString() << endl;
    cout << "Intersection: " << intersection.getString() << endl;
    return 0;
}
