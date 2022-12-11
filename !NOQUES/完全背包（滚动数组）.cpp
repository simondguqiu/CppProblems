#include <bits/stdc++.h>

using namespace std;
int maxWeight;
int thingNumber;
int weight[50];
int worth[50];
int dp[50];

int main() {
  cin >> maxWeight >> thingNumber;
  for (int i = 1; i <= thingNumber; i++) {
    cin >> weight[i] >> worth[i];
  }
  for (int i = 1; i <= thingNumber; i++) {
    for (int j = worth[i]; j <= maxWeight; j++) {
      dp[j] = (dp[j], dp[j - weight[i]] + worth[i]);
    }
  }
  cout << dp[maxWeight];
  return 0;
}