/*
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    int T;
    scanf("%d", &T);

    int five = 0;
    int one = 0;
    int ten = 0;

    if (T % 10 != 0) { printf("-1\n"); }
    else
    {
        if (T / 300 >= 1)
        {
            five += (T / 300);
            T -= (T / 300) * 300;
        }
        if (T / 60 >= 1)
        {
            one += (T / 60);
            T -= (T / 60) * 60;
        }
        if (T / 10 >= 1)
        {
            ten += (T / 10);
            T -= (T / 10) * 10;
        }
        printf("%d %d %d\n", five, one, ten);
    }
    return 0;
}

*/
