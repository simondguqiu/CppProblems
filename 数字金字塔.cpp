#include<bits/stdc++.h>
using namespace std;

int numbers[100][100];

int main() {
	int floors = 0;
	cin >> floors;
	for (int i = 1; i <= floors; i++) {
		for (int j = 1; j <= i; j++) {
			cin >> numbers[i][j];
		}
	}
	for (int i = floors - 1; i >= 1; i--) {
		for (int j = 1; j <= i; j++) {
			numbers[i][j] = numbers[i][j] + max(numbers[i + 1][j], numbers[i + 1][j + 1]);
		}
	}
	cout << numbers[1][1];
	return 0;
}
