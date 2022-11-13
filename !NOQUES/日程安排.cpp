//因为一个多小时写出来的程序每次都有各种各样的小问题
//“不得不”借鉴了https://blog.csdn.net/weixin_44686373/article/details/107606213的写法
//已经自行模拟并理解了8*8的情况
//（差点儿没把我算死）

#include<bits/stdc++.h>

using namespace std;
int m;
int players;
int table[9][9];

int main() {
    cin >> m;
    players = pow(2, m);
    table[1][1] = 1;
    for (int i = 1; i <= players; i = i * 2) {
        for (int j = 1; j <= i; j++) {
            for (int k = 1; k <= i; k++) {
                table[j][k + i] = table[j][k] + i;
                table[j + i][k] = table[j][k + i];
                table[j + i][k + i] = table[j][k];
            }
        }
    }
    for (int i = 1; i <= players; i++) {
        for (int j = 1; j <= players; j++) {
            cout << table[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}