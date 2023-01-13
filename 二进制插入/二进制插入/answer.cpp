#define _CRT_SECURE_NO_WARNINGS 1
//https://www.nowcoder.com/questionTerminal/30c1674ad5694b3f8f0bc2de6f005490

class BinInsert {
public:
    int binInsert(int n, int m, int j, int i) {
        // write code here
        return n | (m << j);
    }
};