#define _CRT_SECURE_NO_WARNINGS 1
//https://www.nowcoder.com/questionTerminal/d1205615a0904bc39e9e627e7cb9e899

#include<stdio.h>
int Max(int a, int b)
{
    return a > b ? a : b;
}
int Min(int a, int b)
{
    return a < b ? a : b;
}
int main()
{
    long long a, b;
    scanf("%lld%lld", &a, &b);
    //求最大公约数
    int MAX = Max(a, b);
    int MIN = Min(a, b);
    int tmp = 1;
    while (tmp != 0)
    {
        tmp = MAX - MIN;
        MAX = Max(tmp, MIN);
        MIN = Min(tmp, MIN);
    }
    long long ret = a * b / MAX;
    printf("%lld", ret);
    return 0;
}