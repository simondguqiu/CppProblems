#include<iostream>
using namespace std;

int bricks = 1; //�Ϸ�һ���ש��
int floors = 0; //ש��Ĳ���
int sum = 1; //ש�������


int main() {
	cin >> floors;
	for (int i = 2; i <= floors; i++) {
		sum = sum + i + bricks;
		bricks = i + bricks;
	}
	cout << sum;
}
