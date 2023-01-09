#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>
#include<string.h>
bool is_dic(char** Str, int n)//判断是否按照字典序
{
    for (int j = 0; j < 100; j++)//这个for循环执行一次代表一列比较完毕
    {
        for (int i = 0; i < n; i++)
        {
            if (Str[i][j] > Str[i + 1][j])
                return false;
        }
    }
}
bool is_sort(int* str, int n)//判断数组是否是升序
{
    for (int i = 0; i < n; i++)
    {
        if (str[i] > str[i + 1])
        {
            return false;
        }
    }
    return true;
}
bool is_length(char** Str, int n)
{
    //求出每个单词的长度，存入整型数组str_len中
    int* str_len = (int*)malloc(sizeof(int) * n);
    assert(str_len);
    for (int i = 0; i < n; i++)
    {
        str_len[i] = strlen(Str[i]);
    }
    //判断str_len数组中的元素是否是按照从小到大的顺序排列的
    return is_sort(str_len, n);
}
int main()
{
    //接收数据
    //接收n
    int n = 0;
    scanf("%d", &n);
    //接收n个字符串
    char** Str = (char**)malloc(n * sizeof(char*)); //指针数组：指针（每个单词的字符串）==数组
    assert(Str);
    for (int i = 0; i < n; i++)
    {
        char* tmp = (char*)malloc(sizeof(char) * 100);
        assert(tmp);
        Str[i] = tmp;
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%s", Str[i]);//接收每一行的元素放进二维数组的每一行
    }
    //验证存放顺序
    //1.验证是否按照字典序存放
    bool flag_dic = is_dic(Str, n);
    //2.验证是否按照长度排序存放
    bool flag_len = is_length(Str, n);
    if (flag_dic && flag_len)
    {
        printf("both");
    }
    else if (flag_dic)
    {
        printf("lexicographically");
    }
    else if (flag_len)
    {
        printf("lengths");
    }
    else
    {
        printf("none");
    }
    return 0;
}