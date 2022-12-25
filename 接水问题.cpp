#include <bits/stdc++.h>

using namespace std;
int waterNeeds[12000];
int bumpTime[12000];
int students;
int waterBumps;

int main() {
    cin >> students >> waterBumps;
    for (int i = 1; i <= students; i++) {
        cin >> waterNeeds[i];
    }
    for (int i = 1; i <= students; i++) {
        int minPos;
        int minNum = INT_MAX;
        for (int j = 1; j <= waterBumps; j++) {
            if (minNum >= bumpTime[j]) {
                minPos = j;
                minNum = bumpTime[j];
            }
        }
        bumpTime[minPos] += waterNeeds[i];
    }
    int maxTime = -1;
    for (int i = 1; i <= waterBumps; i++) {
        if (bumpTime[i] >= maxTime) {
            maxTime = bumpTime[i];
        }
    }
    cout << maxTime;
    return 0;
}