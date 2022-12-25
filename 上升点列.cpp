#include <bits/stdc++.h>

using namespace std;
int pointNumber;
int addNumber;
struct point {
  int x, y;
} points[600];
int dp[600][600];
int ans;

bool cmp(point a, point b) {
  if (a.x == b.x) {
    return a.y < b.y;
  } else {
    return a.x < b.x;
  }
}

int main() {
  cin >> pointNumber;
  cin >> addNumber;
  for (int i = 1; i <= pointNumber; i++) {
    cin >> points[i].x >> points[i].y;
  }
  sort(points + 1, points + pointNumber + 1, cmp);
  for (int i = 1; i <= pointNumber; i++) {
    for (int num = 0; num <= addNumber; num++) {
      dp[i][num] = num + 1;
      for (int j = 1; j < i; j++) {
        if (points[i].x >= points[j].x && points[i].y >= points[j].y) {
          int dis = points[i].x - points[j].x + points[i].y - points[j].y - 1;
          if (num >= dis) {
            dp[i][num] = max(dp[i][num], dp[j][num - dis] + dis + 1);
          }
        }
      }
      ans = max(ans, dp[i][num]);
    }
  }
  cout << ans;
  return 0;
}