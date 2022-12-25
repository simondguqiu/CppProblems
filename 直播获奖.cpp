#include<bits/stdc++.h>
using namespace std;

int NumberOfPlayers = 0;
int bucket[605] = {0};
int WinningProbablity = 0;


int main() {
	int tmp = 0;
	cin >> NumberOfPlayers >> WinningProbablity;
	for (int i = 1; i <= NumberOfPlayers; i++) {
		cin >> tmp;
		bucket[tmp]++;
		int sum = 0;
		for (int j = 600; j >= 0; j--) {
			sum = sum + bucket[j];
			if (sum >= max(1, i * WinningProbablity / 100)) {
				cout << j << " ";
				break;
			}
		}
		
	}
	return 0;
}
