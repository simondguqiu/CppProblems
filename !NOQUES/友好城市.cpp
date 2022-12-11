#include <bits/stdc++.h>

using namespace std;
struct friendCities {
    int north;
    int south;
};
friendCities cities[250000];
int cityNumber;
int lisLength = 1;
int lis[250000];

bool cmp(friendCities a, friendCities b) {
    return a.north < b.north;
}

int main() {
    cin >> cityNumber;
    for (int i = 1; i <= cityNumber; i++) {
        cin >> cities[i].north >> cities[i].south;
    }
    sort(cities + 1, cities + cityNumber + 1, cmp);
    lis[1] = cities[1].south;
    for (int i = 2; i <= cityNumber; i++) {
        if (cities[i].south > lis[lisLength]) {
            lis[++lisLength] = cities[i].south;
        } else {   
            int l, r, mid;
            l = 1;
            r = lisLength;
            while (l <= r) {
                mid = (l + r) / 2;
                if (lis[mid] >= cities[i].south) {
                    r = mid - 1;
                } else {
                    l = mid + 1;
                }
            }
            lis[l] = cities[i].south;
        }
    }
    cout << lisLength << endl;
    return 0;
}