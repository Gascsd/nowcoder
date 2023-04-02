#define _CRT_SECURE_NO_WARNINGS 1
//https://www.nowcoder.com/questionTerminal/d8acfa0619814b2d98f12c071aef20d4

#include <iostream>
#include <string>
#include <stack>
using namespace std;
class Parenthesis {
public:
    bool chkParenthesis(string A, int n) {
        // write code here
        stack<char> sk;
        for (auto e : A) {
            if (e == '(')
                sk.push(e);
            else if (e == ')') {
                if (!sk.empty())
                    sk.pop();
                else
                    return false;
            }
            else
                return false;
        }
        if (sk.empty())
            return true;
        else
            return false;
    }
};


int main()
{
    int n;
    string A;
    cin >> A >> n;
    bool ret = Parenthesis().chkParenthesis(A, n);
    if (ret == false)
        cout << "false" << endl;
    else
        cout << "true" << endl;
    return 0;
}
