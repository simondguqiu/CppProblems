#include <bits/stdc++.h>

using namespace std;
int points, edges;
bool connectMap[120][120];
int queueIn[12000];
bool visitIn[12000];

int main()
{
    cin >> points >> edges;
    int tmpX, tmpY;
    for (int i = 1; i <= edges; i++)
    {
        cin >> tmpX >> tmpY;
        connectMap[tmpX][tmpY] = 1;
        connectMap[tmpY][tmpY] = 1;
    }
    int headPoint = 1;
    int tailPoint = 1;
    queueIn[1] = 1;
    visitIn[1] = true;
    cout << "1 ";
    while (headPoint <= tailPoint)
    {
        for (int i = 1; i <= points; i++)
        {
            if (connectMap[queueIn[headPoint]][i] && !visitIn[i])
            {
                cout << i << " ";
                visitIn[i] = true;
                tailPoint++;
                queueIn[tailPoint] = i;
            }
        }
        headPoint++;
    }
    return 0;
}