#include<bits/stdc++.h>
using namespace std;

bool prime(int n) {
	if (n == 0 || n == 1) {
		return false;
	}
	if (n == 2) {
		return true;
	}
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

int main() {
	int num = 0;
	int sum = 0;
	cin >> num;
	for (int i = 4; i <= num; i++) {
		if (!prime(i)) {
			sum = sum + i;
		}
	}
	cout << sum;
	return 0;
}
