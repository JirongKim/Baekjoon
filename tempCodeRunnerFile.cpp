#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    int n;
    int a[1001];
    int count = 0;
    int cnt = 0;
    int max = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        max = a[i];
        count = 0;
        for (int j = i; j >= 0; j--)
        {
            if(max < a[j])
            {
                max = a[j];
                count++;
            }
        }
        if(count > cnt)
        {
            cnt = count;
        }
    }

    cout << cnt;

    return 0;
}