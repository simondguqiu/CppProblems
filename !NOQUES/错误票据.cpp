#include <bits/stdc++.h>

using namespace std;
int ids[12000];
int idLines;
int idCnt;

int main() {
    cin >> idLines;
    idLines++;
    string tempIn;
    int buffer;
    for (int i = 1; i <= idLines; i++) {
        buffer = 0;
        getline(cin, tempIn);
        for (int j = 0; j < tempIn.length(); j++) {
            if (tempIn[j] >= '0' && tempIn[j] <= '9') {
                buffer = buffer * 10 + tempIn[j] - '0';
            } else {
                ids[++idCnt] = buffer;
                buffer = 0;
            }
        }
        ids[++idCnt] = buffer;
    }
    sort (ids + 2, ids + idCnt + 1);
    int addition = ids[2] - 2;
    int breakNumber, sameNumber;
    for (int i = 2; i <= idCnt; i++) {
        if (ids[i] != i + addition) {
            if (ids[i] == ids[i - 1]) {
                sameNumber = ids[i];
                addition--;
            } else {
                breakNumber = ids[i] - 1;
                addition = addition + ids[i] - (i + addition);
            }
        }
    }
    cout << breakNumber << " " << sameNumber;
    return 0;
}