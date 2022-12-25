#include<bits/stdc++.h>

using namespace std;
int m, n;
int maps[1200][1200];

void dfs(int x, int y, int num) {
	if (x >= 1 && x <= m && y >= 1 && y <= n && maps[x][y] == 0) {
		maps[x][y] = num;
		dfs(x, y + 1, num + 1);
		dfs(x + 1, y, num + 1);
		dfs(x, y - 1, num + 1);
		dfs(x - 1, y, num + 1);
	}
	if (num == m * n) {
		for (int i = 1; i <= m; i++) {
            for (int j = 1; j <= n; j++) {
                cout << setw(3) << maps[i][j];
            }
            cout << endl;
        }
        exit(0);
    }
}

int main() {
	cin >> m >> n;
	dfs(1, 1, 1);
	return 0;
}
