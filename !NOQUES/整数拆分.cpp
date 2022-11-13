#include<bits/stdc++.h>
using namespace std;

int main() {
	int num = 0;
	cin >> num;
	for (int i = 1; i < num && i != 3 && i != 7; i++) {
		for (int j = 1; j < num - i && i != j && i != 3 && i != 7; j++) {
			int k = num - i - j;
			if (k != 0 && k != i && k != j && i != 3 && i != 7) {
				cout << i << " " << j << " " << k << endl;
				return 0;
			}
		}
	}
	cout << "0" << endl;
	return 0;
}
