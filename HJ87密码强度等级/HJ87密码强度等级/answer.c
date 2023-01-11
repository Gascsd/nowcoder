#define _CRT_SECURE_NO_WARNINGS 1
//https://www.nowcoder.com/practice/52d382c2a7164767bca2064c1c9d5361?tpId=37&tqId=21310&ru=/exam/oj

#include<stdio.h>
#include<string.h>
int main()
{
    char arr[301] = { 0 };
    scanf("%s", arr);
    int ret = 0;
    //ÅÐ¶Ï³¤¶È
    int length = strlen(arr);
    if (length <= 4)
        ret += 5;
    else if (length <= 7)
        ret += 10;
    else
        ret += 25;
    //ÅÐ¶Ï×ÖÄ¸
    int flag1 = 0;//ÊÇ·ñÓÐÐ¡Ð´×ÖÄ¸
    int flag2 = 0;//ÊÇ·ñÓÐ´óÐ´×ÖÄ¸
    int i = 0;
    while (arr[i] != '\0' && !(flag1 && flag2))
    {
        if (arr[i] >= 'a' && arr[i] <= 'z')
            flag1 = 1;
        if (arr[i] >= 'A' && arr[i] <= 'Z')
            flag2 = 1;
        i++;
    }
    if (!flag1 && !flag2)
        ret += 0;
    else if (flag1 && flag2)
        ret += 20;
    else
        ret += 10;
    //ÅÐ¶ÏÊý×ÖºÍ·ûºÅ
    int count1 = 0;
    int count2 = 0;
    i = 0;
    while (arr[i] != '\0')
    {
        if (arr[i] >= '0' && arr[i] <= '9')
            count1++;
        if ((arr[i] >= 0x21 && arr[i] <= 0x2F)
            || (arr[i] >= 0x3A && arr[i] <= 0x40)
            || (arr[i] >= 0x5B && arr[i] <= 0x60)
            || (arr[i] >= 0x7B && arr[i] <= 0x7E))
            count2++;
        i++;
    }
    if (count1 == 0)
        ret += 0;
    else if (count1 == 1)
        ret += 10;
    else if (count1 > 1)
        ret += 20;
    if (count2 == 0)
        ret += 0;
    else if (count2 == 1)
        ret += 10;
    else if (count2 > 1)
        ret += 25;
    //ÅÐ¶Ï½±Àø
    if (flag1 && flag2 && count1 && count2)
        ret += 5;
    else if ((flag1 || flag2) && count1 && count2)
        ret += 3;
    else if ((flag1 || flag2) && count1)
        ret += 2;
    //¸ù¾Ý·ÖÊýÆÀÅÐ½á¹û
    if (ret >= 90)
        printf("VERY_SECURE");
    else if (ret >= 80)
        printf("SECURE");
    else if (ret >= 70)
        printf("VERY_STRONG");
    else if (ret >= 60)
        printf("STRONG");
    else if (ret >= 50)
        printf("AVERAGE");
    else if (ret >= 25)
        printf("WEAK");
    else if (ret >= 0)
        printf("VERY_WEAK");
    return 0;
}