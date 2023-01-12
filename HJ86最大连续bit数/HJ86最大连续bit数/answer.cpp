#define _CRT_SECURE_NO_WARNINGS 1
//https://www.nowcoder.com/practice/4b1658fd8ffb4217bc3b7e85a38cfaf2?tpId=37&tqId=21309&ru=/exam/oj

#include<iostream>
using namespace std;
int MAX(int a, int b)
{
    return a > b ? a : b;
}
int main()
{
    int num;
    while (cin >> num)
    {
        int count = 0, max = 0;
        while (num)
        {
            if (num & 1)
            {
                count++;
                max = MAX(count, max);
            }
            else
            {
                count = 0;
            }
            num >>= 1;
        }
        cout << max;
    }
}