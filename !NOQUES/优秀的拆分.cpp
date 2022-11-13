#include <bits/stdc++.h>

using namespace std;

long long binaryNumber[40];
long long breakNumber;

int main() {
    cin >> breakNumber;
    if (breakNumber % 2 == 1) {
        cout << -1 << endl;
        return 0;
    }
    binaryNumber[1] = 2;
    for (int i = 2; i <= 26; i++) {
        binaryNumber[i] = binaryNumber[i - 1] * 2;
    }
    for (int i = 26; i >= 1; i--) {
        if (breakNumber >= binaryNumber[i]) {
            cout << binaryNumber[i] << " ";
            breakNumber = breakNumber - binaryNumber[i];
        }
    }
    return 0;
}