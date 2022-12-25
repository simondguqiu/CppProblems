#include<iostream>
using namespace std;

int main() {
	int length = 0;
	int pos[105] = {0};
	cin >> length;
	pos[1] = 1;
	pos[2] = 2;
	for (int  i = 3; i <= length; i++) {
		pos[i] = pos[i - 1] + pos[i - 2];
	}
	cout << pos[length];
	return 0;
}
