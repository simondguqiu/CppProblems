#include <bits/stdc++.h>
using namespace std;

int gcd(int num1, int num2)
{
    int bin = 0;
    bin = num1 % num2;
    if (bin == 0)
    {
        return num2;
    }
    else
    {
        num1 = num2;
        num2 = bin;
        gcd(num1, num2);
    }
}

int main()
{
    int num1, num2, bin = 0;
    cin >> num1 >> num2;
    cout << gcd(num1, num2) << endl;
    return 0;
}