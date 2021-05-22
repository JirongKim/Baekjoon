/*
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define MAX 100000

void mergeSort(int* arr, int left, int right);
void merge(int* arr, int left, int mid, int right);

int temp[MAX];

int main(void)
{
    int w[MAX];
    int rope[MAX];
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf(" %d", &w[i]);
    }

    mergeSort(w, 0, n - 1);

    int max = 0;

    for (int i = 0; i < n; i++)
    {
        rope[i] = w[i] * (n - i);
        if (rope[i] > max) max = rope[i];
    }
    
    printf("%d ", max);
    return 0;
}

void mergeSort(int* arr, int left, int right)
{
    if (left == right) { return; }
    int mid = (left + right) / 2;
    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);
    merge(arr, left, mid, right);
}

void merge(int* arr, int left, int mid, int right)
{
    int i = left;
    int j = mid + 1;
    int k = left;

    while (i <= mid && j <= right)
    {
        if (arr[i] < arr[j])
        {
            temp[k++] = arr[i++];
        }
        else
        {
            temp[k++] = arr[j++];
        }
    }
    while (i <= mid) { temp[k++] = arr[i++]; }
    while (j <= right) { temp[k++] = arr[j++]; }
    for (int a = left; a <= right; a++)
    {
        arr[a] = temp[a];
    }

    return;
}
*/
