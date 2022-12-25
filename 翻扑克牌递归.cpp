#include <bits/stdc++.h>
using namespace std;

bool cards[53] = {true};

void CardsTuring(int n)
{
    if (n > 52)
    {
        return;
    }
    else
    {
        for (int i = n; i <= 52; i = i + n)
        {
            cards[i] = !cards[i];
        }
        CardsTuring(n + 1);
    }
}

int main()
{
    CardsTuring(2);
    int sum = 0;
    for (int i = 1; i <= 52; i++)
    {
        if (cards[i])
        {
            sum++;
        }
    }
    cout << sum << endl;
    return 0;
}
