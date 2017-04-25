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

//合并逻辑
int Merge(int arr[], int first, int mid, int last, int temp[])
{
    int i = first;
    int j = mid + 1;
    int length = 0;
    while(i <= mid && j <= last)    arr[i] < arr[j] ? (temp[length ++] = arr[i ++]) : (temp[length ++] = arr[j ++]);
    while(i <= mid)                 temp[length ++] = arr[i ++];
    while(j <= last)                temp[length ++] = arr[j ++];

    for(int i = 0; i < length; arr[first ++] = temp[i ++]);

    return 0;
}


//归并排序 升序
int MergeSort(int arr[], int first, int last, int temp[])
{
    if(first == last)       return 0;
    int mid = (first + last) / 2;
    MergeSort(arr, first, mid, temp);
    MergeSort(arr, mid + 1, last, temp);
    Merge(arr, first, mid, last, temp);
    return 0;
}























