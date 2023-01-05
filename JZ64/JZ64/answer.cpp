#define _CRT_SECURE_NO_WARNINGS 1
//https://www.nowcoder.com/practice/7a0da8fc483247ff8800059e12d7caf1?tpId=13&tqId=11200&tPage=3&rp=3&ru=/ta/coding-interviews&qru=/ta/coding-interviews/question-ranking



class A
{
public:
    A()
    {
        n += i;
        i++;
    }
    static int GetN()
    {
        return n;
    }
private:
    static int i;
    static int n;
};
class Solution {
    friend class A;
public:
    int Sum_Solution(int n) {
        A a[n];
        return A::GetN();
    }
};
int A::i = 1;
int A::n = 0;