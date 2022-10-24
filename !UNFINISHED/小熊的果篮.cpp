/*
 * 修改TODO：
 * 使用双向链表，但是链表中应当存储的是块头的
 * 位置，而不是每个水果的位置。
 */

#include <bits/stdc++.h>

using namespace std;
struct linkTable {
    int prev;
    int next;
    int data;
};
int fruitNumber;
linkTable fruitPiles[240000];
queue<int> heads;
int deleteCnt;

int deleteNode(int x) {
    fruitPiles[fruitPiles[x].prev].next = fruitPiles[x].next;
    fruitPiles[fruitPiles[x].next].prev = fruitPiles[x].prev;
}

int main() {
    cin >> fruitNumber;
    cin >> fruitPiles[1].data;
    fruitPiles[1].prev = -1;
    fruitPiles[1].next = 2;
    for (int i = 1; i <= fruitNumber; i++) {
        cin >> fruitPiles[i].data;
        fruitPiles[i].prev = i - 1;
        fruitPiles[i].next = i == fruitNumber ? -1 : i + 1;
        if (fruitPiles[i - 1].data != fruitPiles[i].data) {
            heads.push(i);
        }
    }
    while (deleteCnt < fruitNumber) {
        while (!heads.empty()) {
            deleteNode(heads.front());
        }
    }
}