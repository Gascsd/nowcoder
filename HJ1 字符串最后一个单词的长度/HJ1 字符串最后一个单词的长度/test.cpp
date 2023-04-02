#define _CRT_SECURE_NO_WARNINGS 1
//https://www.nowcoder.com/practice/8c949ea5f36f422594b306a2300315da?tpId=37&&tqId=21224&rp=5&ru=/activity/oj&qru=/ta/huawei/question-ranking
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    size_t pos = 0;
    size_t pos_pev = pos;
    while ((pos_pev = s.find(' ', pos)) != string::npos)
    {
        pos = pos_pev + 1;
    }
    size_t len = 0;
    auto begin = s.begin() + pos;
    while (begin != s.end())
    {
        ++len;
        ++begin;
    }
    cout << len << endl;
}