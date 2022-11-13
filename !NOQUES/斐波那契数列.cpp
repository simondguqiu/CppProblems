#include<bits/stdc++.h>
using namespace std;

int main() {
	int fibonacci[205] = {0};
	fibonacci[1] = 1;
	fibonacci[2] = 1;
	int num = 0;
	cin>>num;
	for(int i = 3;i<=num;i++) {
		fibonacci[i] = fibonacci[i-1]+fibonacci[i-2];
	}
	cout<<fibonacci[num];
	return 0;
}
