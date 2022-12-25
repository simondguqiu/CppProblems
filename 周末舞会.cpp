/*#include <bits/stdc++.h>
using namespace std;
int main() {
    int lengthA, lengthB;
    int music;
    cin >> lengthA >> lengthB >> music;
    for (int i = 0; i < music; i++) { cout << i % lengthA + 1 << " " << i % lengthB + 1 << endl; }
    return 0;
}*/

#include <bits/stdc++.h>

using namespace std;
int lengthA, lengthB;
int music;
queue<int> dance1, dance2;
int tmpA, tmpB;

int main() {
    cin >> lengthA >> lengthB >> music;
    for (int i = 1; i <= lengthA; i++) {
        dance1.push(i);
    }
    for (int i = 1; i <= lengthB; i++) {
        dance2.push(i);
    }
    for (int i = 1; i <= music; i++) {
        tmpA = dance1.front();
        tmpB = dance2.front();
        cout << tmpA << " " << tmpB << endl;
        dance1.pop();
        dance2.pop();
        dance1.push(tmpA);
        dance2.push(tmpB);
    }
    return 0;
}