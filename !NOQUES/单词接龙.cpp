#include <bits/stdc++.h>

using namespace std;
int words;
string word[25];
int maxLength;
int visit[25];
char startLetter;

int sameExist(string a, string b) {
    for (int i = 0; i < min(a.length(), b.length()) - 1; i++) {
        string ta, tb;
        for (int j = a.length() - 1; j >= a.length() - 1 - i; j--) {
            ta = a[j] + ta;
        }
        for (int j = 0; j <= i; j++) {
            tb = tb + b[j];
        }
        if (ta == tb) {
            return i + 1;
        }
    }
    return -1;
}

void dfs(int currentWord, int length, int visited) {
    if (length > maxLength) {
        maxLength = length;
    }
    visit[currentWord]++;
    for (int i = 1; i <= words; i++) {
        int sameLength = sameExist(word[currentWord], word[i]);
        if (visit[i] < 2 && sameLength != -1) {
            dfs(i, length + word[i].length() - sameLength, visited + 1);
        }
    }
    visit[currentWord]--;
}

int main() {
    cin >> words;
    for (int i = 1; i <= words; i++) {
        cin >> word[i];
    }
    cin >> startLetter;
    for (int i = 1; i <= words; i++) {
        if (word[i][0] == startLetter) {
            dfs(i, word[i].length(), 1);
        }
    }
    cout << maxLength;
    return 0;
}