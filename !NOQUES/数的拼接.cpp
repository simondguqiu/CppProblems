#include <bits/stdc++.h>
using namespace std;

bool cmp(string num1, string num2)
{
    return num1 + num2 > num2 + num1;
}

int main()
{
    int numberOfParts = 0;
    string parts[1000];
    cin >> numberOfParts;
    for (int i = 1; i <= numberOfParts; i++)
    {
        cin >> parts[i];
    }
    sort(parts + 1, parts + numberOfParts + 1, cmp);
    for (int i = 1; i <= numberOfParts; i++)
    {
        cout << parts[i];
    }
    return 0;
}