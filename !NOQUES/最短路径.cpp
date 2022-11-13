#include<bits/stdc++.h>

using namespace std;
int m, n;
char maps[50][50];
int minMaps[50][50];

void dfs(int x, int y, int step) {
    if (x >= 1 && x <= m && y >= 1 && y <= n && maps[x][y] == '.' && step < minMaps[x][y]) {
        minMaps[x][y] = step;
        dfs(x, y + 1, step + 1);
        dfs(x + 1, y, step + 1);
        dfs(x, y - 1, step + 1);
        dfs(x - 1, y, step + 1);
    }
}

int main() {
    cin >> m >> n;
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> maps[i][j];
        }
    }
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            minMaps[i][j] = INT_MAX;
        }
    }
    dfs(1, 1, 1);
    cout << minMaps[m][n];
    return 0;
}