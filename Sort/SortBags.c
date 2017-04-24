#include <stdio.h>
#include "SortBags.h"

//交换逻辑
int IntSwap(int *num1, int *num2)
{
    int temp;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
    return 0;
}

//打印数组
int PrintArray(int *arr, int length)
{
    for(int i = 0; i < length; printf("%d\n", arr[i++]));
    return 0;
}

//插入排序 升序
int InsertSort(int *arr, int length)
{
    int j;
    for(int i = 1; i < length; i ++) {
        if(arr[i] < arr[i - 1]) {
            j = i;
            while(arr[j] < arr[j - 1]) {
                IntSwap(&arr[j], &arr[j - 1]);
                j --;
            }
        }
    }
    PrintArray(arr, length);
    return 0;
}

