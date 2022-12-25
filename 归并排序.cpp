#include<bits/stdc++.h>

using namespace std;
int source[120000];
int merger[120000];

void mergeSort(int l, int r) {
    if (l == r) {
        return;
    }
    int mid = (l + r) / 2;
    mergeSort(l, mid);
    mergeSort(mid + 1, r);
    int i = l;
    int j = mid + 1;
    int k = l;
    while (i <= mid && j <= r) {
        if (source[i] <= source[j]) {
            merger[k] = source[i];
            k++;
            i++;
        } else {
            merger[k] = source[j];
            k++;
            j++;
        }
    }
    while (i <= mid) {
        merger[k] = source[i];
        k++;
        i++;
    }
    while (j <= r) {
        merger[k] = source[j];
        k++;
        j++;
    }
    for (i = l; i <= r; i++) {
        source[i] = merger[i];
    }
}

int main() {
    int num;
    cin >> num;
    for (int i = 0; i < num; i++) {
        cin >> source[i];
    }
    mergeSort(0, num - 1);
    for (int i = 0; i < num; i++) {
        cout << source[i] << " ";
    }
    return 0;
}