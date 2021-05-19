#include <stdio.h>

struct LECTURE
{
    int s;
    int t;
} lecTime[200000];

struct LECTURE temp[200000];

void merge(int left, int mid, int right)
{
    int i = left;
        int j = mid + 1;
        int k = left;

        while (i <= mid && j <= right) // i나, j가 index를 넘어갈 경우 while문에서 빠져나옴.
        {
            if (lecTime[i].s < lecTime[j].s) { temp[k++] = lecTime[i++]; } // i와 j를 비교해서, temp 배열에 작은순서대로 집어넣음.
            else { temp[k++] = lecTime[j++]; }
        }
        while (i <= mid) { temp[k++] = lecTime[i++]; }
        while (j <= right) { temp[k++] = lecTime[j++]; }
        for (int a = left; a <= right; a++) { lecTime[a] = temp[a]; }
        return;
}

void mergeSort(int left, int right)
{
    if(left < right)
    {
        int mid = (left + right) / 2;
        mergeSort(left, mid);
        mergeSort(mid + 1, right);
        merge(left, mid, right);
    }
}

int main(void)
{
    int n, cnt = 1;
    scanf("%d", &n);

    
    for (int i = 0; i < 200000; i++) {
        lecTime[i].s = 0;
        lecTime[i].t = 0;
    }
    
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &lecTime[i].s, &lecTime[i].t);
    }
    
    mergeSort(0, n - 1);
    
    int maxT = lecTime[0].t;
    for (int i = 1; i < n; i++) {
        if(lecTime[i].s >= maxT) {
            cnt++;
            maxT = lecTime[i].t;
            continue;
        }
    }
    
    if(lecTime[n - 1].s < maxT && lecTime[n - 1].t > maxT)
    {
        cnt++;
    }
    
    printf("%d",cnt);
}

