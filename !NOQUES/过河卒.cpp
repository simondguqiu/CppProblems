#include<bits/stdc++.h>

using namespace std;

long long WholeMap[25][25]; //棋盘
int HorseControlled[9][2]; //马控制的点，即不能走的点
int MapX; //总行数
int MapY; //总列数
int HorseX; //马所在的行
int HorseY; //马所在的列

bool controlled(int x, int y) {
    for (int i = 0; i < 9; i++) {
        if (x == HorseControlled[i][0] && y == HorseControlled[i][1]) {
            return true;
        }
    }
    return false;
} //判断特定点是否被马控制

void ControlledPoint() {
    HorseControlled[0][0] = HorseX - 2;
    HorseControlled[0][1] = HorseY - 1;
    HorseControlled[1][0] = HorseX - 2;
    HorseControlled[1][1] = HorseY + 1;
    HorseControlled[2][0] = HorseX - 1;
    HorseControlled[2][1] = HorseY + 2;
    HorseControlled[3][0] = HorseX + 1;
    HorseControlled[3][1] = HorseY + 2;
    HorseControlled[4][0] = HorseX + 2;
    HorseControlled[4][1] = HorseY + 1;
    HorseControlled[5][0] = HorseX + 2;
    HorseControlled[5][1] = HorseY - 1;
    HorseControlled[6][0] = HorseX + 1;
    HorseControlled[6][1] = HorseY - 2;
    HorseControlled[7][0] = HorseX - 1;
    HorseControlled[7][1] = HorseY - 2;
    HorseControlled[8][0] = HorseX;
    HorseControlled[8][1] = HorseY;
} //计算马控制的点

int main() {
    cin >> MapX >> MapY >> HorseX >> HorseY;
    ControlledPoint();

    for (int i = 0; i <= MapX; i++) {
        for (int j = 0; j <= MapY; j++) {
            if (controlled(i, j)) {
                WholeMap[i][j] = 0;
            } else if (i == 0 && j >= 1) {
                WholeMap[i][j] = WholeMap[i][j-1];
            } else if (j == 0 && i >= 1) {
                WholeMap[i][j] = WholeMap[i-1][j];
            } else if (i == 0 && j == 0) {
                WholeMap[0][0] = 1;
            } else if (!controlled(i, j)) {
                WholeMap[i][j] = WholeMap[i - 1][j] + WholeMap[i][j - 1];
            }
        }
    }
    cout<<WholeMap[MapX][MapY];
    return 0;
}