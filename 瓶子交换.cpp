#include<bits/stdc++.h>
using namespace std;

int bottles = 0;
int number[105] = {0};
int swaping = 0;

int main() {
	cin >> bottles;
	for (int i = 1; i <= bottles; i++) {
		cin >> number[i];
	}
	for (int i = 1; i <= bottles; i++) {
		if (number[i] != i) {
			swap(number[i], number[number[i]]);
			swaping++;
		}
	}
	cout << swaping;
	return 0;
}
