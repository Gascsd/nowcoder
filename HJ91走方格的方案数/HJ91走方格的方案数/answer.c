#define _CRT_SECURE_NO_WARNINGS 1
//https://www.nowcoder.com/practice/e2a22f0305eb4f2f9846e7d644dba09b?tpId=37&tqId=21314&ru=/exam/oj

#include<stdio.h>
int func(int m, int n)
{
    //if (m == 0 && n == 0)
    //    return 0;
    //else if (m == 0 && n == 1)
    //    return 1;
    //else if (m == 1 && n == 0)
    //    return 1;
    if (m == 0)
        return n;
    if (n == 0)
        return m;
    return func(m - 1, n) + func(m, n - 1);
}
int main()
{
    int m, n;
    scanf("%d%d", &n, &m);
    printf("%d", func(m, n));
    return 0;
}