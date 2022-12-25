#include<bits/stdc++.h>

using namespace std;
int numbersSF;
int pairNumbers;
bool numberVisit[1200];
int output[1200];

void dfs(int digit) {
    for (int i = 1; i <= numbersSF; i++) {
        if (!numberVisit[i] && i > output[digit - 1]) {
            numberVisit[i] = true;
            output[digit] = i;
            if (digit == pairNumbers) {
                for (int j = 1; j <= pairNumbers; j++) {
                    cout << setw(3) << output[j];
                }
                cout << endl;
            } else {
                dfs(digit + 1);
            }
            numberVisit[i] = false;
        }
    }
}

int main() {
    cin >> numbersSF >> pairNumbers;
    dfs(1);
    return 0;
}