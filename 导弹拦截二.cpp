#include <bits/stdc++.h>
using namespace std;
int n, x, k = 1, a[1005];
int main()
{
    cin >> n;
    cin >> x;
    a[k] = x;
    for (int i = 2; i <= n; i++)
    {
        cin >> x;
        int p = -1;
        for (int j = 1; j <= k; j++)
        {
            if (x <= a[j])
            {
                p = j;
                break;
            }
        }
        if (p == -1)
        {
            k++;
            a[k] = x;
        }
        else
        {
            a[p] = x;
        }
    }
    cout << k;
    return 0;
}