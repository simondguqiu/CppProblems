#include <bits/stdc++.h>
using namespace std;

int piles;
int fruitPile[10000005];

bool compare(int a, int b)
{
    return a < b;
}

void inputMoudle()
{
    cin >> piles;
    for (int i = 1; i <= piles; i++)
    {
        cin >> fruitPile[i];
    }
}

void moveMoudle()
{
    int fromPosition = 0;
    int toPosition = 0;
    int initalNumber = 0;
    for (int i = 1; i <= piles; i++)
    {
        if (fruitPile[i] != -1)
        {
            fromPosition = i;
            break;
        }
    }
    initalNumber = fruitPile[fromPosition];
    for (int i = 1; i <= piles; i++)
    {
        if (fruitPile[i] > fruitPile[fromPosition])
        {
            toPosition = i - 1;
            break;
        }
        else if (i == piles)
        {
            toPosition = piles;
            break;
        }
    }
    for (int i = fromPosition; i < toPosition; i++)
    {
        fruitPile[i] = fruitPile[i + 1];
    }
    fruitPile[toPosition] = initalNumber;
}

int mergeMoudle()
{
    int energe = 0;
    sort(fruitPile + 1, fruitPile + piles + 1, compare);
    for (int i = 2; i <= piles; i++)
    {
        energe = energe + fruitPile[i - 1] + fruitPile[i];
        fruitPile[i] = fruitPile[i - 1] + fruitPile[i];
        fruitPile[i - 1] = -1;
        moveMoudle();
    }
    return energe;
}

int main()
{
    inputMoudle();
    cout << mergeMoudle() << endl;
    return 0;
}

/*#include <bits/stdc++.h>
using namespace std;

int piles;
int fruitPile[12000];
int sum;

int main()
{
    cin >> piles;
    for (int i = 1; i <= piles; i++)
    {
        cin >> fruitPile[i];
    }
    for (int i = 1; i < piles; i++)
    {
        fruitPile[i + 1] = fruitPile[i] + fruitPile[i + 1];
        sum = sum + fruitPile[i + 1];
        sort(fruitPile + i + 1, fruitPile + piles + 1);
    }
    cout << sum << endl;
    return 0;
}*/