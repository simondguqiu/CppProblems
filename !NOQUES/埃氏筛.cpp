#include <bits/stdc++.h>

using namespace std;
int n;
bool f[12000];

int main() {
	cin >> n;
	memset(f, true, sizeof(f));
	f[1] = false;
	for (int i = 2; i <= n; i++) {
		if (f[i] == true) {
			for (int j = i * 2; j <= n; j = j + i) {
				f[j] = false;
			}
		}
	}
	for (int i = 2; i <= n; i++) {
		if (f[i] == true) {
			cout << i << " ";
		}
	}
	cout << endl;
	return 0;
}