#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
ll trees;
ll tree[1200000];
ll need;
ll tmpSum;
ll leftP, rightP, mid;

int main() {
    scanf("%lld %lld", &trees, &need);
    for (ll i = 1; i <= trees; i++) {
        scanf("%lld", &tree[i]);
        rightP = max(tree[i], rightP);
    }
    while (leftP <= rightP) {
        mid = (leftP + rightP) / 2;
        tmpSum = 0;
        for (ll i = 1; i <= trees; i++) {
            tmpSum = tree[i] - mid >= 0 ? tmpSum + tree[i] - mid : tmpSum;
        }
        if (tmpSum < need) {
            rightP = mid - 1;
        } else {
            leftP = mid + 1;
        }
    }
    printf("%lld", leftP - 1);
    return 0;
}