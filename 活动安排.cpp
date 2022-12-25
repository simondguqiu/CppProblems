#include <bits/stdc++.h>
using namespace std;

int activities; // number of activities
struct table
{
    int beginning;
    int ending;
} timeTable[120];      // time of activities
int presentEnd;        // present time end
int availableActivity; // number of available activities

void inputMoudle() // input moudle
{
    cin >> activities;
    for (int i = 1; i <= activities; i++)
    {
        cin >> timeTable[i].beginning; // start of activities
        cin >> timeTable[i].ending;    // end of activities
    }
}

bool compare(table a, table b) // compare function for sort()
{
    return a.ending < b.ending;
}

int main()
{
    inputMoudle();
    sort(timeTable + 1, timeTable + activities + 1, compare); // sort by end of time
    presentEnd = timeTable[1].ending;                         // loop from the earliest-end activity
    availableActivity = 1;                                    // at least one activity is available
    for (int i = 2; i <= activities; i++)
    {
        if (timeTable[i].beginning >= presentEnd)
        {
            // activity is available
            presentEnd = timeTable[i].ending; // refresh end of time
            availableActivity++;              // update available activity counter
        }
    }
    cout << availableActivity << endl;
    return 0;
}