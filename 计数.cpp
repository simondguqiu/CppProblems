#include <bits/stdc++.h>

using namespace std;

int main() {
    string words;
    int ones = 0;
    cin >> words;
    for (int i = 0; i < 8; i++) {
        if (words[i] == '1') {
            ones++;
        }
    }
    cout << ones << endl;
    return 0;
}