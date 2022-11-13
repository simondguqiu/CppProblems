#include <bits/stdc++.h>
using namespace std;
int main() {
  int xScore, wScore, winScore;
  cin >> xScore >> wScore;
  winScore = 7 - max(xScore, wScore);
  for (int i = min(winScore, 6); i >= 1; i--) {
    if (6 % i == 0 && winScore % i == 0) {
      cout << winScore / i << "/" << 6 / i;
    }
  }
  return 0;
}