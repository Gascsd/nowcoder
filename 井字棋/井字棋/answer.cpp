#define _CRT_SECURE_NO_WARNINGS 1
//https://www.nowcoder.com/questionTerminal/e1bb714eb9924188a0d5a6df2216a3d1

class Board {
public:
    bool checkWon(vector<vector<int> > board) {
        // write code here
        //�ж��л�ʤ
        for (int i = 0; i < 3; i++)//i��ʾ�У�j��ʾ��
        {
            int sum = 0;
            for (int j = 0; j < 3; j++)
            {
                sum += board[i][j];
            }
            if (sum == 3)
                return true;
            if (sum == -3)
                return false;
        }
        //�ж��л�ʤ
        for (int i = 0; i < 3; i++)//i��ʾ�У�j��ʾ��
        {
            int sum = 0;
            for (int j = 0; j < 3; j++)
            {
                sum += board[j][i];
            }
            if (sum == 3)
                return true;
            if (sum == -3)
                return false;
        }
        //�ж϶Խ��߻�ʤ
        int sum1 = 0;
        int sum2 = 0;
        for (int i = 0; i < 3; i++)
        {
            sum1 += board[i][i];
            sum2 += board[i][2 - i];
        }
        if (sum1 == 3 || sum2 == 3)
            return true;
        if (sum1 == -3 || sum2 == -3)
            return false;
        return false;
    }
};