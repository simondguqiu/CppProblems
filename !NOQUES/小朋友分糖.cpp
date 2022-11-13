#include<bits/stdc++.h>
using namespace std;

int main() {
	int children = 0;
	int candies[120] = {0};
	int candyave = 0;
	int count = 0;
	cin >> children;
	for (int i = 0; i < children; i++) {
		cin >> candies[i];
		candyave = candyave + candies[i];
	}
	candyave = candyave / children;
	for (int i = 0; i < children; i++) {
		candies[i] = candies[i] - candyave;
	}
	for (int i = 0; i < children; i++) {
		if (candies[i] == 0) {
			continue;
		}
		else {
			candies[i + 1] = candies[i + 1] + candies[i];
			candies[i] = 0;
			count++;
		}
	}
	cout<<count;
	return 0;
}
