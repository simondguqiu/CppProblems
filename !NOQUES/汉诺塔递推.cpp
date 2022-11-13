#include<iostream>

using namespace std;

int hanoi[64]; //步数
int plates; //盘子的数量

int main() {
    cin >> plates;
    hanoi[1] = 1;
    for (int i = 2; i <= plates; i++) {
        hanoi[i] = hanoi[i - 1] * 2 + 1;
    }
    cout << hanoi[plates];
    return 0;
}