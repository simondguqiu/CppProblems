#include <bits/stdc++.h>

using namespace std;
int n;
bool f[12000];
int prime[12000];
int k = 1;

int main() {
	cin >> n;
	memset(f, true, sizeof(f));
	f[1] = false;
	for (int i = 2; i <= n; i++) {
		if (f[i] == true) {
			prime[k++] = i;
		}
		for (int j = 1; i * prime[j] <= n; j++) {
			f[i * prime[j]] = false;
			if (i % prime[j] == 0) {
				break;
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