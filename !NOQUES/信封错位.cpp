#include<bits/stdc++.h>
using namespace std;

int main() {
	int letters = 0;
	cin >> letters;
	int line[105] = {0};
	line[1] = 0;
	line[2] = 1;
	for (int i = 3; i <= letters; i++) {
		line[i] = (line[i - 1] + line[i - 2]) * (i - 1);
	}
	cout << line[letters] << endl;
	for (int i = 3; i <= letters; i++) {
		if (i % 2 == 0) {
			line[i] = line[i - 1] * i + 1;
		} else {
			line[i] = line[i - 1] * i - 1;
		}
	}
	cout << line[letters];
	return 0;
}
