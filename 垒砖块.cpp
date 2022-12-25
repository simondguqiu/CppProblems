#include<iostream>
using namespace std;

int bricks = 1; //上方一层的砖块
int floors = 0; //砖块的层数
int sum = 1; //砖块的总数


int main() {
	cin >> floors;
	for (int i = 2; i <= floors; i++) {
		sum = sum + i + bricks;
		bricks = i + bricks;
	}
	cout << sum;
}
