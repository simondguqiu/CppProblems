#include<bits/stdc++.h>

using namespace std;
int wholeDistance;
int rocks;
int removeLimit;
int betweenDistance[120000];
int jumpDistance;

int main() {
    cin >> wholeDistance >> rocks >> removeLimit;
    for (int i = 1; i <= rocks; i++) {
        cin >> betweenDistance[i];
    }
    int supposeRemove;
    int supposeFrom;
    int l = 0;
    int r = wholeDistance;
    int mid;
    while (l <= r) {
        mid = (l + r) / 2;
        supposeRemove = 0;
        supposeFrom = 0;
        for (int i = 1; i <= rocks; i++) {
            if (betweenDistance[i] - betweenDistance[supposeFrom] < mid) {
                supposeRemove++;
            } else {
                supposeFrom = i;
            }
        }
        if (supposeRemove <= removeLimit) {
            jumpDistance = mid;
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    cout << jumpDistance << endl;
    return 0;
}