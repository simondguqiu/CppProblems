#include <bits/stdc++.h>
using namespace std;
int main() {
  double squareLength, squareWidth, brickSide = 0;
  cin >> squareLength >> squareWidth >> brickSide;
  cout << ceil(squareLength / brickSide) * ceil(squareWidth / brickSide);
}