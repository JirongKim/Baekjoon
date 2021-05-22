/*
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);

    int count = 0;
    while (b > a)
    {
        if (b % 2 == 0) { b = b / 2; }
        else if (b % 10 == 1) { b = b / 10; }
        else { break; }
        count++;
    }

    if (b == a)
        printf("%d", count + 1);
    else
        printf("-1");
    return 0;
}
*/
