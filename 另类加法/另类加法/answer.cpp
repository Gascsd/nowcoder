#define _CRT_SECURE_NO_WARNINGS 1
//https://www.nowcoder.com/questionTerminal/e7e0d226f1e84ba7ab8b28efc6e1aebc


class UnusualAdd {
public:
    int addAB(int A, int B) {
        // write code here
        if (A == 0)
            return B;
        if (B == 0)
            return A;
        int a = A ^ B;
        int b = (A & B) << 1;
        return addAB(a, b);
    }
};