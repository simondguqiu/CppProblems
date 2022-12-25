#include<bits/stdc++.h>

using namespace std;
string givenLetters;
int letterLength;
bool letterVisit[280];
char output[10];

void dfs(int digit) {
    for (int i = 0; i < letterLength; i++) {
        if (!letterVisit[givenLetters[i]]) {
            letterVisit[givenLetters[i]] = true;
            output[digit] = givenLetters[i];
            if (digit == letterLength - 1) {
                cout << output << endl;
            } else {
                dfs(digit + 1);
            }
            letterVisit[givenLetters[i]] = false;
        }
    }
}

int main() {
    cin >> givenLetters;
    letterLength = givenLetters.length();
    dfs(0);
    return 0;
}
