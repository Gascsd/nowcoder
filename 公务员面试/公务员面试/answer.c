#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int cmp(void* e1, void* e2)
{
    return *(int*)e1 - *(int*)e2;
}
int main()
{
    int arr[7] = { 0 };
    int i = 0;
    int val = 0;
    while (scanf("%d", &val) != EOF)
    {
        int sum = 0;
        arr[0] = val;
        for (i = 1; i < 7; i++)
        {
            scanf("%d", &arr[i]);
        }
        qsort(arr, 7, 4, cmp);
        for (i = 1; i < 6; i++)
        {
            sum += arr[i];
        }
        float ret = sum / 5.0;
        printf("%.2f\n", ret);
    }
    return 0;
}
