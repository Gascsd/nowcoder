#define _CRT_SECURE_NO_WARNINGS 1
//https://www.nowcoder.com/practice/f8538f9ae3f1484fb137789dec6eedb9?tpId=37&tqId=21283&ru=/exam/oj
#include<iostream>
using namespace std;
bool is_prime(int n)
{
    for (int i = 2; i < n / 2; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n = 0;
    cin >> n;
    int ret = n / 2;
    for (int i = ret; i >= 2; i--)
    {
        if (is_prime(i))
        {
            //�ж���һ�����Ƿ�������
            if (is_prime(n - i))
            {
                ret = i;
                break;
            }
        }
    }
    cout << ret << endl << n - ret << endl;
    return 0;
}