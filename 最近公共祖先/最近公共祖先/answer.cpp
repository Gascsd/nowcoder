#define _CRT_SECURE_NO_WARNINGS 1
//https://www.nowcoder.com/questionTerminal/70e00e490b454006976c1fdf47f155d9

class LCA {
public:
    int getLCA(int a, int b) {
        // write code here
        if (a == b)
            return a;
        //�ҵ��ϴ�ڵ㸸�ڵ����С�ڵ�ݹ�
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