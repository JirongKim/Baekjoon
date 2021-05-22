/*
#define _CRT_SECURE_NO_WARNINGS

#define MAX 100000

#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    long long int km[MAX];
    long long int cost[MAX];
    int min;
    min = 2147483647;
    long long int count = 0;
    for (int i = 0; i < n - 1; i++)
    {
        scanf(" %lld", &km[i]);
        count += km[i];
    }
    for (int i = 0; i < n; i++)
    {
        scanf(" %lld", &cost[i]);
        if (cost[i] < min && i != n - 1) { min = cost[i]; }
    }

    long long int result = 0;
    long long int temp = cost[0];
    for (int i = 0; i < n - 1; i++)
    {
        if (cost[i] == min)
        {
            result += cost[i] * count;
            break;
        }
        if (cost[i] < temp)
        {
            temp = cost[i];
        }
        result += temp * km[i];
        count -= km[i];
    }
    printf("%lld", result);

    return 0;
}

*/
