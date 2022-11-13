#include<bits/stdc++.h>
using namespace std;

int yt[100][100];

int main() {
	int num = 0;
	yt[1][1] = 1;
	cin >> num;
	cout << "1" << endl;
	for (int i = 2; i <= num; i++) {
		for (int j = 1; j <= i; j++) {
			yt[i][j] = yt[i - 1][j] + yt[i - 1][j - 1];
			cout<<yt[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
