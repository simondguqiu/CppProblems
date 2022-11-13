#include<bits/stdc++.h>

using namespace std;
int m, n, a[105][105];
int directionX[5] = {0, 0, 1, 0, -1};
int directionY[5] = {0, 1, 0, -1, 0};

void dfs(int x, int y, int num) {
    a[x][y] = num;
    int tempX, tempY;
    for (int i = 1; i <= 4; i++) {
        tempX = x + directionX[i];
        tempY = y + directionY[i];
        if (tempX >= 1 && tempX <= m && tempY >= 1 && tempY <= n && a[tempX][tempY] == 0) {
            dfs(tempX, tempY, num + 1);
        }
    }
}

int main() {
    cin >> n >> m;
    dfs(1, 1, 1);
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            cout << setw(3) << a[i][j];
        }
        cout << endl;
    }
    return 0;
}