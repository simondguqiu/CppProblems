#include <bits/stdc++.h>

using namespace std;
int maxWeight;
int thingNumber;
int weight[50];
int worth[50];
int dp[50][50];

int main() {
  cin >> maxWeight >> thingNumber;
  for (int i = 1; i <= thingNumber; i++) {
    cin >> weight[i] >> worth[i];
  }
  for (int i = 1; i <= thingNumber; i++) {
    for (int j = 1; j <= maxWeight; j++) {
      if (j >= weight[i]) {
        dp[i][j] = (dp[i - 1][j], dp[i - 1][j - weight[i]] + worth[i]);
      } else {
        dp[i][j] = dp[i - 1][j];
      }
    }
  }
  cout << dp[thingNumber][maxWeight];
  return 0;
}