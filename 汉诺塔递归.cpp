#include <bits/stdc++.h>
using namespace std;

void hanoi(int plates, char source, char tool, char target)
{
    if (plates > 0)
    {
        hanoi(plates - 1, source, target, tool);
        cout << source << "->" << target << endl;
        hanoi(plates - 1, tool, target, source);
    }
    else
    {
        return;
    }
}

int main()
{
    int plates = 0;
    cin >> plates;
    hanoi(plates, 'A', 'B', 'C');
    return 0;
}