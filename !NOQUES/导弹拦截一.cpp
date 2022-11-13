#include <bits/stdc++.h>
using namespace std;

int missiles;
int missile[100];

void inputMoudle()
{
    cin >> missiles;
    for (int i = 1; i <= missiles; i++)
    {
        cin >> missile[i];
    }
}

void defenseMoudle(int start)
{
    int max = missile[start];
    for (int i = start; i <= missiles; i++)
    {
        if (missile[i] <= max && missile[i] != -1)
        {
            max = missile[i];
            missile[i] = -1;
        }
    }
}

int findMoudle()
{
    for (int i = 1; i <= missiles; i++)
    {
        if (missile[i] != -1)
        {
            return i;
        }
    }
    return -1;
}

bool isFinished()
{
    for (int i = 1; i <= missiles; i++)
    {
        if (missile[i] != -1)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    inputMoudle();
    int suits = 0;
    do
    {
        defenseMoudle(findMoudle());
        suits++;
    } while (!isFinished());
    cout << suits << endl;
    return 0;
}

// example:
// 10
// 300 150 120 540 360 471 140 364 146 340