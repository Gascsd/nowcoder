#define _CRT_SECURE_NO_WARNINGS 1
//https://www.nowcoder.com/questionTerminal/70e00e490b454006976c1fdf47f155d9

class LCA {
public:
    int getLCA(int a, int b) {
        // write code here
        if (a == b)
            return a;
        //找到较大节点父节点与较小节点递归
        int max = a;
        int min = b;
        if (max < min)
        {
            max = b;
            min = a;
        }
        int p_max = max / 2;
        return getLCA(p_max, min);
    }
};