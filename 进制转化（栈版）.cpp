#include <bits/stdc++.h>

using namespace std;
const char HEX_LETTERS[17] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
int numberInto;
int tenNumber;
stack<char> hellNumber;

int main() {
    cin >> tenNumber;
    cin >> numberInto;
    while (tenNumber > 0) {
        hellNumber.push(HEX_LETTERS[tenNumber % numberInto]);
        tenNumber = tenNumber / numberInto;
    }
    while (hellNumber.size() > 0) {
        cout << hellNumber.top();
        hellNumber.pop();
    }
    cout << endl;
    return 0;
}