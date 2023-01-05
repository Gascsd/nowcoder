#define _CRT_SECURE_NO_WARNINGS 1
//https://www.nowcoder.com/practice/eebb2983b7bf40408a1360efb33f9e5d?tpId=40&&tqId=31013&rp=1&ru=/activity/oj&qru=/ta/kaoyan/question-ranking

#include<iostream>

using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        for (int i = 0; i < n; i++)
        {
            int y, m, d, num;
            int days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
            cin >> y >> m >> d >> num;
            d += num;
            while (d > days[m - 1])
            {
                if (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0))
                    days[1] = 29;
                else
                    days[1] = 28;
                d -= days[m - 1];
                if (d == 0)
                    d = 1;
                m++;
                if (m == 13)
                {
                    y++;
                    m = 1;
                }
            }
            printf("%4d-%02d-%02d\n", y, m, d);
        }
    }
    return 0;
}