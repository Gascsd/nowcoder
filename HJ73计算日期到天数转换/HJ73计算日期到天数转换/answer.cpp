#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

int main() {
    int arr[] = { 0, 30, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365 };
    int _year, _month, _day;
    cin >> _year >> _month >> _day;
    int day = arr[_month - 1] + _day;
    if ((_year % 4 == 0 && _year % 100 != 0) || _year % 400 == 0)
    {
        day++;
    }
    cout << day << endl;
}