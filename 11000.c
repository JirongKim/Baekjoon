#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d" , &n);
    
    int lecTime[200000];
    for (int i =0; i<200000; i++) {
        lecTime[i] =0;
    }
    
    int max =0 ;
    for (int i = 0; i < n; i++) {
        int s,t;
        scanf("%d %d", &s, &t);
        if(lecTime[s] ==0 || lecTime[s] < t)
            lecTime[s] = t;
        if(lecTime[s]>max) max=lecTime[s];
    }
    
    int now=1;
    int cnt = 0;
    while (1) {
        int nowT = lecTime[now];
        if(nowT==max){cnt++; break;}
        cnt++;
        
        int flag = 0;
        for (int i = nowT; nowT>now; i--) {
            if(lecTime[i]>lecTime[now])
            {
                now = i;
                flag=1;
                break;
            }
        }
        if(flag) continue;
        
        
        for (int i = nowT; ; i++) {
            if(lecTime[i]>lecTime[now])
            {
                now = i;
                break;
            }
        }
    }
    
    printf("%d",cnt);
}

