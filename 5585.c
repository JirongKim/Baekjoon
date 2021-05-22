/*
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    int a;
    scanf("%d", &a);

    a = 1000 - a;

    int count = 0;
    if ((a / 500) >= 1) { count = count + (a / 500); a = a - ((a / 500) * 500); }
    if ((a / 100) >= 1) { count = count + (a / 100); a = a - ((a / 100) * 100); }
    if ((a / 50) >= 1) { count = count + (a / 50); a = a - ((a / 50) * 50); }
    if ((a / 10) >= 1) { count = count + (a / 10); a = a - ((a / 10) * 10); }
    if ((a / 5) >= 1) { count = count + (a / 5); a = a - ((a / 5) * 5); }
    if ((a / 1) >= 1) { count = count + (a / 1); a = a - ((a / 1) * 1); }

    printf("%d\n", count);
    return 0;
}
*/
