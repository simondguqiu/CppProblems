#include <bits/stdc++.h>

using namespace std;
long long maxWeight;
long long thingNumber;
long long weight[21000];
long long worth[21000];
long long dp[21000];

int main() {
  cin >> maxWeight >> thingNumber;
  for (long long i = 1; i <= thingNumber; i++) {
    cin >> weight[i];
    worth[i] = weight[i];
  }
  for (long long i = 1; i <= thingNumber; i++) {
    for (long long j = maxWeight; j >= weight[i]; j--) {
      dp[j] = max(dp[j], dp[j - weight[i]] + worth[i]);
    }
  }
  cout << maxWeight - dp[maxWeight];
  return 0;
}