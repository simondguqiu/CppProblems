#include <bits/stdc++.h>

using namespace std;
bool connectMap[120][120];
bool pointVisit[120000];
int points, edges;
int visits;

void dfs(int pointNumber)
{
    visits++;
    if (visits == points)
    {
        cout << pointNumber << " ";
        exit(0);
    }
    else
    {
        cout << pointNumber << " ";
    }
    pointVisit[pointNumber] = true;
    for (int i = 1; i <= points; i++)
    {
        if (connectMap[pointNumber][i] && !pointVisit[i])
        {
            dfs(i);
        }
    }
}

int main()
{
    cin >> points >> edges;
    int tmpPoint1, tmpPoint2;
    for (int i = 1; i <= edges; i++)
    {
        cin >> tmpPoint1 >> tmpPoint2;
        connectMap[tmpPoint1][tmpPoint2] = true;
        connectMap[tmpPoint2][tmpPoint1] = true;
    }
    dfs(1);
    return 0;
}