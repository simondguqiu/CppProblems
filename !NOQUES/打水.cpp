#include <bits/stdc++.h>
using namespace std;

int persons;
int personList[1000];
int bumps;
int bumpList[1000];

int main()
{
    cin >> persons >> bumps;
    for (int i = 1; i <= persons; i++)
    {
        cin >> personList[i];
    }
    sort(personList + 1, personList + persons + 1);
    int tmp = 1;
    for (int i = 1; i <= persons; i++)
    {
        bumpList[tmp] = bumpList[tmp] * 2 + personList[i];
        tmp++;
        if (tmp > bumps)
        {
            tmp = 1;
        }
    }
    int sum = 0;
    for (int i = 1; i <= bumps; i++)
    {
        sum += bumpList[i];
    }
    cout << sum << endl;
    return 0;
}