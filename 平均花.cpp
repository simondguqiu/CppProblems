#include<bits/stdc++.h>

using namespace std;
int flowers;
int flower[1200];
int front[1200];
int specials;

int main() {
    cin >> flowers;
    for (int i = 1; i <= flowers; i++) {
        cin >> flower[i];
        front[i] = front[i - 1] + flower[i];
    }
    for (int i = 1; i <= flowers; i++) {
        for (int j = i; j <= flowers; j++) {
            int pieces = front[j] - front[i - 1];
            double average = pieces * 1.0 / (j - i + 1);
            bool equal = false;
            for (int k = i; k <= j; k++) {
                if (flower[k] == average) {
                    equal = true;
                }
            }
            if (equal) {
                specials++;
            }
        }
    }
    cout << specials << endl;
    return 0;
}