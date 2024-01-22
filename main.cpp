#include "lab.h"
#include <Windows.h>


int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int day1, month1, year1;
    cout << "Введіть день, місяць і рік для першої дати (через пробіл): ";
    cin >> day1 >> month1 >> year1;
    int day2, month2, year2;
    cout << "Введіть день, місяць і рік для другої дати (через пробіл): ";
    cin >> day2 >> month2 >> year2;
    Date date1(day1, month1, year1);
    Date date2(day2, month2, year2);
    int diff = date2 - date1;
    cout << "Різниця між введеними датами: " << diff << " днів" << endl;
    int daysToAdd;
    cout << "Введіть кількість днів для збільшення першої дати: ";
    cin >> daysToAdd;
    Date newDate = date1 + daysToAdd;
    cout << "Дата після додавання " << daysToAdd << " днів: ";
    newDate.display();
    return 0;
}
