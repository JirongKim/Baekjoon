/*
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int charToInt(int* temp);

int main(void)
{
    char arr[51];
    scanf("%s", arr);

    int flag = 0;
    int num, sum = 0;
    int temp[5];
    temp[0] = temp[1] = temp[2] = temp[3] = temp[4] = -1;
    int j = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        if (arr[i] != '-' && arr[i] != '+') { temp[j++] = arr[i] - 48; continue; }

        num = charToInt(temp);
        j = 0;
        if (flag == 1) { sum -= num; }
        else { sum += num; }

        if (arr[i] == '-') {
            flag = 1; // 이렇게 해야지 기호 다음부터 연산시작
        }
    }
    num = charToInt(temp); // 마지막 숫자도 연산해주어야함.
    if (flag == 1) { sum -= num; }
    else { sum += num; }

    printf("%d", sum);

    return 0;
}

int charToInt(int* temp)
{
    int a = 0;
    a = (temp[0] == -1) ? a : temp[0];
    a = (temp[1] == -1) ? a : a * 10 + temp[1];
    a = (temp[2] == -1) ? a : a * 10 + temp[2];
    a = (temp[3] == -1) ? a : a * 10 + temp[3];
    a = (temp[4] == -1) ? a : a * 10 + temp[4];

    temp[0] = temp[1] = temp[2] = temp[3] = temp[4] = -1;
    return a;
}
*/
