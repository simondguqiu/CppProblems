#include <bits/stdc++.h>

using namespace std;
long long sideX, sideY;
long long numberMap[1200][1200];
long long maxMap[1200][1200][2];

void debug() {
    cout << endl << "----------DEBUG INFO----------" << endl;
    for (int i = 1; i <= sideX; i++) {
        for (int j = 1; j <= sideY; j++) {
            cout << maxMap[i][j][0] << " ";
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 1; i <= sideX; i++) {
        for (int j = 1; j <= sideY; j++) {
            cout << maxMap[i][j][1] << " ";
        }
        cout << endl;
    }
    cout << "------------------------------" << endl;
}

int main() {
    cin >> sideX >> sideY;
    for (long long i = 1; i <= sideX; i++) {
        for (long long j = 1; j <= sideY; j++) {
            cin >> numberMap[i][j];
        }
    }
    memset(maxMap, 128, sizeof(maxMap));
    maxMap[1][1][0] = numberMap[1][1];
    for (long long i = 1; i <= sideY; i++) {
        for (long long j = 1; j <= sideX; j++) {
            if (i != 1 || j != 1) {
                maxMap[j][i][0] =
                        max(maxMap[j][i - 1][0], max(maxMap[j][i - 1][1], maxMap[j - 1][i][0])) + numberMap[j][i];
            }
        }
        for (long long j = sideX; j >= 1; j--) {
            maxMap[j][i][1] = max(maxMap[j][i - 1][0], max(maxMap[j][i - 1][1], maxMap[j + 1][i][1])) + numberMap[j][i];
        }
    }
    cout << maxMap[sideX][sideY][0];
    return 0;
}