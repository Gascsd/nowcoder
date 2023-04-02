#define _CRT_SECURE_NO_WARNINGS 1
//https://www.nowcoder.com/practice/1277c681251b4372bdef344468e4f26e?tpId=13&&tqId=11202&rp=6&ru=/activity/oj&qru=/ta/coding-interviews/question-ranking


class Solution {
public:
    int StrToInt(string str)
    {
        if (str.size() == 0)
            return 0;
        int flag = 1;
        if (str[0] == '+')
        {
            flag = 1;
            str.erase(0, 1);
        }
        else if (str[0] == '-')
        {
            flag = -1;
            str.erase(0, 1);
        }
        int sum = 0;
        for (auto e : str)
        {
            if (e >= '0' && e <= '9')
            {
                sum = sum * 10 + e - '0';
            }
            else
            {
                return 0;
            }
        }
        return sum * flag;
    }
};