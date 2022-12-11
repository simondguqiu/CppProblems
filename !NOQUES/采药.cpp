#include <bits/stdc++.h>

using namespace std;
long long maxWeight;
long long thingNumber;
long long weight[1500];
long long worth[1500];
long long dp[1500];

int main() {
  cin >> maxWeight >> thingNumber;
  for (long long i = 1; i <= thingNumber; i++) {
    cin >> weight[i] >> worth[i];
  }
  for (long long i = 1; i <= thingNumber; i++) {
    for (long long j = maxWeight; j >= weight[i]; j--) {
      dp[j] = max(dp[j], dp[j - weight[i]] + worth[i]);
    }
  }
  cout << dp[maxWeight];
  return 0;
}