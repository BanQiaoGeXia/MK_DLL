#ifndef __SORT_BAGS_H__
#define __SORT_BAGS_H__

//交换逻辑
int IntSwap(int *num1, int *num2);

//打印数组
int PrintArray(int *arr, int length);

//插入排序 升序
int InsertSort(int *arr, int length);

//合并逻辑
int Merge(int arr[], int first, int mid, int last, int temp[]);

//归并排序 升序
int MergeSort(int arr[], int first, int last, int temp[]);



#endif
