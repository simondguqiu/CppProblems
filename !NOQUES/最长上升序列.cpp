#include <bits/stdc++.h>

using namespace std;
int number;
int numbers[1200];
int lis[1200];
int nextPos[1200];
int maxNumber, maxPos;

int main() {
    cin >> number;
    for (int i = 1; i <= number; i++) {
        cin >> numbers[i];
    }
    lis[number] = 1;
    nextPos[number] = -1;
    for (int i = number - 1; i >= 1; i--) {
        lis[i] = -1;
        bool flag = false;
        for (int j = i + 1; j <= number; j++) {
            if (numbers[j] > numbers[i]) {
                flag = true;
                if (lis[j] > lis[i]) {
                    lis[i] = lis[j] + 1;
                    nextPos[i] = j;
                }
            }
        }
        if (!flag) {
            lis[i] = 1;
            nextPos[i] = -1;
        }
        if (lis[i] >= maxNumber) {
            maxNumber = lis[i];
            maxPos = i;
        }
    }
    int findPos = maxPos;
    while (findPos != -1) {
        cout << numbers[findPos] << " ";
        findPos = nextPos[findPos];
    }
    return 0;
}