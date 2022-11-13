#include<bits/stdc++.h>

using namespace std;
char chess[1200];
int n;
int step;
int emptyPosition;

void print() {
    cout << "step " << step << ":";
    for (int i = 1; i <= 2 * n + 2; i++) {
        cout << chess[i];
    }
    cout << endl;
}

void put() {
    for (int i = 1; i <= n; i++) {
        chess[i] = 'o';
    }
    for (int i = n + 1; i <= 2 * n; i++) {
        chess[i] = '*';
    }
    for (int i = 2 * n + 1; i <= 2 * n + 2; i++) {
        chess[i] = '-';
    }
    emptyPosition = 2 * n + 1;
    print();
}

void move(int from) {
    chess[emptyPosition] = chess[from];
    chess[emptyPosition + 1] = chess[from + 1];
    chess[from] = '-';
    chess[from + 1] = '-';
    emptyPosition = from;
    step++;
    print();
}

void mainOperation(int num) {
    if (num == 4) {
        move(4);
        move(8);
        move(2);
        move(7);
        move(1);
    } else {
        move(num);
        move(2 * num - 1);
        mainOperation(num - 1);
    }
}

int main() {
    cin >> n;
    put();
    mainOperation(n);
    return 0;
}