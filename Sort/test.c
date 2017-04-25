#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "SortBags.h"

int test1(int arr[], int length)
{
    InsertSort(arr, length);
    return 0;
}


int test2(int arr[], int length)
{
    for(int i = 0; i < length; i ++)
    {
        printf("%4d", arr[i]);
    }
    printf("\n");
    int *temp = (int *)malloc(sizeof(int) * length);
    memset(temp, 0, length);
    MergeSort(arr, 0, length - 1, temp);
    for(int i = 0; i < length; i ++)
    {
        printf("%4d", arr[i]);
    }
    printf("\n");
    return 0;
}

int main(void)
{
    int arr[] = {2,3,43,1,15,45,6,53,45,67,83,36,56,34};
    //test1(arr, sizeof(arr) / sizeof(int));
    //printf("*****************************\n");
    test2(arr, sizeof(arr) / sizeof(int));
    return 0;
}

