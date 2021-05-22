/*
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define MAX_LENGTH 1001

void reverse(char* arr, int len)
{
    for (int i = 0; i < (len / 2) + 1; i++)
    {
        char temp = arr[len - i];
        arr[len - i] = arr[i];
        arr[i] = temp;
    }
}

int equal(char* arr1, char* arr2)
{
    for (int i = 0; arr1[i] != '\0'; i++)
    {
        if (arr1[i] != arr2[i]) { return 0; }
    }
    return 1;
}

int main(void)
{
//while(1){
    char S[MAX_LENGTH];
    char T[MAX_LENGTH];
    scanf("%s", S);
    scanf("%s", T);

    int s_len = 0;
    int t_len = 0;
    for (int i = 0; S[i] != '\0'; i++) { s_len++; }
    for (int i = 0; T[i] != '\0'; i++) { t_len++; }

    while (s_len < t_len)
    {
        if (T[--t_len] == 'A')
        {
            T[t_len] = '\0';
        }
        else
        {
            T[t_len] = '\0';
            reverse(T, t_len - 1);
        }
        //printf("%s\n", T);
    }

    printf("%d\n", equal(S, T));
//}

    return 0;
}

*/
