#include <bits/stdc++.h>

using namespace std;
int studentNumber;
int studentHeight[120];
int leftToRight[120];
int rightToLeft[120];

int main() {
  cin >> studentNumber;
  for (int i = 1; i <= studentNumber; i++) {
    cin >> studentHeight[i];
  }
  for (int i = 1; i <= studentNumber; i++) {
    leftToRight[i] = 1;
    for (int j = 1; j <= i; j++) {
      if (leftToRight[j] >= leftToRight[i] &&
          studentHeight[j] < studentHeight[i]) {
        leftToRight[i] = leftToRight[j] + 1;
      }
    }
  }
  for (int i = studentNumber; i >= 1; i--) {
    rightToLeft[i] = 1;
    for (int j = studentNumber; j >= i; j--) {
      if (rightToLeft[j] >= rightToLeft[i] &&
          studentHeight[j] < studentHeight[i]) {
        rightToLeft[i] = rightToLeft[j] + 1;
      }
    }
  }
  /*for (int i = 1; i <= studentNumber; i++) {
    cout << leftToRight[i] << " ";
  }
  cout << endl;
  for (int i = 1; i <= studentNumber; i++) {
    cout << rightToLeft[i] << " ";
  }
  cout << endl;*/
  int maxSum = -1;
  for (int i = 1; i <= studentNumber; i++) {
    if (leftToRight[i] + rightToLeft[i] > maxSum) {
      maxSum = leftToRight[i] + rightToLeft[i];
    }
  }
  cout << studentNumber - maxSum + 1 << endl;
  return 0;
}