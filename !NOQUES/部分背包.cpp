#include <bits/stdc++.h>
using namespace std;

int numberOfPiles;
double maxWeight;
double presentWeight;
double totalValue;
struct piles
{
    double weight;
    double value;
    double valuePerWeight;
    void calculateValue()
    {
        valuePerWeight = value / weight;
    }
} pile[120];

bool compare(piles a, piles b)
{
    return a.valuePerWeight > b.valuePerWeight;
}

void inputMoudle()
{
    cin >> numberOfPiles >> maxWeight;
    for (int i = 1; i <= numberOfPiles; i++)
    {
        cin >> pile[i].weight >> pile[i].value;
        pile[i].calculateValue();
    }
}

void pickMoudle()
{
    sort(pile + 1, pile + 1 + numberOfPiles, compare);
    for (int i = 1; i <= numberOfPiles; i++)
    {
        if (presentWeight + pile[i].weight > maxWeight)
        {
            totalValue += pile[i].value * ((maxWeight - presentWeight) / pile[i].weight);
            break;
        }
        else
        {
            totalValue += pile[i].value;
            presentWeight += pile[i].weight;
        }
    }
    printf("%0.2lf\n", totalValue);
}

int main()
{
    inputMoudle();
    pickMoudle();
    return 0;
}