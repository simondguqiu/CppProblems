#include <bits/stdc++.h>

using namespace std;
const char HEX_LETTERS[17] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
int numberInto;
int tenNumber;
int top;
char hellNumber[12];

int main() {
    cin >> tenNumber;
    cin >> numberInto;
    while (tenNumber > 0) {
        hellNumber[++top] = HEX_LETTERS[tenNumber % numberInto];
        tenNumber = tenNumber / numberInto;
    }
    while (top > 0) {
        cout << hellNumber[top];
        top--;
    }
    cout << endl;
    return 0;
}