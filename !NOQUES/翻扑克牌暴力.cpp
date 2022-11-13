#include <bits/stdc++.h>
using namespace std;

bool cards[53];

int main()
{
    memset(cards, 1, sizeof(cards));
    for (int i = 2; i <= 52; i++)
    {
        for (int j = i; j <= 52; j = j + i)
        {
            cards[j] = !cards[j];
        }
    }
    for (int i = 1; i <= 52; i++)
    {
        if (cards[i])
        {
            cout << i << " ";
        }
    }
    return 0;
}
