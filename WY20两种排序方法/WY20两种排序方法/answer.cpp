#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>
#include<string.h>
bool is_dic(char** Str, int n)//�ж��Ƿ����ֵ���
{
    for (int j = 0; j < 100; j++)//���forѭ��ִ��һ�δ���һ�бȽ����
    {
        for (int i = 0; i < n; i++)
        {
            if (Str[i][j] > Str[i + 1][j])
                return false;
        }
    }
}
bool is_sort(int* str, int n)//�ж������Ƿ�������
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
    //���ÿ�����ʵĳ��ȣ�������������str_len��
    int* str_len = (int*)malloc(sizeof(int) * n);
    assert(str_len);
    for (int i = 0; i < n; i++)
    {
        str_len[i] = strlen(Str[i]);
    }
    //�ж�str_len�����е�Ԫ���Ƿ��ǰ��մ�С�����˳�����е�
    return is_sort(str_len, n);
}
int main()
{
    //��������
    //����n
    int n = 0;
    scanf("%d", &n);
    //����n���ַ���
    char** Str = (char**)malloc(n * sizeof(char*)); //ָ�����飺ָ�루ÿ�����ʵ��ַ�����==����
    assert(Str);
    for (int i = 0; i < n; i++)
    {
        char* tmp = (char*)malloc(sizeof(char) * 100);
        assert(tmp);
        Str[i] = tmp;
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%s", Str[i]);//����ÿһ�е�Ԫ�طŽ���ά�����ÿһ��
    }
    //��֤���˳��
    //1.��֤�Ƿ����ֵ�����
    bool flag_dic = is_dic(Str, n);
    //2.��֤�Ƿ��ճ���������
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