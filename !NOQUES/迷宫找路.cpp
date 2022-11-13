#include<bits/stdc++.h>

using namespace std;
int maps[1200][1200];
int m;
int startX, startY;
int endX, endY;

void dfs(int x, int y) {
    if (x == endX && y == endY) {
        cout << "YES" <<endl;
        exit(0);
    }
    if (x >= 1 && x <= m && y >= 1 && y <= m && maps[x][y] == 0) {
        maps[x][y] = 1;
        dfs(x - 1, y);
        dfs(x, y - 1);
        dfs(x + 1, y);
        dfs(x, y + 1);
    }
}

int main() {
    cin >> m;
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> maps[i][j];
        }
    }
    cin >> startX >> startY >> endX >> endY;
    if (maps[startX][startY] == 1 || maps[endX][endY] == 1) {
        cout << "NO" << endl;
        return 0;
    }
    dfs(startX, startY);
    cout << "NO" << endl;
    return 0;
}
