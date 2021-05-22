/*
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int* mergeSort(int arr[], int left, int right);
int* merge(int arr[], int left, int mid, int right);

int main(void)
{
    int n;
    scanf("%d", &n);

    int arr[1000];
    for (int i = 0; i < n; i++)
    {
        scanf(" %d", &arr[i]);
    }
    mergeSort(arr, 0, n - 1);

    int sum1, sum2;
    sum1 = sum2 = 0;
    for (int i = 0; i < n; i++)
    {
        sum1 += arr[i];
        sum2 += sum1;
    }

    printf("%d", sum2);
    return 0;
}

int* mergeSort(int arr[], int left, int right)
{
    if (left == right) return arr;
    int mid = (left + right) / 2;
    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);
    merge(arr, left, mid, right);
    return arr;
}

int* merge(int arr[], int left, int mid, int right)
{
    int i = left;
    int j = mid + 1;
    int k = left;
    int temp[1000];

    while (i <= mid && j <= right)
    {
        if (arr[i] > arr[j])
        {
            temp[k++] = arr[j++];
        }
        else
        {
            temp[k++] = arr[i++];
        }
    }
    while (i <= mid) { temp[k++] = arr[i++]; }
    while (j <= right) { temp[k++] = arr[j++]; }
    for (i = left; i <= right; i++)
    {
        arr[i] = temp[i];
    }
    return arr;
}
*/
