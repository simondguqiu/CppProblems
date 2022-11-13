#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num = 0;
    string str;
    cin >> num >> str;
    num = num % 26;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] >= 65 && str[i] <= 90)
        {
            for (int j = 0; j < num; j++)
            {
                str[i]--;
                if (str[i] < 65)
                {
                    str[i] = 90;
                }
            }
        }
        if (str[i] >= 97 && str[i] <= 122)
        {
            for (int j = 0; j < num; j++)
            {
                str[i]--;
                if (str[i] < 97)
                {
                    str[i] = 122;
                }
            }
        }
    }
    cout<<str;
    return 0;
}