#include<bits/stdc++.h>

using namespace std;
int dirX[5] = {0, 0, -1, 0, 1};
int dirY[5] = {0, 1, 0, -1, 0};
bool visitMap[10][10];
int position[20000000][3];
int side;
int cnt = 1;

void dfs(int x, int y, int num) {
    position[num][1] = x;
    position[num][2] = y;
    if (x == side && y == side) {
        cout << cnt << ":";
        for (int i = 1; i < num; i++) {
            cout << position[i][1] << "," << position[i][2] << "->";
        }
        cout << position[num][1] << "," << position[num][2] << endl;
        cnt++;
    } else {
        int tmpX, tmpY;
        for (int i = 1; i <= 4; i++) {
            tmpX = x + dirX[i];
            tmpY = y + dirY[i];
            if (tmpX >= 1 && tmpX <= side && tmpY >= 1 && tmpY <= side && !visitMap[tmpX][tmpY]) {
                visitMap[tmpX][tmpY] = true;
                dfs(tmpX, tmpY, num + 1);
                visitMap[tmpX][tmpY] = false;
            }
        }
    }
}

int main() {
    cin >> side;
    visitMap[1][1] = true;
    dfs(1, 1, 1);
    return 0;
}