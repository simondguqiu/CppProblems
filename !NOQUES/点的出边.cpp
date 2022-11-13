#include <bits/stdc++.h>

using namespace std;
struct edgeInfo
{
    int fromPoint;
    int toPoint;
    int previousPoint;
};

edgeInfo edges[1200];
int previousEdge[1200];
int edgesCnt;
int pointNumber, edgeNumber;

void createEdge(int from, int to)
{
    edgesCnt++;
    edges[edgesCnt].fromPoint = from;
    edges[edgesCnt].toPoint = to;
    edges[edgesCnt].previousPoint = previousEdge[from];
    previousEdge[from] = edgesCnt;
}

int main()
{
    cin >> pointNumber >> edgeNumber;
    int tmpFrom, tmpTo;
    for (int i = 1; i <= edgeNumber; i++)
    {
        cin >> tmpFrom >> tmpTo;
        createEdge(tmpFrom, tmpTo);
    }
    for (int i = 1; i <= pointNumber; i++)
    {
        if (previousEdge[i] == 0)
        {
            continue;
        }
        cout << i << endl;
        for (int j = previousEdge[i]; j != 0; j = edges[j].previousPoint)
        {
            cout << i << "->" << edges[j].toPoint << endl;
        }
    }
    return 0;
}