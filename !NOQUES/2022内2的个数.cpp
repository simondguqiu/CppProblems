#include <bits/stdc++.h>
using namespace std;

int main()
{
    int sum = 0;
    for (int i = 1; i <= 2022; i++)
    {
        int t = i;
        while (t > 0)
        {
            if (t % 10 == 2)
            {
                sum++;
            }
            t = t / 10;
        }
    }
    cout << sum;
    return 0;
}