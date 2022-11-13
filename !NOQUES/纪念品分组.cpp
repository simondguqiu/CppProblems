#include <bits/stdc++.h>
using namespace std;

int maxPerGroup = 0;
int pieces = 0;
int piece[31000];
int groups = 0;

int main()
{
    cin >> maxPerGroup;
    cin >> pieces;
    for (int i = 1; i <= pieces; i++)
    {
        cin >> piece[i];
    }

    sort(piece + 1, piece + pieces + 1);
    for (int i = pieces; i >= 1; i--)
    {
        if (piece[i] != -1)
        {
            int maxPosition = -1;
            for (int j = 1; j < i; j++)
            {
                if (piece[j] != -1)
                {
                    if (maxPerGroup - piece[i] < piece[j])
                    {
                        break;
                    }
                    else
                    {
                        maxPosition = j;
                    }
                }
            }
            if (maxPosition == -1)
            {
                piece[i] = -1;
                groups++;
            }
            else
            {
                piece[i] = -1;
                piece[maxPosition] = -1;
                groups++;
            }
        }
    }
    cout << groups << endl;
    return 0;
}