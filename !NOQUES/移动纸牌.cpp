#include <bits/stdc++.h>
using namespace std;

int cards;
int card[120];

void input()
{
    cin >> cards;
    for (int i = 1; i <= cards; i++)
    {
        cin >> card[i];
    }
}

int move()
{
    int average = 0;
    for (int i = 1; i <= cards; i++)
    {
        average = average + card[i];
    }
    average = average / cards;
    for (int i = 1; i <= cards; i++)
    {
        card[i] = card[i] - average;
    }
    int steps = 0;
    for (int i = 1; i <= cards; i++)
    {
        if (card[i] != 0)
        {
            card[i + 1] = card[i + 1] + card[i];
            card[i] = 0;
            steps++;
        }
    }
    return steps;
}

int main()
{
    input();
    cout << move() << endl;
    return 0;
}