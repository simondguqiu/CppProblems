#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num1, num2 = 0;
    cin >> num1 >> num2;
    for (int i = min(num1, num2); i >= 2; i--)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            cout << i << endl;
            return 0;
        }
    }
    cout << "1" << endl;
    return 0;
}