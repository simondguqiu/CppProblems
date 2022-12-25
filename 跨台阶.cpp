#include<bits/stdc++.h>
using namespace std;
int main() {
	int floor = 0;
	long long way[105] = {0};
	cin >> floor;
	way[1] = 1;
	way[2] = 2;
	way[3] = 4;
	for (int i = 4; i <= floor; i++) {
		way[i] = way[i - 1] + way[i - 2] + way[i - 3];
	}
	cout << way[floor];
	return 0;
}
