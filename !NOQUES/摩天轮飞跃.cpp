#include <bits/stdc++.h>
using namespace std;

bool cmp(int num1, int num2)
{
    return num1 > num2;
}

int main()
{
    int buildings = 0;
    double distance[100] = {0};
    cin >> buildings;
    buildings--;
    for (int i = 1; i <= buildings; i++)
    {
        cin >> distance[i];
    }
    sort(distance + 1, distance + buildings, cmp);
    if (distance[1] / 3 <= distance[2])
    {
        cout << ceil(distance[1] / 2);
    }
    else
    {
        cout << ceil(distance[1] / 3);
    }
    return 0;
}