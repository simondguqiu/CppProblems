#include <bits/stdc++.h>

using namespace std;
char expression[60];
stack<int> numbersLine;

int main() {
    string tmpIn;
    cin >> tmpIn;
    int letters;
    for (letters = 0;; letters++) {
        if (tmpIn[letters] == '@') {
            break;
        } else {
            expression[letters+1] = tmpIn[letters];
        }
    }
    int tmpNumber;
    int tmpOperation;
    for (int i = 1; i <= letters; i++) {
        if (expression[i] >= '0' && expression[i] <= '9') {
            tmpNumber = tmpNumber * 10 + (expression[i] - '0');
        } else if (expression[i] == '.') {
            numbersLine.push(tmpNumber);
            tmpNumber = 0;
        } else if (expression[i] == '+') {
            tmpOperation = numbersLine.top();
            numbersLine.pop();
            tmpOperation = tmpOperation + numbersLine.top();
            numbersLine.pop();
            numbersLine.push(tmpOperation);
            tmpOperation = 0;
        } else if (expression[i] == '-') {
            tmpOperation = numbersLine.top();
            numbersLine.pop();
            tmpOperation = numbersLine.top() - tmpOperation;
            numbersLine.pop();
            numbersLine.push(tmpOperation);
            tmpOperation = 0;
        } else if (expression[i] == '*') {
            tmpOperation = numbersLine.top();
            numbersLine.pop();
            tmpOperation = tmpOperation * numbersLine.top();
            numbersLine.pop();
            numbersLine.push(tmpOperation);
            tmpOperation = 0;
        } else if (expression[i] == '/') {
            tmpOperation = numbersLine.top();
            numbersLine.pop();
            tmpOperation = numbersLine.top() / tmpOperation;
            numbersLine.pop();
            numbersLine.push(tmpOperation);
            tmpOperation = 0;
        }
    }
    cout << numbersLine.top();
    return 0;
}