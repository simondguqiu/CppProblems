#include<iostream>
using namespace std;
int main() {
    int n = 0;
    cin >> n;
    for (int i = 7; i <= n; i = i + 7) {
        cout << i << " ";
    }
    return 0;
}
