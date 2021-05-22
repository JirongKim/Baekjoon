/*
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    int n, k;
    int arr[10];
    scanf("%d %d", &n, &k);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int count = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        int temp = k / arr[i];
        if (temp > 0) {
            k -= arr[i] * temp;
            count += temp;
        }
    }

    printf("%d", count);
    return 0;
}
*/
