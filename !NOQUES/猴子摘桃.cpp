#include<bits/stdc++.h>
using namespace std;
int n, m, a[105][105], sum[105][105];
int main() {
	cin >> m >> n;
	for (int i = 1; i <= m; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> a[i][j];
		}
	}

	for (int i = 1; i <= m; i++) {
		for (int j = 1; j <= n; j++) {
			sum[i][j] = max(sum[i - 1][j], sum[i][j - 1]) + a[i][j];
		}
	}
	cout << sum[m][n];
	return 0;
}
