/*
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define MAX_ARR 100001

typedef struct GRADE
{
    int left;
    int right;
}GRADE;

void merge(GRADE* arr, int left, int mid, int right);
void mergeSort(GRADE* arr, int left, int right);

GRADE temp[MAX_ARR];

int main(void)
{
    GRADE arr[MAX_ARR];
    int TC;
    scanf("%d", &TC);
    for (int test_case = 0; test_case < TC; test_case++)
    {
        int n;
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
        {
            scanf("%d %d", &arr[i].left, &arr[i].right);
        }

        mergeSort(arr, 0, n - 1);

        int count = 1;
        int leastRank = arr[0].right;
        for (int i = 1; i < n; i++)
        {
            if (arr[i].right == 1) { count++; break; }
            if (arr[i].right < leastRank) { leastRank = arr[i].right; count++; }
        }
        printf("%d\n", count);
    }
    return 0;
}

void mergeSort(GRADE* arr, int left, int right)
{
    if (left == right) { return; }
    int mid = (left + right) / 2;
    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);
    merge(arr, left, mid, right);
    return;
}
void merge(GRADE* arr, int left, int mid, int right)
{
    int i = left;
    int j = mid + 1;
    int k = left;

    while (i <= mid && j <= right)
    {
        if (arr[i].left < arr[j].left)
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
}
*/
