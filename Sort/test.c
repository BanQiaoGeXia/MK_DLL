#include <stdio.h>
#include "SortBags.h"

int main(void)
{
    int arr[] = {2,3,43,1,15,45,6,53,45,67,83,36,56,34};
    InsertSort(arr, sizeof(arr) / sizeof(int));
    return 0;
}

