#include "lab.h"
#include <Windows.h>


int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int day1, month1, year1;
    cout << "������ ����, ����� � �� ��� ����� ���� (����� �����): ";
    cin >> day1 >> month1 >> year1;
    int day2, month2, year2;
    cout << "������ ����, ����� � �� ��� ����� ���� (����� �����): ";
    cin >> day2 >> month2 >> year2;
    Date date1(day1, month1, year1);
    Date date2(day2, month2, year2);
    int diff = date2 - date1;
    cout << "г����� �� ��������� ������: " << diff << " ���" << endl;
    int daysToAdd;
    cout << "������ ������� ��� ��� ��������� ����� ����: ";
    cin >> daysToAdd;
    Date newDate = date1 + daysToAdd;
    cout << "���� ���� ��������� " << daysToAdd << " ���: ";
    newDate.display();
    return 0;
}
